#pragma once
#include <iostream>


enum HorseBreed
{
    Appaloosa,
    Friesian,
    Orlov,
    Shetland,
    COUNT
};


struct Horse
{
    HorseBreed breed{};
    int age{};
};
std::string ToStringBreed(HorseBreed breed);
Horse ChooseHorse();
