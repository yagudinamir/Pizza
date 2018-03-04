#include "PizzaBuilder.h"

class ItalianPizzaBuilder : public PizzaBuilder {
public:
    ItalianPizzaBuilder() : PizzaBuilder() {}
    ~ItalianPizzaBuilder() {}
    void build_name() override;
    void build_sause() override;
    void build_size() override;
    void build_sausage() override;
    void build_ingredient() override;
};

class HawaianPizzaBuilder : public PizzaBuilder {
public:
    HawaianPizzaBuilder() : PizzaBuilder() {}
    ~HawaianPizzaBuilder() {}
    void build_name() override;
    void build_size() override;
    void build_sause() override;
    void build_sausage() override;
    void build_ingredient() override;
};

class BavarianPizzaBuider : public PizzaBuilder {
public:
    BavarianPizzaBuider() : PizzaBuilder() {}
    ~BavarianPizzaBuider() {}
    void build_name() override;
    void build_size() override;
    void build_sause() override;
    void build_sausage() override;
    void build_ingredient() override;
};
