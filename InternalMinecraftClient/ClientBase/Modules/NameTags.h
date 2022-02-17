#pragma once

class NameTags : public Module {
public:
	NameTags(std::string cat) : Module(cat, "NameTags", "There will always be nametags over players' heads", 0x07, true) {};

	void OnFrameRender(RenderUtils* ctx) override {
		for (auto ent : clientInst->getEntityList()) {
			// to be developed
		}
	}
};