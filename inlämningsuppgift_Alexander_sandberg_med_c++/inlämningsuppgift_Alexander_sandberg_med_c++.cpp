// detta programet stöder bara windows
#include <cstdio>
#include <windows.h>
#include <iostream>
#include <String>
#pragma execution_character_set( "utf-8" )
#include "logik.h"
using namespace std;
int main(int argc, char** argv)
{
	 
	  
	logik logikObj = *new (logik);
    SetConsoleOutputCP(65001);
   std::string input;
   int x = 0;
   std::cout << "om program ska stängas av måste du skiva stop\n";
		while(true)
		{
			std::cin >> input;			
			std::cout << "du skrev men stängas av måste du skiva stop\n";
			logikObj.antalTecken_metod(input);
			logikObj.antal_Rader_metod();
 			if (input=="stop")
			{
				break;
			}
		}
	 
std::cout<< "antalantalTecken "<< logikObj.antalTecken<<" antal rader "<< logikObj.antal_Rader<<" om du vill stänga förstert skiv stop\n";
// för att man ska kunna se det som exe annas försvinner förstert så fort att man inte ser något
std::cin >> input;
//continue;
 return 0;
	}
	 
	 


 