#include <iostream>
using namespace std;
const int N = 30;
char ans[N][N];
int n, m;
int main()
{
    char ins = 'A';
    for (int i = 1; i <= 26; i++) {
        ins = 'A';
        for (int j = i; j <= 26; j++)
            ans[i][j] = ins++;
        ins = 'B';
        for (int j = i - 1; j >= 1; j--)
            ans[i][j] = ins++;
    }
    while (cin >> n >> m) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++)
                cout << ans[i][j];
            cout << endl;
        }
    }
    return 0;
}