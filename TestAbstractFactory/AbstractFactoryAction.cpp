// 定义控制台应用程序的入口点。
//

#include "IConfigFactory.h"
#include "HighResolutionFactory.h"
#include "IDraw.h"
#include "HighResolutionDraw.h"
#include "HighResolutionPrint.h"
#include "IPrint.h"


int main()
{
	IConfigFactory * configFactory = new HighResolutionFactory();
	IDraw *highDraw = configFactory->getDrawFctory();
	highDraw->draw();
	IPrint *highPrint = configFactory->getPrintFactory();
	highPrint->print();
    return 0;
}

