//
// Created by Odilbek Marimov on 9/17/24.
//
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==180&&a>0&&b>0&&c>0){
        cout<<"The triangle is valid";
    }
    else{
        cout<<"The triangle is not valid";
    }
}