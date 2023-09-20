#include<iostream>
using namespace std;
class MUL{
    public:
    int a;
    /// @brief 
    int b;
    void show()
    {
        cout<<"enter the first number :-";
        cin>>a;
        cout<<"enter the second number :- ";
        cin>>b;

    }
    void output()
    {
        cout<<"the multiple is = "<<a*b;
    }
};
int main()
{

    MUL m;
    m.show();
    m.output();
}