#include <iostream>
#include <algorithm>
bool Permute(std::string str1, std::string str2) {
    if (str1.length() != str2.length()) {
        return false;
    };
    sort(str1.begin(), str1.end());
    sort(str2.begin(),str2.end());
    if(str1 == str2){
        return true;
    }
    return false;

}
int main() {
    std::string num1;
    std::string num2;

    std::cin>>num1>>num2;
    if (Permute(num1,num2)) {
        std::cout<<"YES"<<std::endl;
    } else {
        std::cout<<"NO"<<std::endl;
    }
    return 0;
}