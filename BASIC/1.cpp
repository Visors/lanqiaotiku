#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    cout << (n % 4 ? "no" : "yes") << endl;
    return 0;
}