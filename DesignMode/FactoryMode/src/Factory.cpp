#include "Factory.h"

void testShoesFactory() {
    ShoesFactory *factory = new ShoesFactory();

    Shoes* pnikeshoes = factory->createShoes(NIKE);
    Shoes *pliningshoes = factory->createShoes(LIINIG);

    pnikeshoes->show();
    pliningshoes->show();
}