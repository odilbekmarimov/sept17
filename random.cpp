#include <iostream>
#include "cstdlib"
#include <ctime>
//
// Created by Odilbek Marimov on 19/09/24.
//
using namespace std;
int main() {
    srand(time(0));
    int num=100+rand()%101;
    cout<<num;
}
