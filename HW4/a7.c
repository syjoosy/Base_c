#include <stdio.h>

int main() 
{
    int d1, d2;
	scanf("%d %d", &d1, &d2);
    int max = d1 > d2? d1 : d2;
    int min = d1 < d2? d1 : d2;
    printf("%d %d", min, max);
    return 0;
}