#include <stdio.h>

int convertDigit(int digit)
{
    return digit * (-1);
}

int main() 
{
    int d0;
	scanf("%d", &d0);
    printf("%d", d0 < 0 ? convertDigit(d0) : d0);
    return 0;
}