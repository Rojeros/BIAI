#include "MyForm.h"
#include "Wiezien.h"
#include "Gra.h"

int pozycjaMut = 0;
int szansaMut = 0;
int szansaKrzyz = 0;
int pozycjaKrzyz = 0;
int liczbaGraczy = 2;
int liczbaPokolen = 0;
int liczbaPowtorzen = 1;
Gra * wsk;

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Biai::MyForm form;
	wsk=new Gra();
	Application::Run(%form);

}
