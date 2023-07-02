#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int sum = 0;
    
    for(int i = 1; i < n; i++) { 
        if(n % i == 0) 
            sum = sum + i; 
        } 
        if(sum > n){ 
            cout <<"Abundant Number"<<endl; 
            cout << "The Abundance is: " << (sum-n);
        } else {
            cout << n << " is not an Abundant Number"<<endl;
        }

    return 0;

}