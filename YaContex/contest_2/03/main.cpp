
bool compare(std::string a,std::string b ) {

    int firstly = std::stoi(a);
    int secondly = std::stoi(b);
    int first = firstly;
    int second = secondly;
    int cnt1 = 0;
    int n2 = 0;
    //считаем единички
    while (first > 0) {
        cnt1 += first%10;
        first/= 10;
    }
    while (second > 0) {
        n2+= second%10;
        second /= 10;
    }
    if(cnt1 == n2) {
        return firstly < secondly;
    }
    return cnt1 > n2;


}