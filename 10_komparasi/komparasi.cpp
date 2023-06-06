#include <iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 2;

    bool hasil1,hasil2;

    // komprasi, relation expression

    // sebading ==
    hasil1 = (a == b);
    // sebading !=
    hasil2 = (a != b);

    // kurang dari
    hasil1 = (a < b);
    // lebi dari
    hasil1 = (a > b);

    // kurang dari sama dengan
    hasil1 = (a <= b);
    // lebi dari  sama dengan
    hasil1 = (a >= b);

    cout<< hasil1 <<endl;
    cout<< hasil2 <<endl;
}