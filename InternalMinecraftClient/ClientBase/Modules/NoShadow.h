#pragma once

class NoShadow : public Module {
public:
	NoShadow(std::string cat) : Module(cat, "NoShadow", "Disables shadows", 0x07) {
	}

	virtual void OnGameTick(Actor* lp) override {
		lp->setShadowRadius(0.f);
	}

	void OnDisable(ClientInstance* a1, Actor* lp) override {
		lp->setShadowRadius(0.60f);
	}
};