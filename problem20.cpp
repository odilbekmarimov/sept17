#include <iostream>
#include "time.h"
using namespace std;
int main() {
    srand(time(0));
    int num=rand();
    cout<<num;

}