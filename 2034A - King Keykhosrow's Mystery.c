#include <stdio.h>

int min(int x, int y)
{
    return (x < y) ? x : y;
}

int main()
{
    int t;
    scanf("%d", &t);
    int a, b, m;
    int mi;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        mi = min(a, b);
        while (mi % a != mi % b)
        {
            mi++;
        }
        printf("%d\n", mi);
    }
    return 0;
}

