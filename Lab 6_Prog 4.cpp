//Q6.4
#include<bits/stdc++.h>
using namespace std;
struct activity{
    char name;
    int st;
    int ed;
};
bool compare_two_activities_1(activity a,activity b){
    if(a.st!=b.st){
        return a.st<b.st;
    }
    else{
        return a.ed<b.ed;
    }
}
bool compare_two_activities_2(activity a,activity b){
    if(a.ed!=b.ed){
        return a.ed<b.ed;
    }
    else{
        return a.st<b.st;
    }
}
int main(){
    int n,take=0;
    cout<<"Enter the number of Activities"<<endl;
    cin>>n;
    cout<<"Enter activity details"<<endl;
    struct activity ac[n];
    for(int i=0;i<n;i++){
        cin>>ac[i].name>>ac[i].st>>ac[i].ed;
    }
    sort(ac,ac+n,compare_two_activities_1);
    char ac_of_choice;
    cout<<"Enter the activity of your choice"<<endl;
    cin>>ac_of_choice;
    int i=0;
    for(i=0;i<n;i++){
        if(ac[i].name==ac_of_choice){
            break;
        }
    }
    int id=i;
    int ed=ac[id].ed;
    for(int i=id+1;i<n;i++){
        if(ac[i].st>=ed){
            take++;
            ed=ac[i].ed;
        }
    }
    sort(ac,ac+n,compare_two_activities_2);
    i=0;
    for(i=0;i<n;i++){
        if(ac[i].name==ac_of_choice){
            break;
        }
    }
    id=i;
    int st=ac[id].st;
    for(int id=i-1;i>=0;i--){
        if(ac[i].ed<=st){
            take++;
            st=ac[i].st;
        }
    }
    cout<<take+1<<endl;
}