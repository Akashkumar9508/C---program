#include<iostream>
using namespace std;
class Triangle{
    public:
    int hight;
    int base;
    int area;
    void input()
    {
        cout<<"Enter the hight of triangle :- ";
        cin>>hight;
        cout<<"Enter the base of triangle:- ";
        cin>>base;
        system("CLS");

    }
   
    void output()
    {
        cout<<"Area of triangle is = "<<(0.5*(base*hight));;
    
    }

};
int main()
{
    Triangle t;
    t.input();
    t.output();
}