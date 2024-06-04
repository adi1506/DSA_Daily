#include<iostream>
using namespace std;

int main(){
    char arr[100];
    cout<<"Enter your name"<<endl;
    // cin>>arr;

    // cout<<"Your name is "<<arr<<endl;
    // cout<<arr[6]<<"->"<<(int)arr[6]<<endl;
    // cout<<arr[7]<<"->"<<(int)arr[6]<<endl;
    cin.getline(arr,12,'\t');
    cout<<arr;
    
}