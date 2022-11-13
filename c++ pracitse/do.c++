#include <iostream>
using namespace std;
int main()
{
    int mathmarks[] = {44, 45, 46, 47};
    int i = 0;
    /*do
    {
        cout << "the value  of math marks " << i << " is=" << mathmarks[i] << endl;
        i++;
    } while (i < 4);*/
    while (i < 4)
    {
        cout << "the value is " << i << " is " << mathmarks[i] << endl;
        i++;
    }
    return 0;
}