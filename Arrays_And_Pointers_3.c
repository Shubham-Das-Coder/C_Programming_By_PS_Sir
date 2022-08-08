#include <stdio.h>
void main()
{
    int a[2][3] = {10, 20, 30, 40};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
}