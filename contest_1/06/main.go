package main

import "fmt"

func main() {

	var n int
	fmt.Scan(&n)
	a := 0
	b := 0
	c := 0
	d := 0
	e := 0

	for n-5000 >= 0 {
		n = n - 5000
		a += 1
	}
	for n-1000 >= 0 {
		n = n - 1000
		b += 1
	}
	for n-500 >= 0 {
		n = n - 500
		c += 1
	}
	for n-200 >= 0 {
		n = n - 200
		d += 1
	}
	for n-100 >= 0 {
		n = n - 100
		e += 1
	}
	fmt.Println(a, b, c, d, e)
}
