#include <iostream>
#include "potion.h"

using namespace std;

int main()
{
    {
        Potion test;


        if(test.health_potion() != 5){
            std::cout << "health" << endl;
        }

        return 0;
    }

}