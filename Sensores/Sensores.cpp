#include "stdafx.h"  //________________________________________ Sensores.cpp
#include "Sensores.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Sensores app;
	return app.BeginDialog(IDI_Sensores, hInstance);
}

void Sensores::Window_Open(Win::Event& e)
{
	wstring name(L"Termometro");
	const double weigth = 49.0;
	const int width = 4;
	const int heigth = 10;
	const int depth = 5;
	wstring texto;
	Sys::Format(texto, L"Name: %s\r\nWeigth: %g gr\r\nSize: %d cm x %d cm x %d", name.c_str(), weigth, width, heigth, depth);
	this->MessageBox(texto, L"Especificaciones", MB_OK);
}

