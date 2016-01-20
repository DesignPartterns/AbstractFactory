#pragma once
#include "IConfigFactory.h"

class HighResolutionFactory:public IConfigFactory
{
public:
	HighResolutionFactory();
	~HighResolutionFactory();
	IPrint *getPrintFactory();
	IDraw * getDrawFctory();
};