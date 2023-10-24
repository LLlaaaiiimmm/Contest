package main

import "fmt"

func main() {
	var cat string = "Кот"
	var jiraf string = "Жираф"
	var kurwa string = "Курица"
	var straus string = "Страус"
	var delphine string = "Дельфин"
	var pleo string = "Плезиозавры"
	var ping string = "Пингвин"
	var utka string = "Утка"

	var ans1 string
	var ans2 string
	var ans3 string

	fmt.Scan(&ans1)
	fmt.Scan(&ans2)
	fmt.Scan(&ans3)

	if ans1 == "Нет" && ans2 == "Нет" && ans3 == "Нет" {
		fmt.Println(cat)
	}
	if ans1 == "Нет" && ans2 == "Нет" && ans3 == "Да" {
		fmt.Println(jiraf)
	}
	if ans1 == "Нет" && ans2 == "Да" && ans3 == "Нет" {
		fmt.Println(kurwa)
	}
	if ans1 == "Нет" && ans2 == "Да" && ans3 == "Да" {
		fmt.Println(straus)
	}
	if ans1 == "Да" && ans2 == "Нет" && ans3 == "Нет" {
		fmt.Println(delphine)
	}
	if ans1 == "Да" && ans2 == "Нет" && ans3 == "Да" {
		fmt.Println(pleo)
	}
	if ans1 == "Да" && ans2 == "Да" && ans3 == "Нет" {
		fmt.Println(ping)
	}
	if ans1 == "Да" && ans2 == "Да" && ans3 == "Да" {
		fmt.Println(utka)
	}
}
