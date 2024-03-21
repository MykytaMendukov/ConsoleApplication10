#ifndef h_flavors_type
#define h_flavors_type


#include "library.h"
#include "dev_main.h"
#include "stage_main.h"
#include "prod_main.h"


enum FlavorsType
{
	developer,
	stage,
	release,
};
class Flavors
{
public:
	static void runApp(FlavorsType flavours_type)
	{
		switch (flavours_type)
		{
		case developer:
			dev_main();
			break;
		case stage:
			stage_main();
			break;
		case release:
			prod_main();
			break;
		default:
			break;
		}
	}
};


#endif