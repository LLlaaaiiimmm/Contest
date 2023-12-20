#include <iostream>
#include <fstream>//работа с файлами
#include "json.hpp"

using json = nlohmann::json;

int summadone(const json& data, int userID) {
// счетчик
    int count = 0;
// проходимся по объкту data
    for (const auto& project : data) {
    //тут уже проходимя по предыдущему к струтуре таскс
        for (const auto& task : project["tasks"]) {
        // тут уже ставим наше условие
            // если юзерайди json равен юзеруайди запросившего и равен выполенным
            // то все оке и плюс 1
            if (task["user_id"] == userID && task["completed"]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int userID;
// запрос айдишника пользователя
    std::cin >> userID;
// открутие файла
    std::ifstream inputFile("data.json");
// создали объект
    json data;
 // отдаем объекту содержимое файла
    inputFile >> data;

    int completedTasks = summadone(data, userID);
    std::cout << completedTasks << std::endl;

    return 0;
}
