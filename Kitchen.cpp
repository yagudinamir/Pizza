#include "PizzaBuilder.h"

class Kitchen {
private:
    PizzaBuilder* m_pizza_builder;
public:
    Kitchen() : m_pizza_builder(NULL) {}
    ~Kitchen() {}
    void set_pizza_builder(PizzaBuilder* builder) {
        m_pizza_builder = builder;
    }
    Pizza* get_ready_pizza() {
        return m_pizza_builder->get_pizza();
    }
    void construct_pizza() {
        m_pizza_builder->create_product();
        m_pizza_builder->build_sausage();
        m_pizza_builder->build_name();
        m_pizza_builder->build_size();
        m_pizza_builder->build_sause();
        m_pizza_builder->build_ingredient();
    }
};