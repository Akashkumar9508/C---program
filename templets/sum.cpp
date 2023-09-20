#include<iostream>
using namespace std;
template<class Temp>Temp sum(Temp a , Temp b)
{
    return a+b;
}
int  main()
{
    int p=25,q=35;
    cout<<"sum is = "<<sum(p,q);
    cout<<"\n sum is ="<<sum(35.76,46.65);
}