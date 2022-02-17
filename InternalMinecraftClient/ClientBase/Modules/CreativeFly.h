#pragma once

class CreativeFly : public Module {
public:
	CreativeFly(std::string cat) : Module(cat, "CreativeFly", "Fly like in Creative mode.", 0x07) {};
	bool isFlying;

	void OnEnable(ClientInstance* ci, Actor* lp) override {
		isFlying = lp->IsFlying;
	}

	void OnGameTick(Actor* lp) override {
		lp->IsFlying = true;
	}

	void OnDisable(ClientInstance* ci, Actor* lp) override {
		lp->IsFlying = isFlying;
	}
};