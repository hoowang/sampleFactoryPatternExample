#ifndef CONCRETEPRODUCT
#define CONCRETEPRODUCT
#include <iostream>
#include "abstractproduct.h"

using namespace std;

class productA : public AbstractProduct
{
public:
    virtual void show(){
       cout<<"this is productA"<<endl;
    }
};

class productB : public AbstractProduct
{
public:
    virtual void show(){
       cout<<"this is productB"<<endl;
    }
};

class productC : public AbstractProduct
{
public:
    virtual void show(){
       cout<<"this is productB"<<endl;
    }
};


#endif // CONCRETEPRODUCT

