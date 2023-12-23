package main

import (
	"fmt"
)

func twoSum(nums []int, target int) []int {
	for startCursor := 0; startCursor < len(nums); startCursor++ {
		for endCursor := startCursor + 1; endCursor < len(nums); endCursor++ {
			if nums[startCursor]+nums[endCursor] == target {
				return []int{startCursor, endCursor}
			}
		}
	}
	return nil
}

func printResult(input []int, result []int, target int) {
	fmt.Printf("Input Array: %v\n", input)
	fmt.Printf("Target: %d\n", target)

	if result != nil {
		fmt.Printf("Solution: Indices [%d, %d] (Values: [%d, %d])\n",
			result[0], result[1], input[result[0]], input[result[1]])
	} else {
		fmt.Println("No solution found.")
	}
}

func main() {
	testCases := [][]int{
		{2, 7, 11, 15},
		{3, 2, 4},
		{3, 3},
	}

	targets := []int{9, 6, 6}

	for i, nums := range testCases {
		result := twoSum(nums, targets[i])
		printResult(nums, result, targets[i])
	}
}
