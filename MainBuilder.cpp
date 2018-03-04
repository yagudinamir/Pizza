#include "MainBuider.h"

void ItalianPizzaBuilder::build_name() { m_pizza->SetName("Italiano"); }
void ItalianPizzaBuilder::build_sause() { m_pizza->SetSause(OIL); }
void ItalianPizzaBuilder::build_size()  { m_pizza->SetSize(45); }
void ItalianPizzaBuilder::build_sausage()  { m_pizza->SetSausage(ITALIAN); }
void ItalianPizzaBuilder::build_ingredient()  { m_pizza->SetKeyIngredient(TOMATOES); }

void HawaianPizzaBuilder::build_name()  { m_pizza->SetName("Hawaii"); }
void HawaianPizzaBuilder::build_size()  { m_pizza->SetSize(35); }
void HawaianPizzaBuilder::build_sause()  { m_pizza->SetSause(GARLIC);}
void HawaianPizzaBuilder::build_sausage()  { m_pizza->SetSausage(CHICKEN); }
void HawaianPizzaBuilder::build_ingredient()  { m_pizza->SetKeyIngredient(PINEAPPLE); }

void BavarianPizzaBuider::build_name()  { m_pizza->SetName("Bavaria"); }
void BavarianPizzaBuider::build_size()  { m_pizza->SetSize(40); }
void BavarianPizzaBuider::build_sause()  { m_pizza->SetSause(CHILL); }
void BavarianPizzaBuider::build_sausage()  {m_pizza->SetSausage(BAVARIAN); }
void BavarianPizzaBuider::build_ingredient()  {m_pizza->SetKeyIngredient(OLIVES); }

