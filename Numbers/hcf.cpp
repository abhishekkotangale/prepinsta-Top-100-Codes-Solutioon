#include<iostream>
using namespace std;

int main(){

    int a , b;
    cin >> a >> b;

    int hcf = 1;

    for (int i = 1; i <=a or i<=b ; i++)
    {
        if (a%i==0 and b%i==0)
        {
            hcf = i;
        }
        
    }
    
    cout << hcf;

    return 0;
}
