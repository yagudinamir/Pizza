#include "MainBuider.h"
class Waiter{
private:
    PizzaBuilder* builder_;
public:
    virtual PizzaBuilder* get_builder() { return builder_; }
    virtual void SayHello() = 0;
    virtual void GetOrder(int pizza_index) = 0;
    virtual ~Waiter() {}
};

class RuWaiter : public Waiter{
private:
    PizzaBuilder* builder_;
public:
    PizzaBuilder* get_builder() override;
    void SayHello() override;
    void GetOrder(int pizza_index) override;
};

class EnWaiter: public Waiter{
private:
    PizzaBuilder* builder_;
public:
    PizzaBuilder* get_builder() override;
    void SayHello() override;
    void GetOrder(int pizza_index) override;
};