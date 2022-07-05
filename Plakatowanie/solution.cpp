#include <cstdio>
#include <vector>
#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::vector <int> building_heights;
	std::vector <int> poster_stack;
	int N, output = 0, temp;
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		/* building length is unimportant for this task, just the heights */
		std::cin >> temp >> temp;
		building_heights.push_back(temp);
	}

	for (int i = 0; i < N; i++)
	{
		while (!poster_stack.empty() && poster_stack.back() > building_heights[i])
		{
			poster_stack.pop_back();
		}

		if (poster_stack.empty() || poster_stack.back() < building_heights[i])
		{
			poster_stack.push_back(building_heights[i]);
			output++;
		}
	}
	
	std::cout << output;

	return 0;
}
