#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i < 50; i++)
    {
        if (i == 2)
        {
            continue; // if we write "continue" then 2 will be dropout and all numbers are printed from 1 to 50
        }
        cout << i << endl;
    }
    return 0;
}