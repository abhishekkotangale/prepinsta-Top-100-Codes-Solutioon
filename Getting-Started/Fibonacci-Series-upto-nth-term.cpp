#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1;
    
    int c;
    
    // printing the rest of the terms here
    for(int i = 2; i < n; i++){
        c = a + b;
        a = b;
        b = c;
        
        cout << c << " ";
    }

    return 0;
}