//
// Created by Odilbek Marimov on 9/17/24.
//
#include <iostream>
using namespace std;
int main () {
    int year;
    cin>>year;
    if (year%4==0){
        if (year%100==0&&year%400==0){
            cout<<year<<" is a leap year";
        }
        else{
            cout<<year<<" is not a leap year";
        }
    }
    else{
        cout<<year<<" is not a leap year";
    }
}