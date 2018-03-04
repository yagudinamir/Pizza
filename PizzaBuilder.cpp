#include "PizzaBuilder.h"

Pizza* PizzaBuilder::get_pizza() {
    return m_pizza;
}
void PizzaBuilder::create_product() { m_pizza = new Pizza(); }
