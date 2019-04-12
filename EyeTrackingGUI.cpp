#include "EyeTrackingGUI.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project9::EyeTrackingGUI form;
	Application::Run(%form);
	//System::Diagnostics::Process::Start("Source.exe");
}

