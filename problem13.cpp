#include <iostream>
using namespace std;
int main() {
    int Today, Days;
    cin>>Today>>Days;
    int DoW = Today + Days % 7;
    cout<<"Today is ";
    switch (Today) {
        case 1: cout<<"Monday";break;
        case 2: cout<<"Tuesday";break;
        case 3: cout<<"Wednesday";break;
        case 4: cout<<"Thursday";break;
        case 5: cout<<"Friday";break;
        case 6: cout<<"Saturday";break;
        case 0: cout<<"Sunday";break;
        default: cout<<"problem";break;
    }
    cout<<" and the future day is ";
    switch (DoW) {
        case 1: cout<<"Monday";break;
        case 2: cout<<"Tuesday";break;
        case 3: cout<<"Wednesday";break;
        case 4: cout<<"Thursday";break;
        case 5: cout<<"Friday";break;
        case 6: cout<<"Saturday";break;
        case 0: cout<<"Sunday";break;
        default: cout<<"problem";break;
    }
}
//
// Created by Odilbek Marimov on 19/09/24.
//
