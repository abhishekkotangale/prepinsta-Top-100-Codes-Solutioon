#include<iostream>
using namespace std;

int main()
{
    int num1, num2, lcm;
    cin >> num1 >> num2;

    if(num1 > num2){
      max = num1;
    }else{
      max = num2;
    }
  
    for(int i = max ; i <= num1*num2 ; i=i+max)
    {
        if(i % num1 == 0 && i % num2 == 0){
            lcm = i;
            break;
        }
    }

    cout<<lcm;

    return 0;
}
