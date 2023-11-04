#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string name = "AKIMANA Viateur";
    int count = 0;
   for(int i = 0; i <=name.length();i++){
    if(isspace(name[i])){
        count++;
    }
    cout << count<<endl;
   }
    return 0;
}