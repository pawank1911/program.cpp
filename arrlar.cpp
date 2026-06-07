#include <iostream>
using namespace std;

void printArr( int num[] , int n){

      int max =num[0];
    for(int i=0 ; i<n; i++){
        
        if(num[i]>max){
             
            max=num[i];
            
        }
       
    }
     cout<<"largest:"<<max;
}
int main() {
    int n;
    
    cout<<"enter number of element :";
    cin>>n;
    int arr[n];

    cout<<"enter element in arrar :" ;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<" arrar :";

    for(int i=0; i<n; i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    printArr(arr ,n);
   
    return 0;
}