// detta programet stöder bara windows
#include <cstdio>
#include <windows.h>
#include <iostream>
#include <String>
#pragma execution_character_set( "utf-8" )
#include "logik.h"

using namespace std;
int main()
{
	logik logikObj = *new logik;
    SetConsoleOutputCP(65001);
   std::string input;
  
 
	std::cout << "om program ska stängas av måste du skiva stop"<<std::endl;
 
   		
		while(true)
		{
			std::cin >> input;
			logikObj.antalTecken_metod(input);
			logikObj.antal_Rader_metod();

			if (input=="stop")
			{
				break;
			}
		}

std::cout<< "antalantalTecken " << logikObj.antalTecken <<" antalTecken ";
std::cout << logikObj.antal_Rader;

	}
	 
	 


 