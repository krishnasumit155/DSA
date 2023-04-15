#include<bits/stdc++.h>
using namespace std;

void Partreverse(int arr[],int i,int j){
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int num;
    cout<<"Enter number of rotion occured : ";
    cin>>num;
    Partreverse(arr,0,n-1-num);
    Partreverse(arr,n-num,n-1);
    Partreverse(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
}