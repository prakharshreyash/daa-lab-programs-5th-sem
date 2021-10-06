//Q2 
#include<stdio.h>

int main(){
    int n,most_frequent_element,max=0,number_of_repeating_elements=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    int range=n-3;
    int a[n],i;
    for(i=0;i<n;i++){
        a[i]=rand()%range;
    }
    printf("The array is : \n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    int count[n-3];
    for(i=0;i<n-3;i++){
        count[i]=0;
    }
    for(i=0;i<n;i++){
        count[a[i]]++;
    }
    for(i=0;i<n-3;i++)
        printf("%d ",count[i]);
    printf("\n");
    for(i=0;i<n-3;i++){
       if(count[i]>1)
            number_of_repeating_elements+=count[i];
        if(count[i]>max){
            max=count[i];
            most_frequent_element=i;
        }
    }
    printf("The number of repeating elements is %d and the most repeating element is %d.",number_of_repeating_elements,most_frequent_element);
    printf("\n");
}