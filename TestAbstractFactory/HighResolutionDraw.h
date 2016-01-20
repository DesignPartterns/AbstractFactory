#pragma once
#include "IDraw.h"

class HighResolutionDraw :public IDraw
{
public:
	HighResolutionDraw();
	~HighResolutionDraw();
	void draw();
};