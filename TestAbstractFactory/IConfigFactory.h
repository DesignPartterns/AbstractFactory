#pragma once
#include "IPrint.h"
#include "IDraw.h"


class IConfigFactory
{
public:
		IConfigFactory();
		~IConfigFactory();
		virtual IPrint *getPrintFactory()=0;
		virtual IDraw *getDrawFctory()=0;
};