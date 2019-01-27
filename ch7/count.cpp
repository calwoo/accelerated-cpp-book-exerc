// program that counts the number of times each distinct word appears in input
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    string s;
    map<string, int> counters;

    // read input, keep track of words
    while (cin >> s) {
        counters[s]++;
    }

    for (map<string, int>::const_iterator it = counters.begin();
        it != counters.end(); it++)
    {
        cout << it->first << "\t" << it->second << endl;
    }
    return 0;
}