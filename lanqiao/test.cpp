#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;
    if (n < 1.3) {
        cout << "60" << endl;
    } else if (n >= 1.3) {
        cout << "120" << endl;
    }
    return 0;
}