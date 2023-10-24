func isLucky(number string) bool {
	a := rune(number[0]) + rune(number[1]) + rune(number[2])
	b := rune(number[3]) + rune(number[4]) + rune(number[5])
	if a == b {
		return true
	}
	return false
}