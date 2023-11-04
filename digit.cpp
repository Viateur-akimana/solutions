#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char character;
    cout << "Enter the characer: ";
    cin >> character;
    if(isdigit(character)){
        cout <<"The entered character is digit";
    }
    else if(isalpha(character)){
        cout <<"The entered character in letter";
    }
    return 0;
}