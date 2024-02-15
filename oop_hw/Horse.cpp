#include "Horse.h"
#include <iostream>
#include <vector>
#include "Ranch.h"
#include "Readers.h"


std::string ToStringBreed(HorseBreed breed)
{
    switch (breed) {
    case HorseBreed::Appaloosa:
        return "Appaloosa";
    case HorseBreed::Friesian:
        return "Friesian";
    case HorseBreed::Orlov:
        return "Orlov";
    case HorseBreed::Shetland:
        return "Shetland";
    default:
        return "";
    }
}

Horse ChooseHorse()
{
    Ranch ranch;
    std::vector<Horse> availableHorses = ranch.GetAvailableHorses();
    for (int i = 0; i < availableHorses.size(); i++)
    {
        std::cout << i << ". Breed - " << ToStringBreed(availableHorses[i].breed)
            << "  Age - " << availableHorses[i].age << std::endl;
    }
    std::cout << "Chose the horse that you want to buy." << std::endl;
    std::size_t choice = ReadSizeT();
    while (!(choice < 7)) {
        std::cout << "Please choose from the options." << std::endl;
        ClearStream(std::cin);
        choice = ReadSizeT();
    }
    return availableHorses[choice];
}
