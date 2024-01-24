#include <iostream>
#include <string>
#include "Inventory.h"
#include "Inventory.cpp"

int main(){
    if(Inventory_Accessed()){
        while(Inventory_Accessed()){
        Inventory_Items();
        }

    }
    else{
        std::cout << "Sorry your inventory cannot be accessed right now!!! " << std::endl;
    }
}
