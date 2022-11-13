#include <iostream>
using namespace std;
// simple program for addition,subtraction,multiplication,division.
int main()
{
    int a, b, r, side, sum, sub, mul, div, circle, square;
    cout << "enter the value of a=";
    cin >> a;
    cout << "enter the value of b=";
    cin >> b;
    cout << "the value of r =";
    cin >> r;
    cout << "the value of side = ";
    cin >> side;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    circle = 3.14 * r * r;
    square = side * side;
    cout << "sum of the number is=" << sum << endl;
    cout << "sub of the number is=" << sub << endl;
    cout << "mul of the number is=" << mul << endl;
    cout << "div of the number is=" << div << endl;
    cout << "the area of circle is=" << circle << endl;
    cout << "the are of square is=" << square << endl;
    return 0;
}