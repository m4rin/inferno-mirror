#include "Mau/Mau.h"
#include "Mau/States/Gameplay/GameplayState.h"
#include "Mau/States/MainMenu/MainMenuState.h"
#include "Mau/States/Story/Substates/IntroState.h"

using namespace Mau;

int main(int argc, char** argv)
{
    try
    {
        const std::shared_ptr<SDLSystemMain> sdlSystemMain = std::make_shared<SDLSystemMain>();
        const std::shared_ptr<SDLSystemImage> sdlSystemImage = std::make_shared<SDLSystemImage>();
        const std::shared_ptr<SDLSystemMixer> sdlSystemMixer = std::make_shared<SDLSystemMixer>();

        Engine engine{ sdlSystemMain, sdlSystemImage, sdlSystemMixer, std::make_unique<StateCreator<IntroState>>() };
    }
    catch (Exception& e)
    {
        MAU_LOG(e.what());
        return 1;
    }

    return 0;
}
