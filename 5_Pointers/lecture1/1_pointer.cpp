#include <iostream>
using namespace std;

int main(){
    // int a  = 6;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // int* ptr = &a;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;

    // int a = 5;`
    // int* ptr = &a;
    // cout<<sizeof(ptr);

    // char b = 'a';
    // char* ptr1 = &b;
    // cout<<sizeof(ptr);

    // int *ptr;
    // cout<<*ptr;

    // int arr[5] = {0,1,2,3,4};
    // int * ptr = arr;
    // cout<<ptr<<endl;
    // ptr = arr + 1;
    // cout<<ptr<<endl;

    char ch[100] = "aditya";
    char* cptr = ch;
    cout<<*(cptr+3)<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<cptr+3<<endl;

}
