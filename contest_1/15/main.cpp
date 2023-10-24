#include <iostream>
#include <string>

std::string rleEncode(const std::string& input) {
    std::string result;
    int count = 1;  // количество повторений символа

    for (int i = 1; i <= input.length(); i++) {
        // Если текущий символ совпадает с предыдущим, увеличиваем счетчик
        if (i < input.length() && input[i] == input[i - 1]) {
            count++;
        } else {
            // Иначе записываем символ и его количество в результат
            result += input[i - 1];
            if (count > 1) {
                result += std::to_string(count);
            }
            count = 1;  // сбрасываем счетчик
        }
    }

    return result;
}

int main() {
    std::string input;
    
    std::getline(std::cin, input);

    std::string encoded = rleEncode(input);
    std::cout << encoded << std::endl;

    return 0;
}


