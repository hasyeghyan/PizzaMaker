#include "Margarita.hpp"
#include "Pepperoni.hpp"
#include "FourCheese.hpp"
#include "Cheese.hpp"
#include "Mushrooms.hpp"
#include "Olives.hpp"
#include "ExtraSauce.hpp"

#include <iostream>

int main() {
    std::shared_ptr<IPizza> myPizza1 =
        std::make_shared<ExtraSauce>(
            std::make_shared<Mushrooms>(
                std::make_shared<Cheese>(
                    std::make_shared<Margarita>()
                )
            )
 );

 std::cout << "Pizza Description: " << myPizza1->description() << "\n";
 std::cout << "Total Cost: $" << myPizza1->cost() << "\n";

 std::shared_ptr<IPizza> myPizza2 =
        std::make_shared<ExtraSauce>(
            std::make_shared<Olives>(
                std::make_shared<Cheese>(
                    std::make_shared<Pepperoni>()
                )
            )
 );

 std::cout << "Pizza Description: " << myPizza2->description() << "\n";
 std::cout << "Total Cost: $" << myPizza2->cost() << "\n";
 
 return 0;
}