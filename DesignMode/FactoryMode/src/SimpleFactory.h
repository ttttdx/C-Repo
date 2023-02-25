#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H
#include <stdio.h>

class Shoes{

public:
virtual void show() = 0;
virtual ~Shoes() {};
};

class NikeShoes: public Shoes
{
private:
    /* data */
public:
    NikeShoes(/* args */){};
    ~NikeShoes(){};
    void show()override {
        printf("this is Nike shoes\n");
    }
};


class LiningShoes: public Shoes
{ 
private:
    /* data */
public:
    LiningShoes(/* args */){};
    ~LiningShoes(){};
    void show()override{
        printf("this is li ning shoes\n");
    }
};



class Clothes {
    public:
    virtual ~Clothes(){} 
    virtual void show() = 0;
};

class NikeClothes: public Clothes {
    public:
    void show()override{
        printf("this is nike clothes\n");
    }
};

class LiningClothes: public Clothes {
    public:
    void show()override {
        printf("this is lining clothes\n");
    }
};


#endif