#include "Pizza.h"

void Pizza::SetName(string name_) {this->name = name_;}
void Pizza::SetSize(int size_) {this->size = size_;}
void Pizza::SetSause(const Sause sause_) {this->sause = sause_;}
void Pizza::SetSausage(Sausage sausage_) {this->sausage = sausage_;}
void Pizza::SetKeyIngredient(KeyIngredient ingredient_) {this->ingredient = ingredient_;}
string Pizza::ToString() {
        string s = "[ " + name;
        s += ", size: ";
        s += size;
        s += ", sause:";
        s += sause;
        s += ", ";
        s += sausage;
        s += ", ";
        s += ingredient;
        s += " ]";
        return s;
    }
int Pizza::GetSize() { return size; }