#pragma once

class AutoSprint : public Module {
public:
	AutoSprint(std::string cat) : Module(cat, "AutoSprint", "You will always sprint.", 0x07) {};

	void OnGameTick(Actor* lp) override {
		lp->setSprinting(true);
	}
};