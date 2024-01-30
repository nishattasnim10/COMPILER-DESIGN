#include<iostream>
using namespace std;

int fractl(int n)
{
    if(n==0 || n==1){return 1;}
    else{ return n*fractl(n-1);}
}

int main()
{
    int n;
    cout<<"Enter number: "; cin>>n;
    cout<<"Fractional number: "<<fractl(n);

    return 0;

}
