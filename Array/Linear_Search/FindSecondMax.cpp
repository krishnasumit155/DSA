#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter then size of array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max=arr[0];

    for (int i = 1; i < n; i++)
    {
        if(max<arr[i]) max=arr[i];
    }
    
    int Smax=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(Smax<arr[i] && arr[i]!=max) Smax=arr[i]; 
    }

    cout<<"Max number is "<<max<<endl;
    cout<<"Secound largest number is "<<Smax<<endl;
    
    
}