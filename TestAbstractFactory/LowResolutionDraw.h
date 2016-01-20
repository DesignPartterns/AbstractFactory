#pragma once
#include "IDraw.h"

class LowResolutionDraw:public IDraw
{
public:
	LowResolutionDraw();
	~LowResolutionDraw();
	void draw();
};