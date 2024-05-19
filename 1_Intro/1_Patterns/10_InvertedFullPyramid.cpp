#include<iostream>
using namespace std;

int main(){
    int length;
    cout<<"Enter the length"<<endl;
    cin>>length;

    // for(int i = 0; i<length; i++){
    //     for(int j=0; j<i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=0; j<2*(length-i)-1;j++){
    //         cout<<"* ";
    //     }
    
    //     cout<<endl;
    // }

    for(int i = 0; i<length; i++){
        for(int j=0; j<length-i-1;j++){
            cout<<" *";
        }
        for(int j=0; j<=i;j++){
            cout<<" ";
        }
        
        cout<<endl;
    }
    
}