#include<iostream>
using namespace std;

bool checkSort(int arr[], int n, int index){
    if(index == n-1) return true;
    if(arr[index] > arr[index+1]) return false;
    return checkSort(arr, n, index+1);
}

void printSubSeq(string str, int i, string output){
    if(i == str.length()){
        cout<<output<<endl;
        return;
    }

    char ch = str[i];
    printSubSeq(str,i+1,output + ch);
    printSubSeq(str,i+1,output);
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int index = 0;

    // cout<<checkSort(arr, n, index);
    printSubSeq("abc",0,"");

}