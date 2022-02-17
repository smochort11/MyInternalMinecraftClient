#pragma once

class AirJump : public Module {
public:
	AirJump(std::string cat) : Module(cat, "AirJump", "You can double, triple, etc jump.", 0x07) {};

	void OnGameTick(Actor* lp) override {
		lp->onGround = 1;
	}
};