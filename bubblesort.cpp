#include<iostream>
using namespace std;
void bubblesort(int *arr,int n){
    int i,j;
     bool flag;
    for(i=0;i<n-1;i++){
        flag=false;
        for(j=0;j<n-i-1;j++){
            
            if(arr[j]>arr[j+1])
            {
                flag=true;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
        if(flag==false)
         break;
        cout<<"pass "<<i+1<<" :";
        for(j=0;j<n;j++){
            cout<<" "<<arr[j];
        }
        cout<<endl;

    }
}
int main(){
    int n,arr[100],i;
    cin>>n;
  for(i=0;i<n;i++){
      cin>>arr[i];
  }
  bubblesort(arr,n);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
}