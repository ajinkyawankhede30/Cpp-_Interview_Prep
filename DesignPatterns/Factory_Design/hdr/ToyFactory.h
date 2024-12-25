#pragma once
#include "Object.h"

class ToyFactory
{
public:
	ToyFactory();
	~ToyFactory();

	static Toy* CreateToy(int toy_code);

};
