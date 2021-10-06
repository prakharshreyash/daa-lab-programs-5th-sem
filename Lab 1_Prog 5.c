//Q3
#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=rand();
		printf("%d ",a[i]);
	}
	int even[n];
	int odd[n];
	int j=0,k=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			even[j++]=a[i];
		}
		else{
			odd[k++]=a[i];
		}
	}
	j=0,k=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			a[i]=even[j++];
		}
		else{
			a[i]=odd[k++];
		}
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}