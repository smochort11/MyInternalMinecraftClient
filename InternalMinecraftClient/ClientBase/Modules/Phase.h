#pragma once

class Phase : public Module {
public:
	Phase(std::string cat) : Module(cat, "Phase", "Walks through walls.", 0x07) {};

	void OnGameTick(Actor* lp) override {
		lp->Position.upper.y = lp->Position.lower.y;
	}

	void OnDisable(ClientInstance* ci, Actor* lp) override {
		lp->setPos(lp->Position.lower);
	}
};