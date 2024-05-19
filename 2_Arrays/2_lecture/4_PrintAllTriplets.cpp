//print all triplets

#include<iostream>
#include<algorithm>
using namespace std;

void printAllPairs(int arr[], int n){
    for(int i =0; i<n; i++){
        for(int j = 0; j<n; j++){
            for(int k = 0; k<n; k++){
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"  ";
            }
            
        }
        cout<<endl;
    }
}

int main(){
    
    int arr[] = {10,20,30};
    int size = 3;
    
    printAllPairs(arr, size);

}
