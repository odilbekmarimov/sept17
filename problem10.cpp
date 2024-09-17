//
// Created by Odilbek Marimov on 9/17/24.
//
#include <iostream>
using namespace std;
int main (){
    float p1,w1,p2,w2;
    cout<<"Enter weight and price for package 1: ";
    cin>>w1>>p1;
    cout<<"Enter weight and price for package 2: ";
    cin>>w2>>p2;
    if (w1/p1>w2/p2){
        cout<<"Package 1 has a better price";
    }
    else if (w1/p1==w2/p2){
        cout<<"Two packages have the same price";
    }
    else{
        cout<<"Package 2 has a better price";
    }
}