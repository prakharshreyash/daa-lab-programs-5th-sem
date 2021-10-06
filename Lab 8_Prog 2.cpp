//length of LIS
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int _lis(int arr[], int n, int* max_ref)
{
	if (n == 1)
		return 1;
	int res, max_ending_here = 1;
	for (int i = 1; i < n; i++) {
		res = _lis(arr, i, max_ref);
		if (arr[i - 1] < arr[n - 1]
			&& res + 1 > max_ending_here)
			max_ending_here = res + 1;
	}
	if (*max_ref < max_ending_here)
		*max_ref = max_ending_here;
	return max_ending_here;
}
int lis(int arr[], int n)
{
	int max = 1;
	_lis(arr, n, &max);
	return max;
}
int lis_dp(int arr[], int n)
{
    int lis[n];

    lis[0] = 1;
    for (int i = 1; i < n; i++) {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
    return *max_element(lis, lis + n);
}
int main()
{
    cout<<"******Iterative Approach******"<<endl;
	int arr[] = { 10, 22, 9, 30, 20, 50, 44, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout <<"Length of lIS is "<< lis(arr, n);
	cout<<endl; 
	cout<<"******Dynamic Programming********"<<endl;
	int arr1[] = { 10, 22, 9, 30, 20, 50, 44, 60 };
    int n1 = sizeof(arr) / sizeof(arr[0]);
    printf("Length of lIS is %d\n", lis(arr1, n1));
	return 0;
}