#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Assuming n is the size of the lists
    int n;
    cout << "Enter the size of the lists: ";
    cin >> n;

    // Algorithm:

    // Step 1: Create vectors to represent the lists
    vector<int> n1(n);  // First list
    vector<int> n3(n);  // Copy of the first list
    vector<int> n2(n);  // Second list with elements decremented by 1

    // Step 2: Copy elements of n1 to n3
    for (int i = 0; i < n; i++) {
        n3[i] = n1[i];
    }

    // Step 3: Decrement all elements of n2 by 1
    for (int i = 0; i < n; i++) {
        n2[i] = n1[i] - 1;
    }

    // Step 4: Check if n1 and n3 have any differing elements
    bool elements = false;
    for (int i = 0; i < n; i++) {
        if (n1[i] != n3[i]) {
            elements = true;
            break;
        }
    }

// Step 5: Restore n2 back to its original state by incrementing each element by // 1
    for (int i = 0; i < n; i++) {
        n2[i] += 1;
    }

    // Step 6: Check if differing elements were found and print the result
    if (elements)
        cout << "The two lists have 1 or more common elements" << endl;
    else
        cout << "The two lists don't have any common element" << endl;

    return 0;
}
