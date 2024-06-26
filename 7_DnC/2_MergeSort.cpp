#include<iostream>
#include <vector>
using namespace std;

void merge(int arr[], int s, int e, int mid){
    int leftLength = mid - s +1;
    int rightLength = e - mid;

    int* leftArr = new int[leftLength];
    int* rightArr = new int[rightLength];

    int index = s;

    for(int i = 0; i<leftLength; i++){
        leftArr[i] = arr[index];
        index++;
    }

    for(int i = 0; i<rightLength; i++){
        rightArr[i] = arr[index];
        index++;
    }

    //merge logic

    int i =0;
    int j = 0;
    int mainArrIndex = s;

    while(i<leftLength && j<rightLength){
        if(leftArr[i] < rightArr[j]){
            arr[mainArrIndex] = leftArr[i];
            i++;
            mainArrIndex++;
        }
        else{
            arr[mainArrIndex] = rightArr[j];
            j++;
            mainArrIndex++;
        }
    }

    while(i<leftLength){
        arr[mainArrIndex] = leftArr[i];
        i++;
        mainArrIndex++;
    }

    while(i<rightLength){
        arr[mainArrIndex] = rightArr[i];
        j++;
        mainArrIndex++;
    }
}


void mergeSort(int arr[],int size, int s, int e){
    //base case
    if(s>=e) return;

    int mid = (s+e)/2;

    mergeSort(arr,size, s,mid);
    mergeSort(arr,size, mid+1,e);

    merge(arr,s,e,mid);
}
int main(){
    int arr[] = {20,40,60,80,90,100,10,30,50,70};
    int size = 10;
    int s = 0;
    int e = size -1;

    for(int c : arr){
        cout<<c<<" ";
    }
    cout<<endl;

    mergeSort(arr, size, s, e);

    for(int c : arr){
        cout<<c<<" ";
    }

    


    
    
}