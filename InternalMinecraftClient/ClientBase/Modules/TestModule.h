#pragma once
#include <Windows.h>

class TestModule : public Module {
public:
	VirtualFuncHook* func;
	TestModule(std::string cat) : Module(cat, "TestModule", "TestModule", 0x07) {
		uintptr_t address = Mem::findSig("41 0F 10 08 48 8B C2 0F"); //Currently Fog Color
		func = hooks->createHook("Test", address, Test);

	}

	void OnEnable(ClientInstance* a1, Actor* a2) override {
		hooks->debugEcho("", "Test module!");
		func->enableHook();
	}

	void OnDisable(ClientInstance* a1, Actor* a2) override {
		func->disableHook();
	}

	static float* Test(__int64 _this, float* color, __int64 a3, float a4) {
		return color;
	}
    virtual void OnFrameRender(RenderUtils* ctx) {
		ctx->FillRectAndDrawRect(Vector4(10, 100, 10, 100), _RGB(0, 0, 255), _RGB(255, 0, 0), 0.25f, 1.f, 1.f);
	}
    virtual void OnTick(ClientInstance* ci) {}
	virtual void OnGameTick(Actor* lp) {
		lp->lerpybutworky(Vector3(0, 1, 0));
	}
};