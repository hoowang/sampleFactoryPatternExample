#ifndef FACTORY
#define FACTORY
#include "concreteproduct.h"

class Factory{
public:
    AbstractProduct* createProduct(PRODUCTTYPE type){
        switch (type) {
        case TypeA:
            return new productA();

        case TypeB:
            return new productB();

        case TypeC:
            return new productC();

        default:
            return 0;
        }
    }

    void destroyProduct(AbstractProduct*& product){
        delete product;
        product = 0;
    }

};

#endif // FACTORY

