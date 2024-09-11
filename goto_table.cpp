#include <iostream>
using namespace std;
int main(){
    int a, i=1;
    cout <<"Enter a any number";
    cin>>a;
   
    t:
    cout<<a*i<<"\n";
    i++;
    if(i<=10)
    {
        goto t;
    };
    cout <<"done";

}