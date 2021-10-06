// Q1 to Prime Check using 3 different algorithms
#include <stdio.h>
#include<math.h>
int flag=1;
int method1(int n)
{
    int steps=0;
    if(n==1)
    {
        steps++;
        flag=0;
        return steps;
    }
    else
    {
        steps++;
        for(int i = 2; i<sqrt(n);i++)
        {
            steps++;
            if(n%i==0)
            {
                steps++;
                flag=0;
                return steps;
            }
            steps++;
        }
        steps++;
    }
    return steps;
}
int method2(int n)
{
    int steps=0;
    if(n==1)
    {
        steps++;
        return steps;
    }
    else
    {
        steps++;
        for(int i=2;i*i<=n;i++)
        {
            steps++;
            if(n%i==0)
            {
                steps++;
                return steps;
            }
        }
    }
    return steps;
}
int method3(int n)
{
    int steps=0;
    if(n==1)
    {
        steps++;
        flag=0;
        return steps;
    }
    else
    {
        steps++;
        for(int i = 2; i <=n/2;i++)
        {
            steps++;
            if(n%i==0)
            {
                steps++;
                flag=0;
                return steps;
            }
            steps++;
        }
        steps++;
    }
    return steps;
}
int main()
{
    int t=10,a[10];
    printf("Enter the input elements:");
    for(int i=0;i<t;i++)
        scanf("%d",&a[i]);
    printf("No\tInput\t\tALGO1\t\tALGO2\t\tALGO3 \tPrime or Not\n");
    int j=0;
    while(t--)
    {
        printf("%d\t%d\t",j+1,a[j]);
        int count1=method1(a[j]);
        printf("\t%d\t",count1);
        int count2=method2(a[j]);
        printf("\t%d\t",count2);
        int count3=method3(a[j]);
        printf("\t%d\t",count3);
        if(flag==1)
            printf("Prime\n");
        else
            printf("Not Prime\n");
        flag=1;
        j++;
    }
    return 0;
}