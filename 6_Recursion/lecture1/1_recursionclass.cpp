#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n == 1){
        return n;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int powN(int n){
    if(n == 0) return 1;
    return 2 * powN(n-1);
}

void printCounting(int n){
    if(n == 0) return;
    printCounting(n-1);
    cout<<n<<" ";
}

int getFactorial(int n){
    if(n==0) return 1;

    int recursionKaAns = getFactorial(n-1);
    return n * recursionKaAns;
}

int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    // int ans = getFactorial(n);
    // cout<<"Factorial of "<<n<<" is: "<<ans<<endl;

    // printCounting(n);

    // cout<<"Power of "<<n<<" is: "<<powN(n);
    cout<<"Power of "<<n<<" is: "<<fibonacci(n);

}