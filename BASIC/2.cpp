#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 1; k++) {
                for (int m = 0; m <= 1; m++) {
                    for (int n = 0; n <= 1; n++)
                        cout << i << j << k << m << n << endl;
                }
            }
        }
    }
    return 0;
}