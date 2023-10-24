package main

import (
	"fmt"
	"sort"
)

func findPair(numbers []int, targetSum int) (int, int) {
	sort.Ints(numbers)

	left := 0
	right := len(numbers) - 1

	for left < right {
		sum := numbers[left] + numbers[right]
		if sum == targetSum {
			return numbers[left], numbers[right]
		} else if sum < targetSum {
			left++
		} else {
			right--
		}
	}

	return 0, 0
}

func main() {
	var n, x int
	fmt.Scan(&n, &x)

	numbers := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&numbers[i])
	}

	a, b := findPair(numbers, x)
	fmt.Println(a, b)
}
