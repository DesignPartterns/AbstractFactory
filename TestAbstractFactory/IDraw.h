#pragma once
class IDraw
{
public:
	IDraw();
   ~IDraw();
	virtual void draw()  = 0;
};