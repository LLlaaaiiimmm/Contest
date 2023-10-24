
bool is_prime(int number) {
    int sui = 2;
    while (sui*sui < number) {
        if (number % sui == 0) {
            return false;
        }
        sui++;
    }
    if (number % sui == 0) {
        return false;
    }

    return true;
}