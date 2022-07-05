#include <cstdio>
#include <vector>
#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	int N, output = 0, temp;
	bool is_redundant;
	std::vector <int> building_heights;
	building_heights.push_back(0); // simplifies the comparing process
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		std::cin >> temp >> temp; // building length is unimportant for this task, just the heights
		building_heights.push_back(temp);

		is_redundant = false;
		for (int j = building_heights.size() - 2; j >= 0; j--)
		{
			if (building_heights[j] < building_heights.back())
			{
				break;
			}
			
			if (building_heights[j] == building_heights.back())
			{
				is_redundant = true;
				break;
			}
		}

		if (!is_redundant)
		{
			output++;
		}
	}
	
	std::cout << output;

	return 0;
}
