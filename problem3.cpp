//
// Created by Odilbek Marimov on 9/17/24.
//
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<a<<" is the largest number";
    }
    else if(b>c){
        cout<<b<<" is the largest number";
    }
    else {
        cout<<c<<" is the largest number";
    }
}
