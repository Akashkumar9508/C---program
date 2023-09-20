#include<iostream>
using namespace std;
class Vowel
{
	public:
		char s;
		void display()
		{
		cout<<"enter a character";
		cin>>s;
		}
		
		Switch(s)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		  			cout<<"vowel";
		  			break;
		  			default:
		  			cout<<"consonant";
		}
  
};
int main()
Vowel s1;
s1.display();
