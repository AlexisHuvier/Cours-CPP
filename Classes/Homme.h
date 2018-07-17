#ifndef COURSCPP_HOMME_H
#define COURSCPP_HOMME_H

#include <iostream>

namespace CCpp
{
    class Man
    {
        std::string sex;

    public:
        Man();
        void sayF(std::string message);
        std::string getSex();
        void saySex();
    };
}

#endif
