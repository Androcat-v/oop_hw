#include "Readers.h"
#include <iostream>
#include <vector>
#include "Ranch.h"

void Start()
{
    Ranch ranch;
    while (true) {
        std::cout << std::endl << "Please press if you want to:" << std::endl
            << "1 - buy a new horse" << std::endl
            << "2 - see your horses" << std::endl
            << "0 - to stop the program" << std::endl << std::endl;
        int choice = ReadSizeT();
        switch (choice) {
        case 1:
            ranch.BuyHorse();
            break;
        case 2:
            ranch.GetMyHorses();
            break;
        case 0:
            return;
        }
    }
}

int main()
{
    Start();
}
