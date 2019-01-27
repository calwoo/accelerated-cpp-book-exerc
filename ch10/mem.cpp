#include <iostream>
using namespace std;


// this function is crazy-- we return the address of x, but when the function call ends, the
// memory for x gets deallocated. Hence what we get for the return is garbage!
int* invalid_pointer()
{
    int x;
    return &x;
}

// this will be fine
int* pointer_to_static()
{
    static int x;
    return &x;
}


int main()
{
    cout << pointer_to_static() << endl;
    cout << pointer_to_static() << endl;

    return 0;
}