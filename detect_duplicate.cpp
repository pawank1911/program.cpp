#include<iostream>
using namespace std;

bool duplicate( int *arr, int n){
    
    for(int i=0; i<n; i++){
          for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                return true;


            }
          }
    }
    return false;
}

int main(){
    int arr[]={1,2,3,2,5};
    int n=sizeof(arr)/sizeof(int);

    if(duplicate(arr,n)){
        cout<<"duplicate found";
    }else{
        cout<<"not found";
    }
    return 0;
}