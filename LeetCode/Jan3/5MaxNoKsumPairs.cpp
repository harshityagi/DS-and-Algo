#include <iostream>
#include <vector>
using namespace std;

int maxOperations(vector<int> &nums, int k)
{
	sort(nums.begin(), nums.end());
	int start = 0;
	int end = nums.size() - 1;
	int count = 0;
	while (start < end)
	{
		int sum = nums[start] + nums[end];
		if (sum > k)
		{
			end--;
		}
		else if (sum < k)
		{
			start++;
		}
		else
		{
			// sum ==k
			end--;
			start++;
			count++;
		}
	}
	return count;
}

int main()
{
	int k;
	cin >> k;
	vector<int> nums{3, 1, 3, 4, 3};
	int res = maxOperations(nums, k);
	cout << res;
}