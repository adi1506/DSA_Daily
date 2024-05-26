#include<iostream>
#include<vector>
using namespace std;

vector<int> TwosComp(vector<int> &arr, int n){
    vector<int> finalArr(n+1, 0);

    //1s comp -> simple inverting of bits
    for(int i = n-1; i>=0; i--){
        if(arr[i] == 0){
            finalArr[i+1] = 1;
        }
        else{
            finalArr[i+1] = 0;
        }
    }

    int k = finalArr.size();

    //2s comp -> +1
    for(int i = (k-1); i>=0; i--){
        if(finalArr[i] == 1){
            finalArr[i] = 0;
        }
        else{
            finalArr[i] = 1;
            break;
        }
    }

    

    return finalArr;
}

int main(){
    vector<int> arr = {0,0,0,0,0,0};
    // vector<int> arr = {1,0,1,0,0,1};
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int> finalArr = TwosComp(arr, arr.size());
    for(auto it: finalArr){
        cout<<it<<" ";
    }
}