//Q2 TO CHECK WHETHER ANY ITEM OCCURS N/2 TIMES

#include<stdio.h>
#define bool int
void naive(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int count = 0;
        for (int j=i+1; j<n;j++)
        {
            if(a[j]==a[i])
            count++;
        }
        if(count>n/2)
        {
           printf("\n%d is repeating more than %d times.",a[i],n/2);
           return;
        }
    }
    if(i==n)
    printf("\n No Result");
}
int findCandidate(int a[], int size)
{
	int maj_index = 0, count = 1;
	int i;
	for (i = 1; i < size; i++) {
		if (a[maj_index] == a[i])
			count++;
		else
			count--;
		if (count == 0) {
			maj_index = i;
			count = 1;
		}
	}
	return a[maj_index];
}
bool isMajority(int a[], int size, int cand)
{
	int i, count = 0;
	for (i = 0; i < size; i++){
		if (a[i] == cand)
			count++;}
	if (count > size / 2)
		return 1;
	else
		return 0;
}
void efficient(int a[], int size)
{
	int cand = findCandidate(a, size);
	if (isMajority(a, size, cand))
		printf(" %d ", cand);
	else
		printf("No Majority Element");
}

int main()
{
    int n;
    printf("Enter the number of values:- ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values:-  ");
    for(int i=0; i<n;i++)
        scanf("%d",&a[i]);
    efficient(a,n);
}