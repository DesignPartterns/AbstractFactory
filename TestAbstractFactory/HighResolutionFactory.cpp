#include "HighResolutionFactory.h"
#include "HighResolutionPrint.h"
#include "HighResolutionDraw.h"
//#include "stdafx.h"
#include "IPrint.h"
#include "IDraw.h"

HighResolutionFactory::HighResolutionFactory()
{

}

HighResolutionFactory::~HighResolutionFactory()
{

}

IPrint *HighResolutionFactory::getPrintFactory()
{
	IPrint *print = new HighResolutionPrint();
	return print;
}

IDraw * HighResolutionFactory::getDrawFctory()
{
	IDraw * draw = new HighResolutionDraw();
	return draw;
}