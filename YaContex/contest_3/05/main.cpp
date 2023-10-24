#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::unordered_map<std::string, int> wordCount;

    // Считываем слова и подсчитываем их количество
    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;
        wordCount[word]++;
    }

    // Находим максимальное количество появлений слова
    int maxCount = 0;
    for (const auto& pair : wordCount) {
        maxCount = std::max(maxCount, pair.second);
    }

    // Собираем все слова с максимальным количеством появлений
    std::vector<std::string> mostFrequentWords;
    for (const auto& pair : wordCount) {
        if (pair.second == maxCount) {
            mostFrequentWords.push_back(pair.first);
        }
    }

    // Сортируем слова в лексикографическом порядке
    std::sort(mostFrequentWords.begin(), mostFrequentWords.end());

    // Выводим результат
    for (const auto& word : mostFrequentWords) {
        std::cout << word << " ";
    }

    return 0;
}