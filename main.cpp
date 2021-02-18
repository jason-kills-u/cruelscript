#include <string>
#include <cstdlib>
#include <fstream>
#include "interpret.hpp"

int main(int argc, char **argv)
{
	if(argc < 2)
	{
		std::cout << "CruelScript Version 1.3.0, New Version Every Weeks" << std::endl;
		while(true)
		{
			std::string g;
			std::cout << ">>> ";
			std::cin >> g;
			if(g == "exit")
			{
				break;
			}
			interpret(g);
			std::cout << std::endl;
		}
	}
	else if(argc > 1 && argc < 3)
	{
		std::ifstream Files(argv[1]);
		std::string g;
		getline(Files, g);
		interpret(g);
		Files.close();
	}	
}
