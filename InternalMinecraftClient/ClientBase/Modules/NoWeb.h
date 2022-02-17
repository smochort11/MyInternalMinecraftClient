#pragma once
#include "../Module.h"
#include <string>
#include "../../SDK/Actor.h"

class NoWeb : public Module {
public:
	NoWeb(std::string cat) : Module(cat, "NoWeb", "No cobweb slowdown", 0x0) {};

	void OnGameTick(Actor* lp) override {
		lp->resetBlockMovementSlowdownMultiplier();
	}
};