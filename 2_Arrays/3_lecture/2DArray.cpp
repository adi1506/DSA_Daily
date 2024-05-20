#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                    };
    int row = 3;
    int col = 3;

    //row traversal
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //col traversal
    for(int i =0; i<col; i++){
        for(int j = 0; j<row; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //left digonal traversal
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(i == j){
                cout<<arr[i][j]<<" ";
            }
            
        }
        cout<<endl;
    }

    cout<<endl;

    //Right diagonal traversal
    for(int i =0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(i+j == col-1){
                cout<<arr[i][j]<<" ";
            }
            
        }
        cout<<endl;
    }

    cout<<endl;
}