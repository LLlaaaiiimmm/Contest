

func fill(maze [][]int) {
	rows := len(maze)
	cols := len(maze[0])

	// Вспомогательная функция для проверки допустимости ячейки
	isValidCell := func(row, col int) bool {
		return row >= 0 && row < rows && col >= 0 && col < cols
	}

	// Обход всех ячеек игрового поля
	for row := 0; row < rows; row++ {
		for col := 0; col < cols; col++ {
			if maze[row][col] == -1 {
				// Пропуск мин
				continue
			}

			// Подсчет количества мин вокруг текущей ячейки
			minesCount := 0
			for i := -1; i <= 1; i++ {
				for j := -1; j <= 1; j++ {
					if i == 0 && j == 0 {
						// Пропуск текущей ячейки
						continue
					}

					neighborRow := row + i
					neighborCol := col + j

					if isValidCell(neighborRow, neighborCol) && maze[neighborRow][neighborCol] == -1 {
						minesCount++
					}
				}
			}

			// Присвоение значения ячейке
			maze[row][col] = minesCount
		}
	}
}
   