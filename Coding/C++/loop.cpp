#include<iostream>
#include<cmath>
using namespace std;
void intToBin(int dec){
    int ans=0;
    while(dec>0){
        ans=ans*10+dec%2;
        dec/=2;
    }
    cout<<"binary:"<<ans<<endl;
}
void binToInt(int bin){
    int ans=0,power=0;
    while(bin>0){
        ans+=(bin%10*pow(2,power++));
        bin/=10;
    }
    cout<<"decimal:"<<ans<<endl;
    intToBin(ans);
}
int main(){
    binToInt(1111);
    return 0;
}