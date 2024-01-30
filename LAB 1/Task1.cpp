#include<iostream>
using namespace std;

int main()
{
    float avg,sum=0;

    int arr[5]={1,5,27,10,4};

    for(int i=0;i<5;i++)
    {
        sum += arr[i];
    }
     avg= sum/5;
     cout<<"Average value: "<<avg;

     return 0;


}




