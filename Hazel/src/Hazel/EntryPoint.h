#pragma once
#ifdef HZ_PLATFORM_WINDOWS


extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Hazel::CreateApplication();
	//SandBox* sandbox = new SandBox();
	app->Run();
	delete app;
}

#endif