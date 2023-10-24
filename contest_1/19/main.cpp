#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

int main() {
    std::unordered_map<std::string, int> wordCounts;
    std::vector<std::string> repeatedWords;

    std::string word;
    while (std::cin >> word && word != "end") {
        wordCounts[word]++;
    }

    for (const auto& pair : wordCounts) {
        if (pair.second > 1) {
            repeatedWords.push_back(pair.first);
        }
    }

    std::sort(repeatedWords.begin(), repeatedWords.end());

    for (const auto& word : repeatedWords) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}