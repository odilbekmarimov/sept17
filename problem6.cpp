//
// Created by Odilbek Marimov on 9/17/24.
//
#include <iostream>
using namespace std;
int main () {
    float a,b,c;
    float x1, x2;
    cin>>a>>b>>c;
    float D=sqrt(b*b - 4*a*c);
    if (D>=0){
        x1 = (-b + D)/(2*a);
        x2 = (-b - D)/(2*a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else{
        cout<<"No solution";
    }
}