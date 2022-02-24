#include <iostream>
#include <vector>
#include <string>

#define LOG(x) std::cout << x << std::endl;

struct Person
{
    char name[20];
    uint8_t skills;

    struct Skill
    {
        
    };
    
};

int main(int argc, char const *argv[])
{
    uint C,P;
    std::cin >> C;
    std::cin >> P;
    
    // LOG(C);LOG(P);

    for (uint i = 0; i < C; i++)
    {
        
        char person[20];
        std::cin >> person;

        uint8_t skills;
        std::cin >> skills;

        for (uint j = 0; j < skills; j++)
        {
            char skill[20];
            std::cin >> skill;

            uint8_t level;
            std::cin >> level;


        }
        

    }
    


    
    return 0;
}
