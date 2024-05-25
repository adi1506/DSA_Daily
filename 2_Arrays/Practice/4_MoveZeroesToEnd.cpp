#include<iostream>
#include<vector>
using namespace std;

void moveZeroToEnd(vector<int>& arr, int n){
    int l = 0;
    int h = n-1;

    while(l<h){
        if(arr[l] != 0){
            l++;
        }
        else if(arr[l] == 0){
            swap(arr[l],arr[h]);
            
            h--;
        }
    }
}

void method2(vector<int> &arr, int n){
    int j = 0;
    // while(arr[j] != 0){
    //     j++;
    // }

    for(j = 0; j<n; j++){
            if(arr[j] == 0){
                break;
            }
        }

    for(int i = j+1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    vector<int> arr = {1,0,1};

    // moveZeroToEnd(arr, arr.size());
    method2(arr, arr.size());


    for(auto it: arr){
        cout<<it<<" ";
    }
    
}