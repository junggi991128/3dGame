#include"FileManager.h"
#include"Object.h"
#include"Renderer.h"

int main(void)
{
	Renderer* renderer = new Renderer();
	renderer->init();

	FileManager* fileManager = new FileManager();
	Object* cube = new Object();
	cube->setProgramID(fileManager->LoadShaders("vs.shader", "fs.shader"));
	cube->setTexture(fileManager->loadDDS("uvtemplate.DDS"));
	
	renderer->setObject (cube);
	while (true)
	{
		renderer->renderer();
	}

	delete fileManager;
	delete cube;
	delete renderer;

	return 0;
} 