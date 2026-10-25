#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0||n==1)return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int fact(int n){
    if(n==1||n==0)return 1;
    return n*fact(n-1);
}
int sum(int n){
    if(n==1)return 1;
    return n+sum(n-1);
}
int pow(int a,int b){
    if(b==1)return a;
    return a*pow(a,b-1);
}
int powLog(int a,int b){
    if(b==1)return a;
    if(b==0)return 1;
    if(b%2==1){
        int pow=powLog(a,b/2);
        return a*pow*pow;
    }
    int pow=powLog(a,b/2);
    return pow*pow;
}
int main(){
    cout<<powLog(2,12)<<endl;
    return 0;
}  