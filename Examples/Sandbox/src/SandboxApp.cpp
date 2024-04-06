#include "SandboxApp.h"
#include "Hazel.h"

SandboxApp::SandboxApp()
{
}

SandboxApp::~SandboxApp()
{
}

Hazel::Application*  Hazel::CreateApplication()
{
	return new SandboxApp();
}
