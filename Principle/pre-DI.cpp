#include <iostream>

class MovieShop
{
public:
    void sell()
    {
        std::cout << "MovieShop sell" << std::endl;
    }
};
class FamilyShop
{
public:
    void sell()
    {
        std::cout << "FamilyShop sell" << std::endl;
    }
};
class Customer
{
public:
    void shopping(MovieShop shop)
    {
        // 買電影票
        shop.sell();
    }
    void shopping(FamilyShop shop)
    {
        shop.sell();
    }
};
int main()
{

    Customer customer = Customer();
    FamilyShop familyShop = FamilyShop();
    MovieShop movieShop = MovieShop();
    customer.shopping(familyShop);
    customer.shopping(movieShop);

    return 0;
}
