#include <iostream>
#include <vector>

class Item
{
public:
    int codeNo;
    double price;

    Item(int code, double price)
    {
        codeNo = code;
        this->price = price;
    }
};

class ShoppingList
{
private:
    std::vector<Item> items;

public:
    void addItem(int code, double price)
    {
        Item newItem(code, price);
        items.push_back(newItem);
    }

    void deleteItem(int code)
    {
        for (auto it = items.begin(); it != items.end(); ++it)
        {
            if (it->codeNo == code)
            {
                items.erase(it);
                break;
            }
        }
    }

    double getTotalValue()
    {
        double total = 0.0;
        for (const auto &item : items)
        {
            total += item.price;
        }
        return total;
    }
};

int main()
{
    ShoppingList shoppingList;

    // Adding items to the list
    shoppingList.addItem(1, 10.99);
    shoppingList.addItem(2, 5.99);
    shoppingList.addItem(3, 3.49);

    // Deleting an item from the list
    shoppingList.deleteItem(2);

    // Printing the total value of the order
    double totalValue = shoppingList.getTotalValue();
    std::cout << "Total value of the order: $" << totalValue << std::endl;

    return 0;
}