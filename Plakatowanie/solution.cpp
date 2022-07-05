#include <cstdio>
#include <vector>
#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	int N, output = 0, temp, i, j;
	bool is_redundant;
	std::vector <int> building_heights;
	std::vector <bool> building_redundant;
	std::cin >> N;

	for (i = 0; i < N; i++)
	{
		std::cin >> temp >> temp; // building length is unimportant for this task, just the heights
		building_heights.push_back(temp);
		building_redundant.push_back(false);
	}

	for (i = 0; i < N; i++)
	{
		if (building_redundant[i]) continue;

		output++;

		for (j = i + 1; j < N; j++)
		{
			if (building_heights[j] < building_heights[i])
			{
				break;
			}
			if (building_heights[j] == building_heights[i])
			{
				if (building_redundant[j]) // Already outclassed these buildings
				{
					break;
				}
				building_redundant[j] = true;
				continue;
			}
		}
	}
	
	std::cout << output;

	return 0;
}
