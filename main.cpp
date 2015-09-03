#include <iostream>
#include "concreteproduct.h"
#include "factory.h"

using namespace std;

int main()
{
    Factory *ProductFactory = new Factory();
    AbstractProduct *productObjA = ProductFactory->createProduct(TypeA);
    productObjA->show();

    AbstractProduct *productObjB = ProductFactory->createProduct(TypeB);
    productObjB->show();

    AbstractProduct *productObjC = ProductFactory->createProduct(TypeC);
    productObjC->show();

    cout<<"===========开始销毁对象==========="<<endl;
    ProductFactory->destroyProduct (productObjA);
    ProductFactory->destroyProduct (productObjB);
    ProductFactory->destroyProduct (productObjC);

    return 0;
}

