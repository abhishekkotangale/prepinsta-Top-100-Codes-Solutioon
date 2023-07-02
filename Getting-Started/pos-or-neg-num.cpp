#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    if (n>0)
    {
        cout << "Number is Positive"<<endl;
    }else if(n<0){
        cout << "Number is Negative"<<endl;
    }else{
        cout << "Zero"<<endl;
    }
    

    return 0;
}