#include <iostream>
using namespace std;
const int N = 10005;
int book[N];
int main()
{
    int n, t;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        if (!book[t])
            book[t] = i;
    }
    cin >> t;
    if (book[t])
        cout << book[t] << endl;
    else
        cout << -1 << endl;
    return 0;
}