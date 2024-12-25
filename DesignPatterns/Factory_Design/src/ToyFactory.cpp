#include "ToyFactory.h"


Toy* ToyFactory::CreateToy(int toy_code)
{
	Toy* toy = NULL;
	switch (toy_code)
	{
		case 1:
		{
			toy = new Car();
			break;
		}
		case 2:
		{
			toy = new Bike();
			break;
		}
		case 3:
		{
			toy = new Truck();
			break;
		}
		case 4:
		{
			toy = new Doll();
			break;
		}
		default:
		{
			std::cout << "Invalid toy code. Input valid toy code.\n\n";
			return NULL;
		}
	}

	toy->PrepareParts();
	toy->AssembleParts();
	toy->ApplyLable();
	
	return toy;
}


ToyFactory::ToyFactory()
{
	std::cout << "Toy Factory Constructor\n";
}

ToyFactory::~ToyFactory()
{
	std::cout << "Toy Factory Destructor\n\n";
}