#include <stdio.h>
int main()
{
    int n, h;
    scanf("%d%d", &n, &h);
    int friends[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &friends[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (friends[i] <= h)
        {
            count++;
        }
        else
        {
            count = count + 2;
        }
    }
    printf("%d", count);
    return 0;
}