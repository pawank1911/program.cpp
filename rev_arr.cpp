#include<iostream>
using namespace std;

void reversearr(int *arr, int n, int *out){
    for(int i = 0; i < n; i++){
        out[i] = arr[n - 1 - i];
    }
}

int main(){
    int arr[]={34,56,43,87,54};
    int n = sizeof(arr)/sizeof(int);

    int revk[5];
    reversearr(arr, n, revk);

    for(int i = 0; i < n; i++){
        cout << revk[i] << " ";
    }
    cout << endl;

    return 0;
}