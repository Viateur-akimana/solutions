#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string sentence = "akimana viateur is studying c++";
    //number of character wth out spaces
    int numberOfCharacterWithOutSpaces = 0;
    for(char c: sentence){
        if(c != ' '){
            numberOfCharacterWithOutSpaces++;
        }
    }
    //number of characters with spaces
    int numberOfCharactersWithSpaces = sentence.length();
    //number of words
cout << numberOfCharactersWithSpaces <<numberOfCharacterWithOutSpaces <<endl;

    return 0;
}