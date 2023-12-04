#pragma once
#include <iostream>
#include <string>
class logik
{
public:

	int antal_Rader = 0;
	int antalTecken = 0;
public:
	void antal_Rader_metod() {

		antal_Rader++;

	}
public:

	void antalTecken_metod(std::string args) {
		antalTecken  += args.length();
		
	}
}
;
