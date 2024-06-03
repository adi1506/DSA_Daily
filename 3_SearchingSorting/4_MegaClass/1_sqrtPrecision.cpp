#include<iostream>
#include<vector>
using namespace std;

double mySqrt(double x){
    double s = 0;
    double e = x;
    double mid = s + (e-s)/2;
    double ans = -1;

    while(e-s >= 0.0001){
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid < x){
            ans = mid;
            s = mid + 0.0001;
        }
        else{
            e = mid - 0.0001;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}



int main(){
    double ans = mySqrt(63);
    // cout<<ans;
    printf("%.12f",ans);
}