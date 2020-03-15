#include <iostream>
using namespace std;
const int N = 40;
int n;
int ans[N];
int main()
{
    ans[1] = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        bool first = true;
        for (int j = i; j >= 1; j--) {
            ans[j] = ans[j] + ans[j - 1];
            if (first) {
                cout << ans[j];
                first = false;
            } else
                cout << ' ' << ans[j];
        }
        cout << endl;
    }
    return 0;
}