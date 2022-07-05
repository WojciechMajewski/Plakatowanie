#include <cstdio>
#include <vector>
#include <iostream>

struct Tbuilding
{
	int length;
	int height;
};

int main()
{
	std::ios_base::sync_with_stdio(false);
	int N;
	std::vector <Tbuilding> buildings;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		Tbuilding temp;
		std::cin >> temp.length >> temp.height;
		buildings.push_back(temp);
	}
	

	return 0;
}
