#include <iostream>
using namespace std;
int main() {
    int grade;
    cin>>grade;

    switch (grade) {

        case 90 ... 100: cout<<"A";break;
        case 80 ... 89: cout<<"B";break;
        case 7: cout<<"C";break;
        case 6: cout<<"D";break;


        default: cout<<"F";
    }
}//
// Created by Odilbek Marimov on 19/09/24.
//
