#include <iostream>
using namespace std;
int n, Max = 0x80000000, Min = 0x7fffffff, sum = 0;
int main()
{
    cin >> n;
    int t;
    while (n--) {
        cin >> t;
        if (t > Max)
            Max = t;
        if (t < Min)
            Min = t;
        sum += t;
    }
    cout << Max << endl
         << Min << endl
         << sum << endl;
    return 0;
}