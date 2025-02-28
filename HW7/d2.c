#include <stdio.h>

int i = 1;
int summ = 0;
int print(int digit)
{
    summ += i;
    i++;
    if (i > digit)
    {
        printf("%d", summ);
        return 0;
    }
    else
    {
        print(digit);
    }    
}

int main() 
{
    int d0;
	scanf("%d", &d0);
    print(d0);
    return 0;
}