 #include <iostream>
#include <String>
#include "logik.h"
 
logik myObj;   
int main()
{
   std::string input;
   int antal_Rader =0;
   int antalTecken = 0;
	 
	std::cout << "type stop to exit"<<std::endl;
	while (true)
	{
		std::cin >> input;
		//myObj.antalTecken(input);
        antalTecken += input.length();
        antal_Rader++;
        if (input =="stop")
    {
	break;
    }

	}
	
	 
	 
	std::cout << "Antal tecken"<<" "<<antal_Rader << " Antal rader"<<" " << antalTecken;




}

 