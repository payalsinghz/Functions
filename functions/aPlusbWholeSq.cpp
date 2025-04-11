#include<iostream>
using namespace std;
int wholeSq(int a,int b){
    return a*a+b*b+2*a*b;
}
int main(){
    cout<<wholeSq(3,5);
    return 0;
}