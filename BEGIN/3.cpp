#include <cmath>
#include <cstdio>
using namespace std;
const double PI = atan(1.0) * 4;
long long n;
int main()
{
    scanf("%d", &n);
    printf("%.7lf\n", PI * n * n);
    return 0;
}