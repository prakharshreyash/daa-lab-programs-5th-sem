//Q4
#include <stdio.h>

void swap(int *x,int *y)
{
	int z=*x ;
	*x=*y ;
	*y=z ;
}
int main(void)
{

    int a,b,c; 
    printf("enter the nos\n") ;
    scanf("%d %d %d",&a,&b,&c) ;
    swap(&a,&b) ;
    swap(&a,&c) ;
        printf("After swap the nos % d %d %d\n",a,b,c) ;
    return 0 ;
}