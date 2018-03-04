cmake_minimum_required(VERSION 3.8)
project(untitled3)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES main.cpp Pizza.h Pizza.cpp PizzaBuilder.h PizzaBuilder.cpp MainBuider.h MainBuilder.cpp Kitchen.cpp Waiter.h Waiter.cpp WaiterFactory.cpp Personal.h WaiterFactory.h Personal.cpp Tests.cpp)
add_executable(untitled3 ${SOURCE_FILES} Tests/ClassName.h)
target_link_libraries(untitled3 gtest gtest_main)