#include <iostream>
using namespace std;


int next(int n)
{
    return n + 1;
}

int main()
{
    // create a function pointer-- fp, when dereferenced and applied to an int,
    // gives an int
    int (*fp)(int);

    fp = &next;

    int x = 7;
    cout << "x = " << x << endl;

    x = (*fp)(x);
    cout << "x = " << x << endl;

    return 0;
}