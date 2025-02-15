#include "MyForm.h"
#include "ZavdC.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
		Application::EnableVisualStyles();
		lab1::MyForm form;
		Application::Run(% form);
}