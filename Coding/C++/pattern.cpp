#include <iostream>
using namespace std;
void diamond(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int factorial(int n){
    int ans=1;
    for(int i=2;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int ncr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
void pascal(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pascal(10);
    return 0;
}