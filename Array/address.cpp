#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6];
    cout<<arr<<endl; // It give the base address of give array.
    cout<<arr+1<<endl; // give the address of arr+1 of arr[1]
    cout<<endl;
    cout<<&arr<<endl; //It is same as arr,
    cout<<&arr[1]<<endl; // It is same as address of arr[1].
}