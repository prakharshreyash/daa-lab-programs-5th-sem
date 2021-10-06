#include <stdio.h>
#include<time.h>
#include<stdio.h>
#include<string.h>

int max(int a, int b);
int lcs_dp( char *X, char *Y, int m, int n )
{
int L[m+1][n+1];
int i, j;

for (i=0; i<=m; i++)
{
	for (j=0; j<=n; j++)
	{
	if (i == 0 || j == 0)
		L[i][j] = 0;

	else if (X[i-1] == Y[j-1])
		L[i][j] = L[i-1][j-1] + 1;

	else
		L[i][j] = max(L[i-1][j], L[i][j-1]);
	}
}
return L[m][n];
}

int lcs_rec( char *X, char *Y, int m, int n )
{
if (m == 0 || n == 0)
    return 0;
if (X[m-1] == Y[n-1])
    return 1 + lcs_rec(X, Y, m-1, n-1);
else
    return max(lcs_rec(X, Y, m, n-1), lcs_rec(X, Y, m-1, n));
}

int max(int a, int b)
{
	return (a > b)? a : b;
}

int main()
{
char X[] = "AGGTAB";
char Y[] = "GXTXAYB";
clock_t s1,s2,e1,e2;
double t1=0,t2=0;
int m = strlen(X);
int n = strlen(Y);
printf("****************************************\n");
printf("Using DP\n");
s1=clock();
sleep(1);
printf("Length of LCS using Dynamic Programming is: %d\n", lcs_dp( X, Y, m, n ) );
e1=clock();
t1=(double)(e1-s1)/CLOCKS_PER_SEC;
printf("Time taken = %0.6f\n",t1);
printf("****************************************\n");
printf("Using Recursion\n");
s2=clock();
sleep(1);
printf("Length of LCS using naive Recursive Algorithm is: %d\n", lcs_rec( X, Y, m, n ) );
e2=clock();
t2=(double)(e2-s2)/CLOCKS_PER_SEC;
printf("Time taken = %0.6f\n",t2);
return 0;
}
