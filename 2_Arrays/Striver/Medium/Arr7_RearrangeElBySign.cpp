#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


//method 1: brute force
vector<int> method1(vector<int> &arr, int n){
    vector<int> posArr;
    vector<int> negArr;
    for(int i = 0; i<n; i++){
        if(arr[i] > 0){
            posArr.push_back(arr[i]);
        }
        else{
            negArr.push_back(arr[i]);
        }
    }    
    for(int i = 0;i<n/2;i++){
        arr[2*i] = posArr[i];
        arr[2*i + 1] = negArr[i];
    }
    return arr;
}

// method 2: 
// int method2(vector<int> arr, int n){
    
// }

int main(){
    vector<int> arr = {3,1,-2,-5,2,-4};
    vector<int> ansArr = method1(arr, arr.size());

    for(auto it: ansArr){
        cout<<it<<" ";
    }
    
}