#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

/* Class constructor */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/* After sale of product, decrements number of that product in stock */
void Inventory::sell()
{
  m_in_stock--;
}

/* Allows constant stream of input for product statistics until user wants to quit application */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
