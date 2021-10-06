//Q1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a number\n");
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        a[i]=rand()%100;
    }
    int max=-1, min=101;
    for(i=0;i<n;i++){
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("The array is : \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("The maximum element is %d and the minimum element is %d",max,min);
}