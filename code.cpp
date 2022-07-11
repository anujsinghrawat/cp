 // C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<string, int>& M)
{

    // Declare a multimap
    multimap<int, string> MM;

    // Insert every (key-value) pairs from
    // map M to multimap MM as (value-key)
    // pairs
    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }

    // Print the multimap
    for (auto& it : MM) {
        cout << it.second << ' '
            << it.first << endl;
    }
}

// Driver Code
int main()
{

    // Declare Map
    map<string, int> M;

    // Given Map
    M = { { "GfG", 3 },
        { "To", 2 },
        { "Welcome", 1 } };

    // Function Call
    sort(M);
    return 0;
}
