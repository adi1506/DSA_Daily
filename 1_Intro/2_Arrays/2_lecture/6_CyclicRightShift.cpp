//print all triplets

#include<iostream>
#include<algorithm>
using namespace std;

void rotateArray(int arr[], int n, int shift){
    int finalShift = shift%n;
    
    if(finalShift == 0){
        return ;
    }

    //copy last final
    int tempArr[10000];
    int index = 0;
    

    
}

int main(){
    
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int shift = 2;
    
    rotateArray(arr, size, shift);

}
