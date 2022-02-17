#pragma once

class NoBrakes : public Module {
public:
	NoBrakes(std::string cat) : Module(cat, "NoBrakes", "Cobwebs or powder snow will not slow you down", 0x07) {};

	void OnGameTick(Actor* lp) override {
		lp->SlowDown = {0, 0, 0};
	}
};