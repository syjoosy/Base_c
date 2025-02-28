#include <stdio.h>

int i = 1;
int print(int digit)
{
    printf("%d ", i);
    i++;
    if (i > digit)
        return 0;
    else
        print(digit);
}

int main() 
{
    int d0;
	scanf("%d", &d0);
    print(d0);
    return 0;
}