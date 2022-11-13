#include <iostream>
using namespace std;
union money
{
    int bike;
    float salary;
    char rupee;
};
int main()
{
    union money m1, m2;
    m1.bike = 77777;
    m2.salary = 10000;
    cout << m1.bike << endl;
    cout << m2.salary << endl;
    return 0;
}