#include<bits/stdc++.h>
using namespace std;
bool twopower(int n) {
    for (int i = 0; i <= 31; i++) {
        int ans = pow(2, i);
        if (ans == n) return true;
    }
    return false;
}
int main() {
    int x;
    cin >> x;
    if (twopower(x)) {
        cout << x << " is a power of 2" << endl;
    } else {
        cout << x << " is not a power of 2" << endl;
    }
    return 0;
}