#include <iostream>
#include <vector>
class Solution
{
public:
	int backtracking(vector<int> &nums, int b)
	{
		if (b <= 0)
			return 1;
		int res = 0;
		for (int i = 0; i < b; ++i)
			if ((b % nums[i] == 0) || (nums[i] % b == 0))
			{
				swap(nums[i], nums[b - 1]);
				res += backtracking(nums, b - 1);
				swap(nums[i], nums[b - 1]);
			}
		return res;
	}
	int countArrangement(int N)
	{
		vector<int> nums(N);
		for (int i = 0; i < N; ++i)
			nums[i] = i + 1;
		return backtracking(nums, N);
	}
};