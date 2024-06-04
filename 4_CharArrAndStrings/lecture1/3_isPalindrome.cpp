#include<iostream>
using namespace std;

int findLength(char arr[], int size){
    int count = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == '\0'){
            break;
        }
        else{
            count++;
        }
    }
    return count;
}

bool isPalindrome(char arr[], int size){
    int i = 0;
    int j = findLength(arr, size) - 1;
    while(i<j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char arr[100];
    cout<<"Enter your name"<<endl;
    cin.getline(arr,100);
    cout<<endl<<arr<<endl;

    cout<<isPalindrome(arr,100)<<endl;
    
    
}