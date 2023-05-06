#include <iostream>
#include "inout.h"
void read(std::vector<int>& vec) {
    int b;
    int i = 0;
    cout << "set the length of the vector" << endl;
    cin >> b;
    cout << "enter numbers" << endl;
    for (int a = 0; cin >> a;)
    {
        i++;
        vec.push_back(a);
        if (i == b)
            break;
    };


};
