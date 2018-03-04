#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Pizza.h"


using testing::Eq;

namespace {
    class ClassDeclaration : public testing::Test {
    public:
        Pizza obj;
        ClassDeclaration(){
            obj;
        }
    };
}

TEST_F(ClassDeclaration, nameOfTheTest1){
    obj.SetSize(100);
    obj.SetName("Italiano");
    obj.SetSausage(BAVARIAN);
    obj.SetKeyIngredient(TOMATOES);
    obj.SetSause(OIL);

    EXPECT_EQ("[ Italiano, size:100, sause:OIL, BAVARIAN, TOMATOES ]", obj.ToString());
}
