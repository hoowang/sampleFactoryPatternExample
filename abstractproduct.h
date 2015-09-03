#ifndef ABSTRACTPRODUCT
#define ABSTRACTPRODUCT

typedef enum ProductTypeTag
{
    TypeA,
    TypeB,
    TypeC
}PRODUCTTYPE;

class AbstractProduct
{
public:
    virtual void show() = 0;
};

#endif // ABSTRACTPRODUCT

