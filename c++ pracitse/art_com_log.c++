#include <iostream>
using namespace std;
int main()
// program of arithmatic,comparison and logical operators
{
    int a = 4, b = 2;
    // arithmatic operators
    cout << "following are the arithmatic operators" << endl;
    cout << "the value of a+b is=" << a + b << endl;
    cout << "the value of a-b is=" << a - b << endl;
    cout << "the value of a*b is=" << a * b << endl;
    cout << "the value of a/b is=" << a / b << endl;
    cout << "the value of a++ is=" << a++ << endl;
    cout << "the value of a-- is=" << a-- << endl;
    cout << "the value of ++a is=" << ++a << endl;
    cout << "the value of --a is=" << --a << endl;
    // assignment operator-->used to assign value to variables
    //  comparison operators
    cout << "following are the comparison operators" << endl;
    cout << "the value of (a == b)=" << (a == b) << endl;
    cout << "the value of (a != b)=" << (a != b) << endl;
    cout << "the value of (a < b)=" << (a < b) << endl;
    cout << "the value of (a > b)=" << (a > b) << endl;
    cout << "the value of (a <= b)=" << (a <= b) << endl;
    cout << "the value of (a >= b)=" << (a >= b) << endl;
    // logical operators
    cout << "foliowing are the logical operators" << endl;
    cout << "the value of this logical and operator ((a==b)&&(a<b)) is" << ((a == b) && (a < b)) << endl; //'&&' represent and.
    cout << "the value of this logical or operator ((a==b)||(a<b) is" << ((a == b) || (a < b)) << endl;   //'||' represent or.
    return 0;
}