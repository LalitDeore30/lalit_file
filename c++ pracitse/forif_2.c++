#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        if (i == 2)
        {
            break;
        }
        cout << i << endl;
        // in this program if we write cout<<i after the "if" then only 1 will print
    }
    return 0;
}