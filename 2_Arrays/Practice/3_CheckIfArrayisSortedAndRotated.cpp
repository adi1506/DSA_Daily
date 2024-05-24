#include<iostream>
#include <vector>
using namespace std;

bool checkSorted(vector<int> arr, int n){
    int ctr = 0;
    for(int i =1; i<n; i++){
        if(arr[i-1] > arr[i]){
            ctr++;
        }
        if(arr[n-1] > arr[0]){
            ctr++;
        }
    }

    return ctr<=1;
}

int main(){
    vector<int> arr = {3,4,5,1,2,3,4};
    cout<<checkSorted(arr, arr.size());
    
}