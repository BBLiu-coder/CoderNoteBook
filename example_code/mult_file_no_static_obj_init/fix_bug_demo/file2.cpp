#include "file2.h"
#include <iostream>
using namespace std;

TEST2::TEST2()
{
    val1 = 222;
    val2 = 222;
    cout << "init test2" << endl;
}

TEST2 &get_test2_obj()
{
    static TEST2 test2;
    return test2;
}