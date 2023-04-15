#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the  array element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int num,count=0;
    cout<<"Enter the number which are grater then arr number : ";
    cin>>num;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<num) count++;
    }
    
    cout<<count<<endl;
}