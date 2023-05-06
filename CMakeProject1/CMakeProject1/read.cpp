
#include <iostream>
#include "inout.h"
void print(const std::vector<int>& vec)
{
    int b;
    cout << "how many numbers do you want to output" << endl;
    cin >> b;
    for (int a = 0; a <= b; a++)
    {

        cout << "Sorted" << *(vec.begin() + a) << endl;

    };
}
