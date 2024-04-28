// taken 5 size of array and then print their sum 
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n];
    int sum=0;
    cout<<"Enter the value of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of an array is "<<endl;
    for(int i=0;i<n;i++){
     sum +=arr[i];
    }
    cout<<sum;

}
