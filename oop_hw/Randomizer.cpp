#include "Randomizer.h"
#include "Horse.h"
#include <random>

int GetRandomNumber(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    int randomNum = distrib(gen);
    return randomNum;
}

HorseBreed GetRandomBreed()
{
    int i = 0;
    int breedNumber = GetRandomNumber(i, HorseBreed::COUNT - 1);
    return static_cast<HorseBreed>(breedNumber);
}

int GetRandomAge()
{
    int i = 1;
    int j = 10;
    int age = GetRandomNumber(i, j);
    return age;
}

