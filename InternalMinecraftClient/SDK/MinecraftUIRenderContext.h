#include <cstdint>
#include "../Utils/Math.h"

// 48 8B C4 48 89 58 ? 55 56 57 41 54 41 55 41 56 41 57 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 0F 29 70 B8 0F 29 78 A8 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 4C 8B FA 48 89 54 24 ? 4C 8B
// Text sig

// 48 89 5C 24 10 57 48 81 EC ? ? ? ? ? ? ? ? 48 8B 05 ? ? ? ? ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? ? ? ? ? 48 8B DA 48 8B F9 33 D2 41 B8
// Sig sig

// 48 89 5C 24 18 56 57 41 56 48 81 EC ? ? ? ? ? ? ? ? 48 8B 05 ? ? ? ? ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? ? ? ? ? 48 8B FA 48 8B F1 48 8B 02
// vSig

class MinecraftUIRenderContext { // Might setup internal rendering later
private:
    virtual void Constructor(void);
public:
    virtual float getLineLength(class BitmapFont* font, class TextHolder* text, float textSize, bool unknown);
    virtual float getTextAlpha();
    virtual void setTextAlpha(float alpha);
    virtual __int64 drawDebugText(const float* pos, class TextHolder* text, float* color, float alpha, unsigned int textAlignment, const float* textMeasureData, const void* caretMeasureData);
    virtual __int64 drawText(class BitmapFont* font, struct Vec4* position, class TextHolder* text, _RGB colour, float alpha, unsigned int textAlignment, const float* textMeasureData, const uintptr_t* caretMeasureData);
    virtual void flushText(float timeSinceLastFlush);
private:
    virtual __int64 Function7(); // drawImage
    virtual __int64 Function8(); // drawNineslice
    virtual __int64 Function9(); // flushImages
    virtual __int64 Function10(); // beginSharedMeshBatch
    virtual __int64 Function11(); // endSharedMeshBatch
public:
    virtual void drawRectangle(struct Vec4 position, _RGB colour, float alpha, int lineWidth);
    virtual void fillRectangle(struct Vec4 position, _RGB colour, float alpha);
};