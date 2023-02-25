#include "FactoryPatternMethdo.h"


void testFactoryPatternMethod()
{
    NikeShoesFactory* nikeFactory = new NikeShoesFactory();
    Shoes* pnikeShoes = nikeFactory->createShoes();


    LiningShoesFactory* liningFactory = new LiningShoesFactory();
    Shoes* pliningShoes = liningFactory->createShoes();

    pnikeShoes->show();
    pliningShoes->show();
}
