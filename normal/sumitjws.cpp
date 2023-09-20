#include<iostream>
using namespace std;
class Akash{
    public:
    int yos;
    char G[10];
    char qu[10];
    void input()
    {
        cout<<" enter your gender: ";
        cin>>G;
        cout<<" enter your year of service : ";
        cin >>yos;
        cout<<"enter your qulification";
        cin>>qu;
    }
    void output()
    {
        if('G'=='male' || 'qu'=='pg' || yos>=10)
        {
            cout<<" gross salary = 15000";
        }
        else if ('G'=='male' || 'qu'=='UG'|| yos>= 10 )
        {
            cout<<" gross salary =10000";
        }
        else if ( 'G'== 'male' || 'qu'=='pg' || yos<=10 )
        {
            cout<<" gross salary =10000";
        }
        else{
            cout<<" enter y";
        }


    }

};
int main()
{
    Akash a;
    a.input();
    a.output();
}