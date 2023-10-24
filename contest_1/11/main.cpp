#include <iostream>

int main() {
    float a,b,c,res;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;

    if(abs(a-b) < abs(a - c)) {
        res = abs(a- b);
        std::cout<<"B "<<res<<std::endl;
    } else {
        res = abs(a - c);
     
      std::cout<<"C "<<res<<std::endl;
    }

    
    return 0;
}