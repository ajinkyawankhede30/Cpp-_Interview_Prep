#include "Factory_Bike.cpp"
#include <stdexcept>


int main()
{
	int code{};
	try
	{
		while(true){

			std::cout << "Enter Bike code [1 To 4]: ";
			std::cin >> code;
			if (code == 5)
				throw std::exception("Invalid Bike Code. Enter between 1 to 4\n");

			if (code)
			{
				iBike* ibk = NULL;
				ibk = Bike_Factory::FactoryBike_method((Bike_code)code);
				delete ibk;
			}
			else
				break;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error Occured...\nMessage: " << e.what() << "\n";
	}
	std::cout << "Exit...\n";
	return 0;
}
