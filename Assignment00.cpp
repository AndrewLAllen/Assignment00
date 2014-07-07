/*Andrew Allen
 CodeCamp: C++ 101
 Chad Cravens*/
 
#include <iostream>
#include <cstdlib>

using namespace std;

//function delcartion

void checkSymbol(char s)
{
	while(isalnum(s) || isspace(s) )
	{
		cout << "The symbol entered is alpha-numeric or an empty space(A-Z OR a-z OR 0-9 OR ' ')"<<endl;
		cout << "Please enter a different symbol."<<endl;
		cin >> s;
	}
}


int main ()
{
	//Variable Declaration
	int max = 0;
	char symbol; 
	char arr [max];

	//Welcome Statement
	cout << "Welcome to the great prymaid challenge!\n"<<endl;
	cout << "To start off, please enter the max level of the prymaid."<<endl;

	cin >>max;

	cout << "The max level will be " << max <<endl;
	cout << "Please enter a non alpha-numeric symbol.\n";

	cin >> symbol;

	checkSymbol(symbol);

	for(int i =0; i < max; i++)
	{
		arr [i]=symbol;
		cout << i <<"\t" << arr<<endl;
	}

	return 0;


}
