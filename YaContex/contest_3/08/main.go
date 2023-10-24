package main

import "fmt"

func findNumberWithoutPair(numbers []int) int {
	result := 0
	for _, num := range numbers {
		result ^= num
	}
	return result
}

func main() {
	var n int
	fmt.Scan(&n)

	numbers := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&numbers[i])
	}

	withoutPair := findNumberWithoutPair(numbers)
	fmt.Println(withoutPair)
}
