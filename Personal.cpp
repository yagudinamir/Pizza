#include "Personal.h"

WaiterFactory* Personal::GetFactoryByCountry(int country_ind) {
    switch(country_ind){
        case 1 : {
            return new RuWaiterFactory();
        }
        default:
            return new EnWaiterFactory();
    }
}