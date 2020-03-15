#include <iostream>
using namespace std;
const int MOD = 10007;
int n;
int f1 = 1, f2 = 1, t;
int main()
{
    cin >> n;
    for (int i = 3; i <= n; i++) {
        t = (f1 + f2) % MOD;
        f1 = f2;
        f2 = t;
    }
    cout << f2 << endl;
    return 0;
}