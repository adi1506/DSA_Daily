#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


//method 1: brute force
int method1(vector<int> arr, int n){
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += arr[j];
            maxSum = max(sum, maxSum);
        }
        
        
    }
    return maxSum;
}

//method 2: kadane's algo
int method2(vector<int> arr, int n){
    int maxSum = INT_MIN;
    int sum = 0;
    int start = -1;
    int ansStart = -1;
    int ansEnd = -1;
    for(int i = 0; i< n; i++){
        if(sum == 0){
            start = i;
        }
        sum += arr[i];
        if(sum>maxSum){
            maxSum = sum;
            ansStart = start;
            ansEnd = i;

        }
        maxSum = max(sum, maxSum);
        if(sum<0){
            sum = 0;
        }
    }
    for(int i = ansStart; i<= ansEnd; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return maxSum;
}

int main(){
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    cout<<method2(arr, arr.size());
    
}