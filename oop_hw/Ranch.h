#pragma once

#include "Randomizer.h"
#include "Horse.h"
#include <iostream>
#include <vector>

class Farm
{
public:
    virtual Horse GenerateHorse()
    {
        Horse horse;
        return horse;
    }
    virtual std::vector<Horse> GetAvailableHorses()
    {
        std::vector<Horse> horse;
        return horse;
    }
};

class Ranch : public Farm
{
private:
    std::vector<Horse> horses;
    int numberOfStables{};

    Horse GenerateHorse() override
    {
        Horse newHorse{ GetRandomBreed() , GetRandomAge() };
        return newHorse;
    }

public:
    std::vector<Horse> GetAvailableHorses() override
    {
        std::vector<Horse> availableHorses;
        for (int i = 0; i < 7; i++)
        {
            availableHorses.emplace_back(GenerateHorse());
        }
        return availableHorses;
    }

    void BuyHorse()
    {
        horses.emplace_back(ChooseHorse());
    }

    void GetMyHorses()
    {
        std::cout << "Your horses are:" << std::endl;
        for (int i = 0; i < horses.size(); i++)
        {
            std::cout << i << ". Breed - " << ToStringBreed(horses[i].breed)
                << "  Age - " << horses[i].age << std::endl;
        }
    }
};
