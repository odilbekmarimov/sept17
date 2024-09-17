//
// Created by Odilbek Marimov on 9/17/24.
//
#include <iostream>
using namespace std;
int main (){
    int a;
    int temp;
    cout<<"Enter a three-digit integer: ";
    cin>>a;
    temp=a/10*10; //temp returns first two digits and a zero
    if(a/100==a-temp){
        cout<<a<<" is a palindrome";
    }
    else{
        cout<<a<<" is not a palindrome";
    }
}