package main

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"log"
)

// создаем структуры чтобы было легче нам работать
type Task struct {
	UserID    int    `json:"user_id"`
	ID        int    `json:"id"`
	Title     string `json:"title"`
	Completed bool   `json:"completed"`
}

type Projects struct {
	ProjectID int    `json:"project_id"`
	Tasks     []Task `json:"tasks"`
}

func main() {
	//Открытие файла JSON
	data, err := ioutil.ReadFile("data.json")
	if err != nil {
		log.Fatal(err)
	}
	// создали переменную куда будет записываться инфа из файла JSON к нам
	var projects []Projects
	err = json.Unmarshal(data, &projects)
	if err != nil {
		log.Fatal(err)
	}
	//просим юзер айди
	var userID int
	_, err = fmt.Scan(&userID)
	if err != nil {
		log.Fatal(err)
	}
	// создадим пустой счетчик
	completedTasks := 0
	// создаем прожект который проходится пл прожектс(который имеет структуру ПРОЖЕКТС)
	for _, project := range projects {
		//Тоже самое что и впервом, НО! мы открываем наш прожект часть струтуры Таскс
		// в которой находится другая структура
		for _, task := range project.Tasks {
			// проходясь в таске по прожект.такскс мы можем найти юзерайди
			//и так же выполненные задания
			// если все оке то чирканем что такое есть
			if task.UserID == userID && task.Completed {
				completedTasks++
			}
		}
	}
	fmt.Println(completedTasks)
}
