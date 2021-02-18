/*
Copyright (C) 2021  jason_kills_u

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#include <string>
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
