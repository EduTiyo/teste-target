#include <iostream>
using namespace std;

int main(){

    // ex 1
    //k - 1,2,3,4,5,6,7,8,9,10,11,12,13
    //soma - 1,3,6,10,15,21,28,36,45,55,66,78,91

    int index = 13, k = 0, soma = 0;
    while (k < index){
        k++;
        soma+=k;
    }
    cout << soma << endl;
    
    return 0;
}