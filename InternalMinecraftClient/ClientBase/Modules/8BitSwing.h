#pragma once

class EightBitSwing : public Module {
public:
	EightBitSwing(std::string cat) : Module(cat, "8BitSwing", "Changes swing animation to look like an 8bit videogame swing animation.", 0x07) {}
	void* targetAddress;

	void OnEnable(ClientInstance* a1, Actor* a2) override {
		if (targetAddress == nullptr)
			targetAddress = (void*)Mem::findSig("41 ? ? CD 49 8B CF FF 90");
		BYTE* patch = (BYTE*)"\x90\x90\x90\x90\x90\x90\x90\x90\x90";
		Mem::patchBytes((BYTE*)((uintptr_t)targetAddress), patch, 4);

	}

	void OnDisable(ClientInstance* a1, Actor* a2) override {
		BYTE* patch = (BYTE*)"\x41\x0F\x28\xCD\x49\x8B\xCF\xFF\x90";//41 0F 28 CD 49 8B CF FF 90
		Mem::patchBytes((BYTE*)((uintptr_t)targetAddress), patch, 4);
	}
};