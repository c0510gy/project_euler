#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string str = "0123456789";
int main(){
    int j = 0;
    do{
        j++;
        if(j == 1000000)
            break;
    }while(next_permutation(str.begin(), str.end()));
    cout << str;
    return 0;
}
