// Given an array and find target 
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int n=5;
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;
    int flag=0;
    // 0 -> target not found
    // 1 -> target found
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag =1;
        }
    }
    if(flag == 1){
        cout<<"Target found";
    }
    else{

        cout<<"Target not found";
    }
}