#include <iostream>
#include <set>
#include<vector>
#include <algorithm>



int main() {
    std::set<std::string> words_for_n;//сет для слов н
    std::set<std::string> words_for_m;// сет для слов м
    std::set<std::string> proverka;// проверка то есть мы объединяем
    std::string word;// наши слова

    int n;
    std::cin>>n;// кол-во слов
    for(int i = 1; i <= n; i ++) {
        std::cin>>word;
        words_for_n.insert(word);//добавили слова
    }

  
    std::cin>>n;//кол-во слов
    for(int i = 1; i <= n; i++) {
        std::cin>>word;
        words_for_m.insert(word);// добавили слова
    }
    std::set_intersection(words_for_n.begin(), words_for_n.end(), words_for_m.begin(), words_for_m.end(), inserter(proverka, proverka.begin()));//добавление двух сетов а также просмотр на результатов пересечения
    if (proverka.empty()) {
        std::cout<<"-1";
    } else {
        for(const std::string &sovpadenie : proverka) {
            std::cout<<sovpadenie<<" ";
        }
    }
}