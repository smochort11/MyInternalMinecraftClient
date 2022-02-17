#pragma once

class Jetpack : public Module {
public:
	Jetpack(std::string cat) : Module(cat, "Jetpack", "Fly like you are using a jetpack.", 'F') {};
	bool HoldMode() {
		return true;
	}

	void OnGameTick(Actor* lp) override {
		float calcYaw = (lp->bodyRots()->y + 90) * (PI / 180);
		float calcPitch = (lp->bodyRots()->x) * -(PI / 180);

		Vector3 moveVec;
		moveVec.x = cos(calcYaw) * cos(calcPitch) * 1.5;
		moveVec.y = sin(calcPitch) * 1.5;
		moveVec.z = sin(calcYaw) * cos(calcPitch) * 1.5;

		lp->lerpMotion(moveVec);
	}
};