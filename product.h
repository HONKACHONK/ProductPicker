#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

class Product {
public:
  /**
    Constructs a product with score 0 and price 1.
  */
  Product();
  /**
    Reads in this product object
  */
  void read();

  /**
    Compares two product objects.
    @param b the object to compare with this object
    @return true in this object is better than b
  */
  bool is_better_than(Product b) const;

  /**
    Prints this product object.
  */
  void print() const;
private:
  string name;
  double price;
  int score;
};

#endif
