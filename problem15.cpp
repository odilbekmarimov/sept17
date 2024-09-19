//
// Created by Odilbek Marimov on 19/09/24.
//
#include <iostream>
using namespace std;
int main() {
     int num;
     cin>>num;
//     int condition=1;
//     if (num>0) {
//         condition=1;
//     }
//     else if (num<0) {
//         condition=-1;
//     }
//     else {
//         condition=0;
//     }
//     switch (condition) {
//         case 1: cout<<"It is positive";break;
//         case -1: cout<<"It is negative";break;
//         case 0: cout<<"It is zero";break;
//     }
     switch (num>0)
     {
          case true: cout<<"It is positive";break;
          case false: switch (num<0)
          {
               case true: cout<<"It is negative";break;
               case false: cout<<"It is zero";break;
          }
     }
}
