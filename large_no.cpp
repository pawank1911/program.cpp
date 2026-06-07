#include<iostream>
using namespace std;

int largest(int arr[], int n){
    int max= arr[0];
   for(int i=0; i<n; i++){
     if(arr[i]>max){
        max=arr[i];
     }
   }
   return max;
}

int main(){
    int n=5;
    int arr[n];

    cout<<"enter the numbers: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];

    }

   

    cout<<" arrary is :";
    for(int i=0; i<5; i++){
        cout<< arr[i];
    }
    cout<<endl;
    int max = largest(arr,n);

    cout << max;

     
}