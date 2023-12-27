#include <iostream>

int countCollatz(int n, int &counter) {
    counter++;
    if (n == 1) {
        return n;
    } else {
        if (!(n % 2)) {
            // std::cout << n << std::endl;
            return countCollatz(n / 2, counter);
        } else {
            // std::cout << n << std::endl;
            return countCollatz(3 * n + 1, counter);
        }
    }
}

int longestCollatzSequence(int n) {
    int max = 1;
    for (int cand = 1; cand < n; cand++) {
        int counter = 0;
        int test = countCollatz(cand, counter);
        if (test > max)
            max = test;
    }
    return max;
}

int main() {
    std::cout << longestCollatzSequence(1000000) << std::endl;
    return 0;
}
