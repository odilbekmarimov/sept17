#include <iostream>
//
// Created by Odilbek Marimov on 9/17/24.
//
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a%b==0) {
        cout<<a<<" is divisible by "<<b;
    }
    else{
        cout<<a<<" is not divisible by "<<b;
    }
}