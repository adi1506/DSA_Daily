#include<iostream>
#include<vector>
using namespace std;

int maxConsOnes(vector<int> arr, int n){
    int ctr = 0;
    int finalAns = 0;
    for(int i =0; i< n; i++){
        if(arr[i] == 0){
            finalAns = ctr;
            ctr = 0;
        }
        else if(arr[i] == 1){
            ctr++;
            if(finalAns<ctr){
                finalAns = ctr;    
            }
            
        }
    }
    return finalAns;
}

int main(){
    vector<int> arr = {1,1,0,1,1,1,0,1,1,1,1,1,0,1};
    cout<<maxConsOnes(arr, arr.size());

}