/*  
    Assignment problem - 1


*/


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: (a)"<<endl;
    cin>>a;                                

    cout<<"Enter second number: (b)"<<endl;
    cin>>b;                               

    int max;   
    char max_char;
    if(a>b)
    {
        max = a;
        max_char = 'a';
    }
    else
    {
        max = b;
        max_char = 'b';
    }

    cout<<"The greater integer is : ("<<max_char <<") having value: "<<max<<endl;
  
    

}