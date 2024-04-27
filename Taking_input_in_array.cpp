#include<iostream>
using namespace std;
int main(){
    int b[5];
    for(int i=0;i<6;i++){
        cout<<"Enter the value of "<<i<<" index is : ";
         cin>>b[i];
         cout<<endl;
    }
    for(int i=0;i<6;i++){
        cout<<"value of index "<<i<<" is : "<<b[i]<<endl;
    }
}