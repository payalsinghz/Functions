#include<iostream>
using namespace std;
int largest(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    cout<<largest(3,5,8);
    return 0;
}