#include <iostream>
// simple program to print 1 to 100 numbers
using namespace std;
int main()
{ /*their are three types of loops
  1.for loops
  2.while loop
  3.do while loop */

    // syntax for for loop
    // for(initialization;condition;updation)
    //{
    //     loop body(c++ code);
    // }
    for (int i = 1; i <= 100; i++)
    {
        cout << i << endl;
    }
    // example of infinite loop
    // for(int i=1;50<=100;i++)
     /*{
        cout<<i<<endl;
     }*/
    // it is must that their is true condition
    return 0;
}