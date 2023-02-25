#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H
#include "SimpleFactory.h"

class AbstractFactory
{
private:
    /* data */
public:
    virtual Shoes* createShoes()=0;
    virtual Clothes* createClothes()=0;
    ~AbstractFactory(){};
};


class NikeFactory: public AbstractFactory
{
private:
    /* data */
public:
    Shoes* createShoes()override{
        return new NikeShoes();
    }
    Clothes* createClothes()override{
        return new NikeClothes;
    }
};

class LiningFactory : public AbstractFactory
{
private:
    /* data */
public:
    Shoes *createShoes() override
    {
        return new LiningShoes();
    }
    Clothes *createClothes() override
    {
        return new LiningClothes;
    }
};


void testAbstractFactory();
#endif