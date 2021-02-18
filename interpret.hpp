#include <iostream>

void interpret(std::string G)
{
	int B = 65;
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
		else
		{
			continue;
		}
	}
}
