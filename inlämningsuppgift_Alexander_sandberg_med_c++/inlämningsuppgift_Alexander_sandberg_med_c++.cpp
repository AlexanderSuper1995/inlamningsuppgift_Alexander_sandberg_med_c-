 #include <iostream>
#include <String>
using namespace std;
string input;
int antal_Rader =0;
int antalTecken = 0;
int main()
{
	cout << "type stop to exit";
	while (true)
	{
		 
cin >> input;
antal_Rader++;
if (input =="stop")
{
	break;
}
	}

	
	antalTecken += input.length();
	 
	cout << "Antal tecken  "<<antal_Rader << "Antal rader   " << antalTecken;




}

 