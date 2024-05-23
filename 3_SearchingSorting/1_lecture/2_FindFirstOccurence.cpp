#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

void findFirstOccurence(vector<int> arr, int n, int target, int &ansIndex){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(arr[mid] == target){
            ansIndex  = mid;
            e = mid -1;
        }
        else if(arr[mid] < target){
            s = mid +1;
        }
        else if(arr[mid] > target){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }    
}

int main(){
    vector<int> arr = {10,20,20,40,50,60,70,80,90};

    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;

    int ansIndex = -1;
    
    findFirstOccurence(arr, arr.size(), 80, ansIndex);
    cout<<ansIndex;



}