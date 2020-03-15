#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= 9; i++)
        for (int j = 0; j <= 9; j++)
            for (int k = 0; k <= 9; k++) {
                if (2 * i + 2 * j + k == n)
                    cout << i << j << k << j << i << endl;
            }
    for (int i = 1; i <= 9; i++)
        for (int j = 0; j <= 9; j++)
            for (int k = 0; k <= 9; k++) {
                if (2 * (i + j + k) == n)
                    cout << i << j << k << k << j << i << endl;
            }
    return 0;
}