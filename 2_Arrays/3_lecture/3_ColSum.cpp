#include<iostream>
using namespace std;

void colSumFun(int arr[][3], int row, int col){
    for(int j = 0; j < col; j++){
        int sum = 0;
        for(int i = 0; i < row; i++){
            sum += arr[i][j];
        }
        cout<<"sum for col "<<j<<": "<<sum<<endl;
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

    colSumFun(arr, row, col);
}