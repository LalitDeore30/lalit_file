#include <iostream>
using namespace std;
int main()
{
    int marks[4] = {44, 45, 46, 47};
    /*cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;*/
    // using for loop
    int i;
    for (i = 0; i <= 3; i++)
    {
        cout << "= " << marks[i] << endl;
    }
    return 0;
}
