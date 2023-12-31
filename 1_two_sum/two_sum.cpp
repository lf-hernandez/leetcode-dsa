#include <cstdio>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (size_t head = 0; head < nums.size(); head++)
            for (size_t tail = head + 1; tail < nums.size(); tail++) {
                if (nums[head] + nums[tail] == target) {
                    return { static_cast<int>(head), static_cast<int>(tail) };
                }
            }
        return {};
    }

    void printResult(std::vector<int>& input, std::vector<int>& result, int target) {
        printf("Input Array: ");
        for (int num : input) {
            printf("%d ", num);
        }
        printf("\nTarget: %d\n", target);

        if (!result.empty()) {
            printf("Solution: Indices [%d, %d] (Values: [%d, %d])\n",
                result[0], result[1], input[result[0]], input[result[1]]);
        } else {
            printf("No solution found.\n");
        }
    }
};

int main() {
    Solution sln;
    std::vector<int> test_case_1 = { 2, 7, 11, 15 };
    std::vector<int> test_case_2 = { 3, 2, 4 };
    std::vector<int> test_case_3 = { 3, 3 };

    std::vector<int> test_results_1 = sln.twoSum(test_case_1, 9);
    std::vector<int> test_results_2 = sln.twoSum(test_case_2, 6);
    std::vector<int> test_results_3 = sln.twoSum(test_case_3, 6);
    
    sln.printResult(test_case_1, test_results_1, 9);
    sln.printResult(test_case_2, test_results_2, 6);
    sln.printResult(test_case_3, test_results_3, 6);

    return 0;
}
