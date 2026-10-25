#include <iostream>
#include <cmath>
using namespace std;
bool palindrome(int arr[],int n){
     int l=0,r=n;
   while(l<r){
    if(arr[l]!=arr[r])return false;
    l++;r--;
   }
    return true;
}
void rev(int arr[],int n){
    int l=0,r=n;
   while(l<r){
    arr[l]=arr[l]^arr[r];
    arr[r]=arr[l]^arr[r];
    arr[l]=arr[l]^arr[r];
    l++;r--;
   }  
}
int main(){
   int arr[4][2]={13,100,51,100,54,100,21,100};
    int brr[4][2]={13,100,51,100,54,100,21,100};
    int n=sizeof(arr)/sizeof(arr[0]),m=sizeof(arr[0])/sizeof(arr[0][0]);
    int ans=INT16_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){ 
            ans=min(arr[i][j],ans);
        }
    }
    // for(auto& row:arr){
    //     for(auto& y:row){
    //         cout<<y<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<ans;
    return 0;
} 