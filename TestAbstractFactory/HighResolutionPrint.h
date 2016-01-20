#pragma once
#include "IPrint.h"

class HighResolutionPrint :public IPrint
{
public:
	HighResolutionPrint();
	~HighResolutionPrint();
	void print();
};
