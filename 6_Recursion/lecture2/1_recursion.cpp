#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index){
    if(index == size) return;
    cout<<arr[index]<<" ";
    printArray(arr, size, index+1);
}

bool searchInArray(int arr[], int size,int index, int target){
    if(index == size) return false;
    if(arr[index] == target) return true;
    return searchInArray(arr, size, index+1, target);
}

void maxInArray(int arr[], int size, int index, int& maxi){
    if(index == size) return;
    maxi = max(arr[index], maxi);
    return maxInArray(arr, size, index+1, maxi);
}

void minInArray(int arr[], int size, int index, int& mini){
    if(index == size) return;
    mini = min(arr[index], mini);
    return minInArray(arr, size, index+1, mini);
}

void printOdd(int arr[], int size, int index){
    if(index == size) return;
    if(arr[index]&1){
        cout<<arr[index]<<" ";
    }
    printOdd(arr, size, index+1);
}

void printEven(int arr[], int size, int index){
    if(index >= size) return;
    if(arr[index] % 2 == 0){
        cout<<arr[index]<<" ";
    }
    printEven(arr, size, index+1);
}

void printDigit(int num){
    if(num <= 0 ) return;
    printDigit(num/10);
    cout<<num%10<<" ";
}

int main(){
    int arr[] = {101, 201, 30, 401, 50, 601};
    int n = 6;
    int index = 0;
    // printArray(arr, n, index);
    // cout<<searchInArray(arr, n, index, 50);

    // int maxi = INT_MIN;
    // maxInArray(arr, n, index, maxi);

    // int mini = INT_MAX;
    // minInArray(arr, n, index, mini);
    // cout<<maxi;

    // printEven(arr, n, index);

    printDigit(541);    

}