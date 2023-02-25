#ifndef FACTORYPATTERNMETHDO_H
#define FACTORYPATTERNMETHDO_H
#include "SimpleFactory.h"

class BaseFactory
{
private:
    /* data */
public:
    BaseFactory(/* args */){};
    virtual ~BaseFactory(){};
    virtual Shoes* createShoes()=0;
};


class NikeShoesFactory: public BaseFactory {
    public:
    Shoes* createShoes() override{
        return new NikeShoes();
    }
};

class LiningShoesFactory:public BaseFactory {
    public:
    Shoes* createShoes()override{
        return new LiningShoes();
    }
};

void testFactoryPatternMethod();



#endif