#include<iostream>
#include<algorithm>
using namespace std;

int findUniqueNumber(int arr[], int size){
    int ans = 0;
    for(int i =0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

void sortZeroAndOne(int arr[], int n){
    int zeroCount = 0;
    int oneCount = 0;
    
    //method 1 - counting 
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == 0){
    //         zeroCount++;
    //     }
    //     else if(arr[i] == 1){
    //         oneCount++;
    //     }
    // }
    // for(int i = 0; i<zeroCount; i++){
    //     arr[i] = 0;
    // }
    // for(int i = zeroCount; i<n; i++){
    //     arr[i] = 1;
    // }

    //method 2 - inbuilt function
    sort(arr, arr+n);
    for(int i = 0; i<n; i++){
        cout<<arr[i] <<" ";
    }
    
    // return arr;
}

int main(){
    // int arr[] = {23,43,12,535,12,1,0,1};
    // int arr[] = {10,10,20,20,60,60,70};
    int arr[] = {0,1,1,1,0,0,1,1};
    int size = 8;
    // int uniqueNum = findUniqueNumber(arr, size);
    // cout<<"Unique number is: "<<uniqueNum;
    sortZeroAndOne(arr, size);

}
