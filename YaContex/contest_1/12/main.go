package main

import "fmt"

func main() {
	var n = 0
	var x int
	fmt.Scan(&x)
	for x > 1 {
		if x%2 == 0 {
			x = x / 2
		} else {
			x = 3*x + 1
		}
		n++

	}
	fmt.Println(n)

}
