#include<iostream>
using namespace std;

int main()
{
    int s1,s2;

    int arr[5]={10,5,27,1,4};

    s1= arr[0];
    s2= arr[0];

    for(int i=1;i<5;i++)
    {
        if (arr[i]>s1)
        {
            s1= arr[i];
        }


    if(arr[i]<s2)
    {
        s2= arr[i];
    }

    }

cout<<"Maximum number: "<<s1;
cout<<"\nMinimum number: "<<s2;


    return 0;
}

