#include <iostream>
#include <math.h>

int main() {
    float a,b;
    float res;
    std::cin>>a;
    std::cin>>b;
    if(a>0 && b>0) {
         res = sqrt(pow(a,2) + pow(b,2));
    };
    std::cout<<res<<std::endl;
    return 0;
}