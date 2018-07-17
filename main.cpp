#include <iostream>

template<typename T>
void say(T message)
{
    std::cout << message << std::endl;
}

class Identity
{
public:
    void sayF(std::string message)
    {
        std::cout << "By CLASS : " << message << std::endl;
    };
};

class Homme : public Identity
{
    const std::string sexe {"Homme"};

public:
    std::string getSexe()
    {
        return sexe;
    }
    void saySexe()
    {
        sayF(sexe);
    }
};

int main()
{
    std::string chaine {"Salut"};
    Homme myIdentity;
    for (auto c: chaine)
    {
        say(c);
    };
    myIdentity.saySexe();
    myIdentity.sayF("test");
    say("C'est cool le c++ !");
    return 0;
}