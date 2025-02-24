#include <stdio.h>

int factorial(int d0)
{
    int summ = 1;
    for (size_t i = 1; i <= d0; i++)
    {
        summ *= i;
    }
    
    return summ;
}

int main() 
{
    int d0;
	scanf("%d", &d0);
    printf("%d", factorial(d0));
    return 0;
}