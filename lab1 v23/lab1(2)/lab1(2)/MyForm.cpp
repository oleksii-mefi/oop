#include "MyForm.h"
#include "ZavdClass.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	lab12::MyForm form;
	Application::Run(% form);
}

