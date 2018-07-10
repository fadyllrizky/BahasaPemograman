#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	for (int i = 7; i > 0; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			cout <<"*";
		}
		for (int k = i; k < 7; k++)
		{
			cout << " ";
		}
		
		for (int k = i; k < 7; k++)
		{
			cout << " ";
		}
		for (int j = i; j >= 0; j--)
		{
			cout << "*";
		}
		cout<<endl; 
	}
	
	for (int i = 7; i > 0; i--)
	{
		
		for (int j = i; j <= 7; j++)	
		{
			cout << "*";	
		}
		for (int k = i; k > 0 ; k--)
		{
			cout << " ";
		}
		for (int k = i; k > 0 ; k--)
		{
			cout << " ";
		}
		for (int j = i; j <= 7; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	getch();	

}
