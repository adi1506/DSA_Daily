#include<iostream>
#include <vector>
using namespace std;

void mergeSortedArray(int arr[], int sizeArr, int brr[], int sizeBrr, vector<int> &ans){
    int i = 0;
    int j = 0;

    while(i<sizeArr && j<sizeBrr){
        if(arr[i] < brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }    

    while(i<sizeArr){
        ans.push_back(arr[i]);
        i++;
    }

    while(j<sizeBrr){
        ans.push_back(brr[j]);
        j++;
    }


}

int main(){
    int arr[] = {20,40,60,80,90,100};
    int sizeArr = 6;
    int brr[] = {10,30,50,70};
    int sizeBrr = 4;

    vector<int> ans;

    mergeSortedArray(arr, sizeArr, brr, sizeBrr, ans);

    for(int c : ans){
        cout<<c<<" ";
    }
    
}