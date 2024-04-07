#pragma once
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int args, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_ERROR("Initialize Core Logger!");
	HZ_INFO("Initialize Client Logger!!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif