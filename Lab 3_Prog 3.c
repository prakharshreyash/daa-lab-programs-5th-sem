//Q3 TO FIND SQRT OF ANY POSITIVE INTEGER
#include<stdio.h>
double sqrroot(int number)
{
    int i=0;
    double r = 1;
    while (1)
    {
        i = i + 1;
        r = (number / r + r) / 2;
        if (i == number + 1) { break; }
    }
    return r;
}

int main()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    double r = sqrroot(n);
    printf("Root of %d :- %f",n,r);
    return 0;
}