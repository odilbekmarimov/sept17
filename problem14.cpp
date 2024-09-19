//
// Created by Odilbek Marimov on 19/09/24.
//
//•90-100 A •80-89 B •70-79 C •60-69 D •0-59 F
#include <iostream>
using namespace std;
int main() {
    int grade;
    cin>>grade;
    while (grade>100 ||grade< 0) {
        cin>>grade;

    }
    switch (grade/10) {
        case 10: cout<<"A";break;
        case 9: cout<<"A";break;
        case 8: cout<<"B";break;
        case 7: cout<<"C";break;
        case 6: cout<<"D";break;


        default: cout<<"F";
    }
}