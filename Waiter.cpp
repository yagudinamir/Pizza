#include "Waiter.h"

using namespace std;

PizzaBuilder* RuWaiter::get_builder()  { return builder_; }
void RuWaiter::SayHello()  { cout << "Добрый Вечер!" << endl; };
void RuWaiter::GetOrder(int pizza_index)  {
    switch (pizza_index) {
        case 1 : {
            cout << "Гавайская" << endl;
            builder_ = new HawaianPizzaBuilder();
            break;
        }
        case 2 : {
            cout << "Баварская" << endl;
            builder_ = new BavarianPizzaBuider();
            break;
        }
        case 3 : {
            cout << "Итальянская" << endl;
            builder_ = new ItalianPizzaBuilder();
            break;
        }
        default : {
            cout << "Такой нет" << endl;
        }
    }
};

PizzaBuilder* EnWaiter::get_builder()  { return builder_; }
void EnWaiter::SayHello()  { cout << "Good Evening!" << endl; };
void EnWaiter::GetOrder(int pizza_index)  {
    switch (pizza_index) {
        case 1 : {
            cout << "Hawaii" << endl;
            builder_ = new HawaianPizzaBuilder();
            break;
        }
        case 2 : {
            cout << "Bavarian" << endl;
            builder_ = new BavarianPizzaBuider();
            break;
        }
        case 3 : {
            cout << "Italian" << endl;
            builder_ = new ItalianPizzaBuilder();
            break;
        }
        default : {
            cout << "There is no such pizza" << endl;
        }
    }
}
