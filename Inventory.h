#pragma once
#include <string>

    enum class Item_Quality : uint8_t{
        Poor,
        Common,
        Worker,
        Royalty
    };
    enum class Item_Type : uint8_t{
        Consumeable,
        Armor,
        Weapons,
        Coins
    };
    struct Item_ID{
        int Item_Id;
    };
    struct Item_Statistics{
        float DamageValue;
        float HealingAmount;
        float SellValue;
    };
    struct Item_Text_Data{
        std::string Name;
        std::string Descripton;
        std::string Interaction_Text;
        std::string Usage_Text;
    };
    struct Item_Numeric_Data{
        float Weight;
        int32_t Max_Stack_Size;
        bool bIs_Stackable;
        float Amount;
    };
    struct Inventory
    {
        Item_ID Item_ID;
        Item_Quality Item_Quality;
        Item_Type Item_Type;
        Item_Statistics Item_Statistics;
        Item_Text_Data Item_Text;
        Item_Numeric_Data Item_Numeric;
    };Inventory Inv;

