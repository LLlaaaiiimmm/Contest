package main

import "fmt"

func main() {
	var a float64
	var b float64
	var c float64

	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)

	if a > b {
		if a > c {
			fmt.Println(a)
		} else {
			fmt.Println(c)
		}
	} else {
		if b > c {
			fmt.Println(b)
		} else {
			fmt.Println(c)
		}
	}

}
