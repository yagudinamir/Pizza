#include "WaiterFactory.h"


Waiter* RuWaiterFactory::create_Waiter() { return new RuWaiter(); }

Waiter* EnWaiterFactory::create_Waiter() { return new EnWaiter(); }
