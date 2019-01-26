#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> results;

    for (int i = 1; i <= 100; i++)
    {
        int value = i * i;
        results.push_back(value);
        cout << value << endl;
    }

    return 0;

}