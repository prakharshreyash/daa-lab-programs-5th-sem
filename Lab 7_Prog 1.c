#include <stdio.h>
#include<time.h>
int total=0;
int fib(int n)
{
    total++;
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
int fib_dp(int n)
{
  int f[n+2];
  int i;
  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      f[i] = f[i-1] + f[i-2];
  }

  return f[n];
}
int main ()
{
  int n;
  clock_t s1,s2,e1,e2;
  double t1,t2;
  printf("Enter a number\n");
  scanf("%d",&n);
  printf("****************************************************\n");
  printf("Using Recursion\n");
  s1=clock();
  sleep(1);
  printf("%d\n", fib(n));
  e1=clock();
  t1=(double)(e1-s1)/CLOCKS_PER_SEC;
  printf("For n = %d the total number of function calls are %d\n",n,total);
  printf("Time Taken = %0.6f\n",t1);
  printf("****************************************************\n");
  printf("Using DP\n");
  s2=clock();
  sleep(1);
  printf("%d\n",fib_dp(n));
  e2=clock();
  t2=(double)(e2-s2)/CLOCKS_PER_SEC;
  printf("Time Taken = %0.6f\n",t2);
  return 0;
}
