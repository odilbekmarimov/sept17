//
// Created by Odilbek Marimov on 19/09/24.
//• u - Uzbek • e - English • r - Russian • g - German
#include <iostream>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    switch (ch) {
        case 'u': cout<<"Assalomu alaykum";break;
        case 'e': cout<<"Hello";break;
        case 'r': cout<<"Здравствуйте";break;
        case 'g': cout<<"Guten Tag";break;
        default: cout<<"I do not know this language";break
    }
}