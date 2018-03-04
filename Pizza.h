#include <iostream>
#include <string>
#pragma once

using namespace std;

enum Sausage{
    BAVARIAN, ITALIAN, CHICKEN
};

enum KeyIngredient{
    TOMATOES, OLIVES, PINEAPPLE
};

enum Sause{
    OIL, CHILL, GARLIC
};

class Pizza {
private:
    string name;
    int size;
    Sause sause;
    Sausage sausage;
    KeyIngredient ingredient;
public:
    void SetName(string name_);
    void SetSize(int size_);
    void SetSause(const Sause sause_);
    void SetSausage(Sausage sausage_);
    void SetKeyIngredient(KeyIngredient ingredient_);
    string ToString();
    int GetSize();
};