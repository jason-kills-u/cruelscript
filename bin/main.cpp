#include "include/libs.hpp"

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		std::cout << "CruelScript version 1.0" << std::endl;
		while(true)
		{
			std::string g;
			std::cout << "> ";
			std::cin >> g;
			if(g == "exit")
			{
				break;
			}
			interpret(g);
			std::cout << std::endl;
		}
	}
	return 0;
}
