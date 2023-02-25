#include "AbstractFactory.h"

void testAbstractFactory()
{
    NikeFactory* pnikeFactory = new NikeFactory();

    Clothes* nikeClothes = pnikeFactory->createClothes();
    nikeClothes->show();

    Shoes* nikeShoes  = pnikeFactory->createShoes();
    nikeShoes->show();

    LiningFactory* pliningFactory = new LiningFactory();
    
    Clothes* liningClothes = pliningFactory->createClothes();
    liningClothes->show();
    
    Shoes* liningShoes = pliningFactory->createShoes();
    liningShoes->show();

}
