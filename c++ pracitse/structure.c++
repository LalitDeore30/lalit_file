#include <iostream>
using namespace std;
struct employee
{
    int eId;
    char favchar;
    float salary;
};
int main()
{
    struct employee lalit;
    lalit.eId = 2;
    lalit.favchar = 'c';
    lalit.salary = 100000000000000000000.99;
    cout << "the eId is = " << lalit.eId << endl;
    cout << "the favchar is = " << lalit.favchar << endl;
    cout << "the salary is = " << lalit.salary << endl;
    return 0;
}
