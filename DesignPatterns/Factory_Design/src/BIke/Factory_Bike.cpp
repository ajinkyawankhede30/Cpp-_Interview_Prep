#include "Bike_Object.cpp"
#include <Windows.h>

class Bike_Factory {
public:
	static iBike* FactoryBike_method(Bike_code code)
	{
		iBike* bk = NULL;
		switch (code)
		{
			case Bike_code::TVS:
			{
				bk = new TVS();
				break;
			}
			case Bike_code::Bajaj:
			{
				bk = new Bajaj();
				break;
			}
			case Bike_code::Honda:
			{
				bk = new Honda();
				break;
			}
			case Bike_code::Hero:
			{
				bk = new Hero();
				break;
			}
			default:
			{
				std::cout << "Invalid code.\n";
				bk = NULL;
				return bk;
				
			}
		}

		bk->GetBikeInfo();
		return bk;
	}
};