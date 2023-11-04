#include<iostream>
using namespace std;

int main(){
    string fullname;
    cout << "Enter your fullname:";
    getline(cin,fullname);
    cout << "Your fullname is " << fullname << endl;
    double amount;
    cout << "Enter the amount to calculate the interest:";
    cin >> amount;
    double interest = 1;
    const double RATE = 0.3;
    interest = amount * RATE;
    cout << "The interest amount is: " << interest;
    return 0;

}
