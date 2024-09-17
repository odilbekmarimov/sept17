//
// Created by Odilbek Marimov on 9/17/24.
//
#include <iostream>
using namespace std;
int main (){
    char a;
    cin>>a;
    if ('a'<= a && a <= 'z') {
        cout<<a<<"lowercase alphabet";
    }
    else if ('A'<= a && a <= 'Z') {
        cout<<a<<"Uppercase alphabet";
    }
    else {
        cout<<"It is not an alphabet";
    }
}
