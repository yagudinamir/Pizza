#include "Waiter.h"

class WaiterFactory{
public:
    virtual Waiter* create_Waiter() = 0;
};

class RuWaiterFactory : public WaiterFactory {
public:
    Waiter* create_Waiter() override;
};

class EnWaiterFactory : public WaiterFactory {
public:
    Waiter* create_Waiter() override;
};
