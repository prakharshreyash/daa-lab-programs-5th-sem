//Q1 To compare the best case, worst case and average case time complexity of Insertion sort

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
double d;
int insertionsort(int arr[], int n)
{
    clock_t start = clock();
    int i, key, j,c1=0,c2=0;
    for (i = 1; i < n; i++) {
        c1++;
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            c2++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    sleep(1);
    clock_t end = clock();
    d = (double)(end-start)/CLOCKS_PER_SEC;
    return c1+c2;
}
void descending(int number[],int n)
{
    int i,j,a;
    for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] < number[j])
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
}

int main()
{
    int n;
    printf("Enter the number of elements:- ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    ar[i]=rand();
    printf("\tStep Count\t\tClock Time\n");
    int a = insertionsort(ar,n);
    printf("Average Case:-\t%d\t\t\t%f\n",a,d);
    a = insertionsort(ar,n);
    printf("Best Case:-\t%d\t\t\t%f\n",a,d);
    descending(ar,n);
    a = insertionsort(ar,n);
    printf("Worst Case:-\t%d\t\t\t%f\n",a,d);
    return 0;
}