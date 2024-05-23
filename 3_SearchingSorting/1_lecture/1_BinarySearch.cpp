#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int binarySearch(vector<int> arr, int n, int target){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;

    while(s<=e){

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            s = mid + 1;
        }
        else if(arr[mid] > target){
            
            e = mid-1;
        }
        mid = (s+e)/2;
        
    }
    return -1;
}

int main(){
    vector<int> arr = {10,20,30,40,50,60,70,80,90};

    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    // cout<<binarySearch(arr, arr.size(), 90);

    //method 2 -> STL library
    bool ans = binary_search(arr.begin(), arr.end(), 90);
    cout<<ans;


}