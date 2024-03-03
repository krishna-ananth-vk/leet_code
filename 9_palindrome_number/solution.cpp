#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        if (x == 0)
        {
            return true;
        }

        string xCopy = to_string(x);
        int l = xCopy.length() - 1;
        for (size_t i = 0; i <= l; i++)
        {
            if (xCopy[i] != xCopy[l - i])
            {
                return false;
            }
        }
        return true;

        // long unsigned int xInv = 0;
        // int xCp = x;
        // while (xCp > 0)
        // {
        //     int r = xCp % 10;
        //     xInv = (xInv * 10) + r;
        //     xCp = xCp / 10;
        // }
        // cout << x << " inv: " << xInv << endl;
        // return xInv == x;
    }
};

int main()
{
    Solution solution;
    int s;
    cout << "Enter number: ";
    cin >> s;
    int shifted = s >> 3;
    cout << "shifted: " << shifted;
    bool result = solution.isPalindrome(s);
    cout << "is palindrome:  " << result << endl;
    return 0;
}