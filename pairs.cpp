#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int count = 0;
    for(int a=2; a<=100; a++){
        for(int b=a; b<=100; b++ ){
           double c_squared = a*a + b*b;
           double c = sqrt(c_squared);
           if(c * c == c_squared && c >1 && c<=100 ){
               cout << a <<"," << b <<"=" <<c <<endl;
           }
       count++;
            
        }
    }
    return 0;
}