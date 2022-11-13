#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ // manipulators in c++
    int a = 4, b = 445, c = 77777;
    cout << "the value of a withiut setw is:" << a << endl;
    cout << "the value of b withiut setw is:" << b << endl;
    cout << "the value of c withiut setw is:" << c << endl;

    cout << "the value of a with setw is:" << setw(5) << a << endl;
    cout << "the value of b with setw is:" << setw(5) << b << endl;
    cout << "the value of c with setw is:" << setw(5) << c << endl;

    return 0;
}