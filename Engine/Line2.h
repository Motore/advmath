#pragma once
#include "Vec2.h"
#include "Graphics.h"

class Line2
{
public:
	void Draw(Vec2 p0, Vec2 p1, Color c) const;
	void DrawFormula(float k, float n, Color c) const;

private:
	Graphics& gfx;
};