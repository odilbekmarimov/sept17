#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n<0) {
        cout << "Negative and ";}
    else{
        cout << "Positive and ";}
    if(n%2==0){
        cout << "even";}
    else{
        cout << "odd";}
    return 0;
}