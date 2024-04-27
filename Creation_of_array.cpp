#include<iostream>
using namespace std;
int main(){
    int arr[100];
    char alpha[120];
    bool san[130];
    float as[22];
    cout<<"Array creation is Successfully"<<endl;


    // Address of array 
    int a=4;
    cout<<"Address of a is : "<<&a<<endl;
    cout<<"Size of a is : "<<sizeof(a)<<endl;


    int array[49];
    cout<<"Base address of arr is : "<<&array[49]<<endl;
    cout<<"Base address of arr using without & opretor : "<<array<<endl;
    cout<<"Size of an array is "<<sizeof(array)<<endl;
    return 0;
}