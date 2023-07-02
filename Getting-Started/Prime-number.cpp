#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    bool isPrime = true;
    if (n < 2)
    {
        isPrime = false;
    }else{
        for (int i = 2; i < n; i++)
        {
            if (n%i == 0)
            {
                isPrime = false;
                break;
            }
            
        }
    }

    if(isPrime == true){
        cout << "It is a prime number";
    }else{
        cout << "It is Not a prime number";
    }
    
    

    return 0;
}