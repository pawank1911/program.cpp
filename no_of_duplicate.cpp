#include<iostream>
using namespace std;

void duplicate(int *arr, int n){
    int (*freq)[2] = new int[n][2];
    int unique = 0;

    for(int i = 0; i < n; ++i){
        int val = arr[i];
        int k;
        for(k = 0; k < unique; ++k){
            if(freq[k][0] == val){
                freq[k][1]++;
                break;
            }
        }
        if(k == unique){
            freq[unique][0] = val;
            freq[unique][1] = 1;
            unique++;
        }
    }

    cout << "Number counts:\n";
    for(int i = 0; i < unique; ++i){
        cout << freq[i][0] << " appears " << freq[i][1] << " time";
        if(freq[i][1] != 1) cout << "s";
        cout << "\n";
    }

    delete[] freq;
}

int main(){
    int arr[]={1,2,3,2,5,1,1,2,3,3,4,4,4,4};
    int n=sizeof(arr)/sizeof(int);

    duplicate(arr,n);
    return 0;
}