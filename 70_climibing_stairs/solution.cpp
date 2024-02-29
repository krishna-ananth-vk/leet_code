#include <iostream>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        int prev = 0;
        int sum = 1;
        for (size_t i = 0; i < n; i++)
        {
            sum = sum + prev;
            prev = sum - prev;
        }
        return sum;
    }
};

int main()
{
    Solution solution;
    int n;
    cin >> n;
    int result = solution.climbStairs(n);
    cout << "Number ways: " << result;
    return 0;
}