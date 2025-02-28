#include <stdio.h>

void printDigits(int N) {
    if (N == 0) 
        return;

    printf("%d ", N % 10);

    printDigits(N / 10);
}

int main() 
{
    int d0;
	scanf("%d", &d0);
    if (d0 == 0)
    {
        printf("%d", d0);
    }
    else
    {
        printDigits(d0);
    }
    

    return 0;
}
