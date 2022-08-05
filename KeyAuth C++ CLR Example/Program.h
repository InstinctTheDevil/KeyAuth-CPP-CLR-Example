#include "Login.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace KeyAuthCCLRExample;
int main(array<System::String ^> ^args)
{
    Login login;                // New instance of Login
    Application::Run(% login);  // Load login
    return 0;
}
