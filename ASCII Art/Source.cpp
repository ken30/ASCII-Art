#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/

int main()
{
	int L;
	std::cin >> L; std::cin.ignore();
	int H;
	std::cin >> H; std::cin.ignore();
	std::string T;
	std::getline(std::cin, T);

	std::string asci[27];

	for (int i = 0; i < H; i++) {
		std::string ROW;
		std::getline(std::cin, ROW);

		asci[i] = ROW;
	}

	int * index = new int[T.length()];
	int size;

	for (int i = 0; i < T.length(); i++)
	{
		if (T[i] >= 'A' && T[i] <= 'Z')
		{
			index[i] = T[i] - 'A';
			size++;
		}
		else if (T[i] >= 'a' && T[i] <= 'z')
		{
			index[i] = T[i] - 'a';
			size++;
		}
		else
		{
			index[i] = -1;
			size++;
		}
	}

	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;

	for (int h = 0; h < H; h++)
	{
		for (int i = 0; i < size; i++)
		{
			for (int l = 0; l < L; l++)
			{
				if (index[i] >= 0 && index[i] <= 26)
				{

					std::cout << asci[h][index[i] * L + l];
				}
				else
				{
					std::cout << asci[h][26 * L + l];
				}
			}
		}
		std::cout << std::endl;
	}
}