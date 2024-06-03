#include<iostream>
#include<vector>
using namespace std;

int getQuotient(int dividend, int divisor){
    int s = 0;
    int e = dividend;
    int mid  = s + ((e-s)>>1);
    int quo = -1;

    while(s<=e){
        if(divisor * mid == dividend){
            return mid;
        }
        else if(divisor * mid < dividend){
            quo = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid  = s + ((e-s)>>1);
    }
    return quo;
}

int main(){
    int dividend = 13;
    int divisor = -3;

    int ans = getQuotient(abs(dividend), abs(divisor));

    if((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0) ){
        ans = 0 - ans;
    }

    cout<<ans;
}