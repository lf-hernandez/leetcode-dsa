#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string numStr = std::to_string(x);
        const char *numChars = numStr.c_str();

        int leftIndex = 0;
        int rightIndex = numStr.length() - 1;

        while (leftIndex < rightIndex) {
            if (numChars[leftIndex] != numChars[rightIndex]){
                return false;
            }
            leftIndex++;
            rightIndex--;
        }

        return true;
    }

	bool optimizedIsPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        return x == reversedHalf || x == reversedHalf / 10;
	}
};

int main()
{
    Solution sol;

    int test_case_1 = 121;
    int test_case_2 = -121;
    int test_case_3 = 10;

    std::cout << "Test Case 1 (121): " << (sol.optimizedIsPalindrome(test_case_1) ? "True" : "False") << std::endl;
    std::cout << "Test Case 2 (-121): " << (sol.isPalindrome(test_case_2) ? "True" : "False") << std::endl;
    std::cout << "Test Case 3 (10): " << (sol.isPalindrome(test_case_3) ? "True" : "False") << std::endl;

    return 0;
}
