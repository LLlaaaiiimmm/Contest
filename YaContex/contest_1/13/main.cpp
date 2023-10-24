#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int cur = 0;
    int maximum = 2;
    bool up = true;
    int dlina  = 1;

  for (int i = 1; i <= N; i++) {
    std::cout<<i<<" ";
        cur+= 1;
        if(cur == dlina){
            std::cout<<"\n";
            cur = 0;
        
            dlina += up? 1 : -1;
        if(dlina == maximum) {
            up = !up;
        }
        else if(dlina==1){
            up = !up;
            maximum++;
        }
}

}
return 0;
}