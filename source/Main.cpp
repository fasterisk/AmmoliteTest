#include "ALCamera.h"
#include "ALGraphics.h"

int main()
{
	Ammolite::Graphics::Init(Ammolite::Graphics::Engine::OPENGL);
	Ammolite::Graphics::OpenWindow(800, 600, "AmmoliteTest");

	Ammolite::Camera * pCamera = Ammolite::Camera::CreateProjective();

	Ammolite::Graphics::StartRenderLoop();

	pCamera->Delete();
	pCamera = NULL;
}