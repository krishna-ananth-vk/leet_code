#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	void sortColors(vector<int> &nums)
	{
		int red = 0, blue = 0, white = 0;

		for (int i : nums)
		{
			if (i == 0)
			{
				red++;
			}
			if (i == 1)
			{
				white++;
			}
			if (i == 2)
			{
				blue++;
			}
		}
		nums.clear();

		for (size_t i = 0; i < red; i++)
		{
			nums.push_back(0);
		}
		for (size_t i = 0; i < white; i++)
		{
			nums.push_back(1);
		}
		for (size_t i = 0; i < blue; i++)
		{
			nums.push_back(2);
		}
	}
};

int main()
{
	Solution solution;
	vector<int> numbers = {2, 0, 2, 1, 1, 0};

	solution.sortColors(numbers);
	cout << "[";
	for (int i : numbers)
	{
		cout << i;
	}
	cout << "]";
	return 0;
}