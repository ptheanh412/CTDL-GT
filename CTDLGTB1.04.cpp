#include "iostream"
#include "math.h"

using namespace std;

long tinhXn(int n) {
    if (n == 0)
        return 1;
    long s = 0;
    for (int i = 0; i < n; i++) {
        s += i * i * tinhXn(n - i);
    }
    return s;
}

int main() {
    int n;
    cout << "Nhap n:";
    cin >> n;
    long s = tinhXn(n);
    cout <<  "X("<<n<<") = "<<s;
    return 0;
}
