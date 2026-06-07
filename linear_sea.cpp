#include<iostream>
using namespace std;

int binarysearch(int *arr, int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i+1;
        }
    } return -1;
}

int main(){
    int arr[]={34,56,32,76,54,90};
    int n=sizeof(arr)/sizeof(int);

    int num;
    cout<<"enter the number :";
    cin>>num;

    // for(int i=0; i<n;i++){
    //     if(arr[i]==num){
    //        cout<<"found at: "<<i+1; 
    //         break;
             
            
    //     }else{
    //         cout<<" not found at: "<<i+1<<endl;
    //     }
        
    // }
   int found= binarysearch(arr,n,num);
    if(found!=-1){
        cout<<"found";
    }else{
        cout<<"not found";
    }

    return 0;
}