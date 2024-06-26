#include <iostream>
using namespace std;

int main(){
    int a = 50;
    int *p = &a;
    int **q = &p;

    cout<<*q<<endl;

}
