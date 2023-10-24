func shift(arr []int, steps int) {
	length := len(arr)
	steps = steps % length
	if steps < 0 {
		steps += length
	}
	reverse(arr)
	reverse(arr[:steps])
	reverse(arr[steps:])
}

func reverse(arr []int) {
	length := len(arr)
	for i := 0; i < length/2; i++ {
		arr[i], arr[length-1-i] = arr[length-1-i], arr[i]
	}
}