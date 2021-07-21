#include <bits/stdc++.h>
using namespace std;
  
// Function to check if the key is present or not
string check_key(map<int, int> m, int key)
{
    // Key is not present
    if (m.find(key) == m.end())
        return "Not Present";
  
    return "Present";
}
  
// Driver
int main()
{
    map<int, int> m;
  
    // Initializing keys and mapped values
    m[1] = 4;
    m[2] = 6;
    m[4] = 6;
  
    // Keys to be checked
    int check1 = 5, check2 = 4;
  
    // Function call
    cout << check1 << ": " << check_key(m, check1) << '\n';
    cout << check2 << ": " << check_key(m, check2);
}