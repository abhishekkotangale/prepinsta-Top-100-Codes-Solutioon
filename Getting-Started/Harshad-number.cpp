#include <iostream>
using namespace std;

int checkHarshad(int num){
    
    int sum = 0;
    int temp = num;
    
    while(temp != 0){
        sum = sum + temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}

int main ()
{
    int n ;
    cin >> n;
    
    if(checkHarshad(n))
        cout <<" Harshad's number";
    else
        cout << "Not a Harshad's number";

    return 0;
}