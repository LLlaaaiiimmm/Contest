#include <iostream>
#include <math.h>
int main() {
    float a = (sqrt(12)* (1. - (1./9)+ (1./45) - (1./189) + (1./729) - (1./2673)));
    std::cout<<a<<std::endl;
}