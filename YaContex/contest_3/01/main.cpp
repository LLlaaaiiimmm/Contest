#include <iostream>
#include <algorithm>
#include <vector>
void make_sortir(std::vector<int>&sortir) {
    int temp;
    std::cin>>temp;
    sortir.push_back(temp);
}
int main() {
    int n;
    std::cin>>n;
    std::vector<int> sortir;
    for(int i = 1; i <= n; i++) {
        make_sortir(sortir);
    }

    int m;
    std::cin>>m;
    for(int i = 1; i <= m; i++) {
        make_sortir(sortir);
    }
    std::sort(sortir.begin(), sortir.end());
    for(int i = 0; i < sortir.size(); i++) {
        std::cout<<sortir[i]<<" ";
    }
}