#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    int a = n;
    int b = n;
    int length = 0;
    while (n > 0)
    {
        length++;
        n /= 10;
    }
    int sum = 0;
    while (a > 0)
    {
        int rem = a % 10;
        sum += pow(rem , length);
        a /= 10;
    }
       
    if (sum == b)
    {
        cout << "Number is Armstrong";
    }else{
        cout << "Number is Not Armstrong";
    }
    

    return 0;
}
