#include <iostream>
using namespace std;

// Every number can be written as the sum of powers of 2
// log(n) time and O(1) space
int power(int x, int n) {
    int result = 1;
    while (n > 0) {
        if (n & 1 == 1)  // y is odd
        {
            result = result * x;
        }
        x = x * x;
        n = n >> 1;  // y=y/2;
    }
    return result;
}

int main() {
    cout << (power(9, 3));
    return 0;
}
