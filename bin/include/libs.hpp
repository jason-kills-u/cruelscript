#include <string>
#include <iostream>

#ifndef LIBS_HPP
#define LIBS_HPP

void interpret(std::string G)
{
	int B = 65;
	bool i = false;
	std::string T, T2;
	bool i2 = false;
	for(int i = 0; i < G.length(); i++)
	{
		if(G[i] == '+')
		{
			if(i == true)
			{
				T.push_back(G[i]);
			}
			if(i2 == true)
			{
				T2.push_back(G[i]);
			}
			B++;
		}
		else if(G[i] == '-')
		{
			if(i == true)
			{
				T.push_back(G[i]);
			}
			if(i2 == true)
			{
				T2.push_back(G[i]);
			}
			B--;
		}
		else if(G[i] == '.')
		{
			if(i == true)
			{
				T.push_back(G[i]);
			}
			std::cout << char(B);
		}
		else if(G[i] == '<')
		{
			i = true;
		}
		else if(G[i] == '>' && i == true)
		{
			i2 = true;
		}
		else if(G[i] == '[')
		{
			int res;
			for(int i = 0; i < T2.length(); i++)
			{
				if(T2[i] == '+')
				{
					res++;
				}
				else if(T2[i] == '-')
				{
					res--;
				}
			}
			for(int i = 0; i < res; i++)
			{
				interpret(T);
			}
		}
	}
}


#endif
