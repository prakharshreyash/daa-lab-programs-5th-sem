//Maximum Sum Subarray
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
// Using DP
int max_sum_subarray_dp(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0,
	start =0, end = 0, s=0;
    for (int i=0; i< size; i++ )
	{
		max_ending_here += a[i];

		if (max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
			start = s;
			end = i;
		}

		if (max_ending_here < 0)
		{
			max_ending_here = 0;
			s = i + 1;
		}
	}
	cout << "Maximum contiguous sum is "
		<< max_so_far << endl;
    cout<<"The subarray is "<<endl;
    for(int i=start;i<=end;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
// Using Iterative
void max_sum_subarray_it(vector<int>& nums)
{
    int endIndex, currMax = nums[0];
    int globalMax = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        currMax = max(nums[i],
                      nums[i] + currMax);
        if (currMax > globalMax) {
            globalMax = currMax;
            endIndex = i;
        }
    }
    cout<<"The maximum sum is "<<globalMax<<endl;
    cout<<"The subarray is "<<endl;
    int startIndex = endIndex;
    while (startIndex >= 0) {

        globalMax -= nums[startIndex];

        if (globalMax == 0)
            break;
        startIndex--;
    }
    for (int i = startIndex;
         i <= endIndex; ++i) {

        cout << nums[i] << " ";
    }
}
int main()
{
    cout<<"*************"<<endl;
    cout<<"USING Dynamic Programming"<<endl;
	int a[] = {-2, -5, 4, -2, 6, 1, 5, -6};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = max_sum_subarray_dp(a, n);
	cout<<"*************"<<endl;
    cout<<"Using Iterative Approach"<<endl;
    vector<int> b={-2,-5,4,-2,6,1,5,-6};
    max_sum_subarray_it(b);
    return 0;

}