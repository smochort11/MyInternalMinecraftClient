#pragma once

class Airswim : public Module {
public:
	Airswim(std::string cat) : Module(cat, "Airswim", "The air is now water, you can swim in it.", 0x07) {};

	void OnGameTick(Actor* lp) override {
		lp->IsInWater = true;
		lp->fallDistance = 0.f;
		lp->startSwimming();
		lp->doWaterSplashEffect();
		lp->IsSwimming = true;
		lp->HasEnteredWater = true;
	}
};