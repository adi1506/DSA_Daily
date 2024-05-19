//print all pairs

#include<iostream>
using namespace std;

pair<int,int> twoSum(int arr[], int n, int tar){
    //assuming (-1,-1) => no answer found
    pair<int,int> ans = make_pair(-1, -1);
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i] + arr[j] == tar){
                ans.first = arr[i];
                ans.second = arr[j];
            }
        }
    }
    return ans;
}

int main(){
    
    int arr[] = {10,20,30,40};
    int size = 4;
    int target = 30;
    
    pair<int, int> ans = twoSum(arr, size, target);
    if(ans.first == -1 || ans.second == -1){
        cout<<"Pair not found"<<endl;
    }
    else{
        cout<<ans.first<<", "<<ans.second;
    }
    

}
