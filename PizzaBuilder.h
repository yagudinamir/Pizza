#include "Pizza.h"
#pragma once

class PizzaBuilder {
protected:
    Pizza* m_pizza;
public:
    virtual ~PizzaBuilder() {}
    Pizza* get_pizza();
    void create_product();
    virtual void build_name() = 0;
    virtual void build_size() = 0;
    virtual void build_sause() = 0;
    virtual void build_sausage() = 0;
    virtual void build_ingredient() = 0;
};
