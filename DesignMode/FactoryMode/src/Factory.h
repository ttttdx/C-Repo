#ifndef FACTORY_H
#define FACTORY_H
#include "SimpleFactory.h"

typedef enum SHOES_TYPE {
    NIKE,
    LIINIG,
}SHOES_TYPE_T;

class  ShoesFactory {
    public:
        Shoes *createShoes(SHOES_TYPE_T shoesType)
        {
            if(shoesType == NIKE) {
                return new NikeShoes();
            }else if(shoesType == LIINIG) {
                return new LiningShoes();
            }

            return nullptr;
        }
};

void testShoesFactory();


#endif