#include<bits/stdc++.h> 
#include<math.h> 
using namespace std;

int order(int x)
{
    int len = 0;
    while (x)
    {
        len++;
        x = x/10;
    }
    return len;
}

void armstrong(int a, int b){
    
    for(int num = a; num <= b; num++){
        
        int sum = 0, temp, digit, len;
        temp = num;
        
        len = order(num);
        

        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + pow(digit,len);;
            temp /= 10;
        };
    
        if(sum == num)
            cout << num << " ";
    }
}

int main ()
{
    int a,b;
    cin >> a >> b;
    armstrong(a, b);

    return 0;
}