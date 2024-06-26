#ifndef DRINKORDER_H
#define DRINKORDER_H
#include "product.h"
#include <string>
#include <sstream>

class order
{

public:
    order();
    order(const order &otherOrder);
    void addProduct(product &);
    // void addDrink()
    //  void addDrinks(drink **, int);
    ~order();
    std::string tostring() const;
    const order &operator=(const order &);
    product &operator[](int index);

private:
    void copyOrder(const order &);
    product **products;
    int numProducts;
};

#endif