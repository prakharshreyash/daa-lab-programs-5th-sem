#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
	cin>>n;
	int start[n],finish[n];
	for(int i=0;i<n;i++){
		cin>>start[i];
	}
	for(int i=0;i<n;i++){
		cin>>finish[i];
	}
	cout<<0<<" ";
	int j=0;
	for(int i=1;i<n;i++){
		// int j = i+1;
		if(start[i]>=finish[j]){
			cout<<i<<" ";
			j=i;
		}
	}
};