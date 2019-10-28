#include"hzpch.h"
#include"Hazel.h"
class SandBox :public Hazel::Application
{
public:
	SandBox() {};
	~SandBox() {};
};

Hazel::Application* Hazel::CreateApplication()
{
	return new SandBox();
}

//int main()
//{
//	SandBox* sandbox = new SandBox();
//	sandbox->Run();
//	delete sandbox;
//}