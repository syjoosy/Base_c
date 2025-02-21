#include <stdio.h>

int main() 
{
    int d0;
	scanf("%d", &d0);
    if (d0 > 99 && d0 < 1000)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}