#include<iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int> &arr, int n){
    int s = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[s]){
            arr[s+1] = arr[i];
            s++;
        }
    }
    return s+1;
}

int main(){
    vector<int> arr = {1,1,2,2,2,3,3,4,4,4,5,6,6,7};
    cout<<removeDuplicate(arr, arr.size())<<endl;
    for(auto i: arr){
        cout<<i<<" ";
    }
}