//
// Created by Odilbek Marimov on 9/17/24.
//
#include <iostream>
using namespace std;
int main(){
    int p1,p2;
    cin>>p1>>p2;
    if(sqrt(p1*p1+p2*p2)<=10){
        cout<<"Point ("<<p1<<","<<p2 <<") is in circle";
    }
    else{
        cout<<"Point ("<<p1<<","<<p2 <<") is not in circle";
    }
}