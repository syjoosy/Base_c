#include <stdio.h>

int main() 
{
    int d0, d1, d2;
	scanf("%d %d %d", &d0, &d1, &d2);

    if ((d0 + d1 > d2) && (d0 + d2 > d1) && (d1 + d2 > d0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}