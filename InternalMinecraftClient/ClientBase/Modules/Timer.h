#pragma once

class Timer : public Module { // worked
public:
	Timer(std::string cat) : Module(cat, "Timer", "Time passes by 2x as fast [40tps]", 0x07) {};

	void OnEnable(ClientInstance* ci, Actor* lp) override {
		ci->timerClass->setTimerSpeed(50);
	}

	void OnDisable(ClientInstance* ci, Actor* lp) override {
		ci->timerClass->setTimerSpeed(20);
	}
};