#include<iostream>
using namespace std;


//using another array
void transposeoutplace(int arr[][3], int row, int col){
    int ansArr[3][3];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            ansArr[i][j] = arr[j][i];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<ansArr[i][j]<<" ";
        }
        cout<<endl;
    }

}

// void swap(int arr[][3], int i, int j){
//     arr[i][j] = arr[i][j] ^ arr[j][i];
//     arr[j][i] = arr[i][j] ^ arr[j][i];
//     arr[i][j] = arr[i][j] ^ arr[j][i];
// }

//inplace
void transposeinplace(int arr[][3], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = i; j < col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}



int main(){
    int arr[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                    };
    int row = 3;
    int col = 3;

    transposeinplace(arr, row, col);
}