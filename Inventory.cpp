// PROJECT Inventory System
#include "Inventory.h"
#include <iostream>
#include <array>
#include <map>
// INVENTORY OPENED CHECK
bool Inventory_Accessed(){
        std::string Y_N;
        std::cout << "Would you like to access your inventory? (Y or N) " << std::endl;
        std::cin >> Y_N;
        if(Y_N == "Y" || Y_N == "y"){
            std::cout << "Your Inventory has been accessed:\n " << std::endl;
            return true;
        }
        else{
            return false;
        }
}
std::string Inventory_Items(){
    std::string Input_Type;
    std::string Input_Quality;
    //ITEM QUALITY CHECK
    std::cout << "Please input an Item Quality into your starting Inventory:(Poor, Common, Worker, Royalty) " << std::endl;
    std::cin >> Input_Quality;
    if(Input_Quality == "Poor" || Input_Quality == "poor"){
        Item_Quality Poor = Item_Quality::Poor;
    }
    else if(Input_Quality == "Common" || Input_Quality == "common") {
        Item_Quality Common = Item_Quality::Common;     
    }
    else if(Input_Quality == "Worker" || Input_Quality == "worker"){
        Item_Quality Worker = Item_Quality::Worker;
    }
    else if(Input_Quality == "Royalty" || Input_Quality == "royalty"){
        Item_Quality Royalty = Item_Quality::Royalty;
    }
    else{
        std::cout << "Please enter a valid Item Quality to be placed into your inventory " << std::endl;
        std::cout << "Please input an Item Quality into your starting Inventory:(Poor, Common, Worker, Royalty) " << std::endl;
        std::cin >> Input_Quality;
    } 
    // ITEM TYPE CHECK
    std::cout << "Please input an Item Type into your starting Inventory:(Consumeable, Armor, Weapons, Coins) " << std::endl;
    std::cin >> Input_Type;
    if(Input_Type == "Consumeable" || Input_Type ==  "consumeable"){
        Item_Type Consumeable = Item_Type::Consumeable;
    }
    else if(Input_Type == "Armor" || Input_Type ==  "armor") {
       Item_Type Armor = Item_Type::Armor;     
    }
    else if(Input_Type == "Weapons" || Input_Type ==  "weapon"){
        Item_Type Weapons = Item_Type::Weapons;
    }
    else if(Input_Type == "Coins" || Input_Type ==  "coins"){
        Item_Type Coins = Item_Type::Coins;
    }
    else{
        std::cout << "Please enter a valid Item Type to be placed into your inventory " << std::endl;
        std::cout << "Please input an Item Type into your starting Inventory: (Consumeable, Armor, Weapons, Coins) " << std::endl;
        std::cin >> Input_Type;
    }
    // ITEM NAME CHECK
    std::string Item_Name = Inv.Item_Text.Name; 
    std::cout << "Please input an item name into your starting Inventory: " << std::endl;
    std::cin.clear();
    std::cin.sync();
    std::getline(std::cin,Item_Name);
    // ITEM AMOUNT CHECK
    std::cout << "Please enter the amount of " << Item_Name << "s in your Inventory: \n" << std::endl;
    std::cin >> Inv.Item_Numeric.Amount;
    int Item_Amount = Inv.Item_Numeric.Amount;
    // INVENTORY DISPLAY
    std::cout << "The Amount of " << Item_Name << "s at " << Input_Quality << " You have is: " << Item_Amount <<" " << std::endl;
} 





