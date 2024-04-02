#include <iostream>
#include <string>
using namespace std;

string reversed_string(string str){

    string reversed;
    for (int i = str.length(); i >= 0; i--){
        reversed += str[i];
    }
    return reversed;
}

int main(){

    string teste = "teste";
    string reversed = reversed_string(teste);
    cout << reversed << endl;
    return 0;
}