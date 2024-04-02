#include <iostream>
#include <vector>
using namespace std;

bool is_fibonacci(vector<int> vec){

    for (int i = 2; i < vec.size(); i++)
    {
        if(vec[i] != (vec[i-1]+vec[i-2])){
            return false;
        }
    }
    return true;
    
}

int main(){

    vector<int> vec = {0, 2, 1, 2, 3, 5, 8, 13, 21, 34};
    bool check = is_fibonacci(vec);
    cout << check << endl;

    return 0;
}