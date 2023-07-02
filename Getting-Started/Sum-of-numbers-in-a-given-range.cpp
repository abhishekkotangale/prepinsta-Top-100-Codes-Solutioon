#include<iostream>
using namespace std;

int main(){

    int first_num , sec_num;
    cin >> first_num >> sec_num;
    int sum = 0;

    for (int i = first_num; i <= sec_num; i++)
    {
        sum += i;
    }

    cout << sum << endl;
    

    return 0;
}