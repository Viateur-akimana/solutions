#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a = 4;
    double b = 2;
    double c = -6;
    double delta = (b*b) - (4*a*c);
    double x1 = ((-b + sqrt(delta))/(2*a));
    double x2 = ((-b - sqrt(delta))/(2*a));
    cout <<"x1 is: " << x1 <<"And x2 is:" <<x2 <<endl;
    return 0;
}