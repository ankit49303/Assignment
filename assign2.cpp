/*
Assignment problem - 2

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an integer : "<<endl;
    cin>>n;           
    cout<<"Even number from 0 to "<<n<<" are :"<<endl;

    for(int i=0;i<=n;i+=2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}