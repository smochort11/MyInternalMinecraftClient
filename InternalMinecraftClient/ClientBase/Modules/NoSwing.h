#pragma once

class NoSwing : public Module {
public:
	NoSwing(std::string cat) : Module(cat, "NoSwing", "Disables swing animation", 0x07) {};

	void OnGameTick(Actor* lp) override {
		*lp->SwingAnimation() = 0;
	}
};