#include<iostream>
using namespace std;

//To count zeroes and one
void countZeroAndOne(int arr[], int size){
    int countZero = 0;
    int countOne = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == 0){
            countZero++;
        }
        else if(arr[i] == 1){
            countOne++;
        }
    }
    cout<<"Number of zeros in the array is: "<<countZero<<endl;
    cout<<"Number of ones in the array is: "<<countOne<<endl;
}

//Two pointer technique
// i/p => {10,20,30,40,50,60}
// o/p => 10,60,20,50,30,40

void twoPointerExample(int arr[], int size){
    int front = 0;
    int back = (size-1);
    while(front<=back){
        if(front==back){
            cout<<arr[front];
        }
        else{
            cout<<arr[front]<<", ";
            cout<<arr[back]<<", ";
        }
        front++;
        back--;
    }
}

int main(){
    // int arr[] = {23,43,12,535,12,1,0,1};
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    // countZeroAndOne(arr, size);
    twoPointerExample(arr, size);

}
