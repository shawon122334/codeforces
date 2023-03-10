#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    int count;
    if (n <= 5)
    {
        count = 1;
    }
    else if (n % 5 == 0)
    {

        count = (n / 5);
    }
    else
    {
        count = (n / 5) + 1;
    }
    printf("%d", count);
    return 0;
}