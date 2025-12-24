#include <iostream>
using namespace std;

long long power(long long base, long long exp) {
    long long result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long ans = power(a, b) - power(b, a);
    cout << ans;

    return 0;
}
