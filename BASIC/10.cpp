#include <iostream>
#include <stack>
using namespace std;
char dic[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
stack<char> ans;
int main()
{
    long long n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    while (n) {
        ans.push(dic[n % 16]);
        n /= 16;
    }
    while (!ans.empty()) {
        cout << ans.top();
        ans.pop();
    }
    cout << endl;
}