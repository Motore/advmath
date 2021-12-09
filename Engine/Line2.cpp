#include "Line2.h"
#include <iostream>

void Line2::Draw(Vec2 p0, Vec2 p1, Color c) const
{
	gfx.DrawLine(p0, p1, c);
}

void Line2::DrawFormula(float k, float n, Color c) const
{
	std::cout << "bla";
}
