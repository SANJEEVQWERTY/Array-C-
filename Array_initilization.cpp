#include<iostream>
using namespace std;
int main(){
    int a[7]={19,32,54,65,23,45,65};
    // cout<<"Value of array in index is :"<<a[0]<<endl;
    // cout<<"Value of array in index is :"<<a[1]<<endl;
    //  cout<<"Value of array in index is :"<<a[2]<<endl;
    //   cout<<"Value of array in index is :"<<a[3]<<endl;
    //    cout<<"Value of array in index is :"<<a[4]<<endl;
    //     cout<<"Value of array in index is :"<<a[5]<<endl;
    //      cout<<"Value of array in index is :"<<a[6]<<endl;

    // Another method
    for(int i=0;i< 7;i++){
        cout<<"Value of array "<<i<<" is : "<<a[i]<<endl;
    }
         return 0;
}