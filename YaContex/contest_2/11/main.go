// Ваш код будет вставлен сюда
func isValidSudoku(board [rows][cols]int) bool {
	// Проверка по строкам и столбцам
	for i := 0; i < rows; i++ {
		rowSeen := make(map[int]bool)
		colSeen := make(map[int]bool)
		for j := 0; j < cols; j++ {
			// Проверка по строкам
			if board[i][j] != 0 {
				if rowSeen[board[i][j]] {
					return false
				}
				rowSeen[board[i][j]] = true
			}

			// Проверка по столбцам
			if board[j][i] != 0 {
				if colSeen[board[j][i]] {
					return false
				}
				colSeen[board[j][i]] = true
			}
		}
	}

	// Проверка по подматрицам 3x3
	for i := 0; i < rows; i += 3 {
		for j := 0; j < cols; j += 3 {
			seen := make(map[int]bool)
			for x := i; x < i+3; x++ {
				for y := j; y < j+3; y++ {
					if board[x][y] != 0 {
						if seen[board[x][y]] {
							return false
						}
						seen[board[x][y]] = true
					}
				}
			}
		}
	}

	return true
}