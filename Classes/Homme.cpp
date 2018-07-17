#include "Homme.h"
#include <iostream>

namespace CCpp
{
    Man::Man()
    {
        Man::sex = "Homme";
    }

    void Man::sayF(std::string message)
    {
        std::cout << message << std::endl;
    }

    void Man::saySex()
    {
        std::cout << Man::sex << std::endl;
    }

    std::string Man::getSex()
    {
        return Man::sex;
    }
}
