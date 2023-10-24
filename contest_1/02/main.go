package main

import (
	"fmt"
	"math"
)

func main() {
	var person float64 = 0.5

	var dub_one_year float64 = 20

	var topol_one_year float64 = 32

	var year float64 = 365

	var kisl_for_per float64 = person * year
	fmt.Println(kisl_for_per)

	var kisl_of_top float64 = kisl_for_per / topol_one_year
	fmt.Println(math.Round(kisl_of_top))

	var kisl_of_dub float64 = kisl_for_per / dub_one_year
	fmt.Println(math.Ceil(kisl_of_dub))

}
