#include <cmath>
#include <iostream>
using namespace std;
long long book[200];
string in;
long long ans = 0;
void init()
{
    book['0'] = 0;
    book['1'] = 1;
    book['2'] = 2;
    book['3'] = 3;
    book['4'] = 4;
    book['5'] = 5;
    book['6'] = 6;
    book['7'] = 7;
    book['8'] = 8;
    book['9'] = 9;
    book['A'] = 10;
    book['B'] = 11;
    book['C'] = 12;
    book['D'] = 13;
    book['E'] = 14;
    book['F'] = 15;
    for (int i = 0; i < 8; i++)
        book[i] = pow(16, i);
}
int main()
{
    init();
    cin >> in;
    int len = in.length();
    for (int i = 0; i < len; i++)
        ans += book[in[i]] * book[len - i - 1];
    cout << ans << endl;
    return 0;
}