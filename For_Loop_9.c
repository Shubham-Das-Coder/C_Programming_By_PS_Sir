#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = n; i >= 1; i = i / 3)
    {
        printf("GATE");
    }
}