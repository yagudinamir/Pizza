#include "Personal.h"
#include "Kitchen.cpp"
#include "Tests.cpp"

using namespace std;

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    /*
    Personal per;
    WaiterFactory* factory = per.GetFactoryByCountry(1);
    Waiter* w = factory->create_Waiter();
    w->SayHello();
    w->GetOrder(2);

    Kitchen* k = new Kitchen();

    k->set_pizza_builder(w->get_builder());
    k->construct_pizza();
    Pizza* pizza = k->get_ready_pizza();

    pizza->ToString();*/


    return RUN_ALL_TESTS();
}