#pragma once
#ifdef HZ_PLATFORM_WINDOWS


extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialize Log!");
	int a = 5;
	HZ_INFO("Hello! var={0}", a);
	auto app = Hazel::CreateApplication();
	//SandBox* sandbox = new SandBox();
	app->Run();
	delete app;
}

#endif