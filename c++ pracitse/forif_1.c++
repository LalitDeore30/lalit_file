#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 50; i++)
    {
        cout << i << endl;
        // in this program if we write cout<<i above the "if" then only 1 and 2 will print
        if (i == 2)

        {
            break;
        }
    }
    return 0;
}