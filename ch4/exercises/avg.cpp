#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> storage;
    double x;

    while (cin >> x) {
        storage.push_back(x);
    }

    double running_total;
    for (vector<double>::size_type i = 0; i < storage.size(); i++) {
        running_total += storage[i];
    }

    cout << "Average is " << running_total / storage.size() << endl;

    return 0;
}