#include<iostream>
using namespace std;
class Abc{
	private:
		void show()
		{
			cout<<" hello 	BCA	";
			
		}
		protected:
			void info()
			{
				show();
			
			}
			public:
				void disp()
				{
					info();
				}
			
};
int main()
{
	Abc a;
	a.disp();
	
}