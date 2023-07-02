#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int z = n;

    int rev = 0;
    
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if(z == rev){
        cout << "Palindrome Number";
    }else{
        cout << "Not Palindrome Number";
    }
    

    return 0;
}