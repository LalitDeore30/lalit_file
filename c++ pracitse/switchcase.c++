#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter the age=" << endl;
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "you are in 5th standard" << endl;
        break;
    case 13:
        cout << "you are in 6th standard" << endl;
        break;
    case 14:
        cout << "you are in 7th standard" << endl;
        break;
    case 15:
        cout << "you are in 8th standard" << endl;
        break;
    default:
        cout << "you are not yet born" << endl;
        break;
    }
    return 0;
}
