#include<iostream>
using namespace std;
int main(){
    int n1,n2,q,r;
    cout<<"Enter the divident:";
    cin>>n1;
    cout<<"Enter the divisor:";
    cin>>n2;
    q=n1/n2;
    r=n1%n2;
    cout<<"The quo is:"<<q<<endl;
    cout<<"The rem is:"<<r;
    return 0;
    
}
