#include <string>
#include <iostream>

#ifndef LIBS_HPP
#define LIBS_HPP

void interpret(std::string G)
{
	int B = 65;
	std::string T, T2;
	for(int i = 0; i < G.length(); i++)
	{
		if(G[i] == '+')
		{
			B++;
		}
		else if(G[i] == '-')
		{
			B--;
		}
		else if(G[i] == '.')
		{
			std::cout << char(B);
		}
	}
}


#endif
