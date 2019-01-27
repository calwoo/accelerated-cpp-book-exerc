#include <iostream>
using namespace std;

int* pointer_to_dynamic()
{
    return new int(0);
}

int main()
{
    int* p = pointer_to_dynamic();
    int* q = pointer_to_dynamic();

    cout << &p << endl;
    cout << &q << endl;

    cout << ++*p << endl;
    cout << *p++ << endl;

    delete q;
    cout << *q << endl;

    return 0;
}