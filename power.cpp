#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a;
    double b;
    cout <<"ENter the number a:" << endl;
    cin >> a;
    cout <<"ENter the second b:" << endl;
    cin >> b;
    double ab = pow(a,2);
    double cb = pow(b,2);
    double adcb = ab + cb;
    double hypotenuse = sqrt(adcb);
    cout << "The hypotenuse of my truangle is:" << hypotenuse;
    return 0;
}