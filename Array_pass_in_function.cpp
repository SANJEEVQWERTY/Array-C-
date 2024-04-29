// we can pass array in a function
                                                   /*jab bhi function ke ander 
                                                    array pass kare to sath se uska size 
                                                     bhi pass karna padtha hai*/
                                                     // solve(int arr[],int size)   ->function pass by array
                                                     // solve(arr[],size)    -> function call by array
#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
     int arr[5]={2,4,6,8,10};
     int size=5;
     PrintArray(arr,size);
}                                                     