#include <iostream>
using namespace std;
int main()
{
    const int a = 3;
    cout << "the value of a was" << a;
    a = 45; // you will get an error because a is the constant
    cout << "the value of a is" << a;
    return 0;
}