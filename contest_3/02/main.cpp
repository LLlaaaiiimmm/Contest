#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& text) {
    std::stack<char> stack;
    for (char ch : text) {
        if (ch == '(' ||  ch == '{' ||  ch == '[') {
            stack.push(ch);
        } else if (ch == ')' ||  ch == '}' ||  ch == ']') {
            if (stack.empty()) {
                return false;  // Нет соответствующей открывающей скобки
            }
            char top = stack.top();
            stack.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;  // Несоответствие типов скобок
            }
        }
    }
    return stack.empty();  // Если стек не пуст, то есть незакрытые скобки
}

int main() {
    std::string text;
    std::getline(std::cin, text, '!');

    if (isBalanced(text)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
