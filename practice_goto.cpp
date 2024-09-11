#include <iostream>
using namespace std;
int main(){
    int a, i=1;
    cout <<"Enter any number for gurenete to table ";
    cin>>a;
    t:
    if(i<=10)
    {
        cout<<a*i<<"\n";
        i++;
        goto t; 
    }
}