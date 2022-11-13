#include <iostream>
using namespace std;
int main()
{ // what is pointers -->data type which holds the address of other data type
    int a = 3;
    int *b = &a;
    //& --->(address of) operator
    cout << "the adderess of a is=" << &a << endl;
    cout << "the adderess of b is=" << b << endl;
    //* --->(value at) dereference operator
    cout << "the value at adderessb is=" << *b << endl;
    // pointer to pointer
    int **c = &b;
    cout << "the adderess of b is=" << &b << endl;
    cout << "the adderess of c is=" << c << endl;
    cout << "the value at adderess c is=" << **c << endl;

    return 0;
}