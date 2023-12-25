#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        string tempString = to_string(x);
        char const *num_char = tempString.c_str();

        int cursor1 = 0;
        int cursor2 = tempString.length() - 1;

        while (cursor1 < cursor2)
        {
            if (num_char[cursor1] != num_char[cursor2])
            {
                return false;
            }
            cursor1++;
            cursor2--;
        }

        return true;
    }
};

int main()
{
    Solution sol;

    int test_case_1 = 121;
    int test_case_2 = -121;
    int test_case_3 = 10;

    cout << "Test Case 1 (121): " << (sol.isPalindrome(test_case_1) ? "True" : "False") << endl;
    cout << "Test Case 2 (-121): " << (sol.isPalindrome(test_case_2) ? "True" : "False") << endl;
    cout << "Test Case 3 (10): " << (sol.isPalindrome(test_case_3) ? "True" : "False") << endl;

    return 0;
}
