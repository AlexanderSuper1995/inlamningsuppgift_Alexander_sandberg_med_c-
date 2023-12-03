 #include <iostream>
#include <String>
#include "logik.h"
using namespace std;
string input;
int antal_Rader =0;
int antalTecken = 0;
 
//logik objet = *new class logik;

int main()
{
	 
	cout << "type stop to exit";
	while (true)
	{
cin >> input;
antalTecken += input.length();
antal_Rader++;
if (input =="stop")
{
	break;
}
	}
	 
	// skiver ut här 
 	 
	cout << "Antal tecken"<<" "<<antal_Rader << " Antal rader"<<" " << antalTecken;




}

 