//#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    int i,j,minid;
    for(i=0;i<n;i++){
        minid=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minid])
            {
                minid=j;
            }
        }
        // int temp=arr[i];
        // arr[i]=arr[minid];
        // arr[minid]=temp;
        swap(arr[i],arr[minid]);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sorting using predefi ed function :";
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    selectionsort(arr,n);
    cout<<"array after selection sort : ";
    display(arr,n);
}
