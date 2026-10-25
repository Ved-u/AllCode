#include <iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void swap1(int& a,int& b){
    int temp=a;
    a=b;
    b=temp;
}
void swap2(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10,b=5;
    cout<<a<<" "<<b<<endl;
    int* ptr=&a;
    //swap(a,b);
    //swap1(a,b);
    swap2(&a,&b);
    cout<<a<<" "<<b;
    return 0;
}