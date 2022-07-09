#include <iostream>
// 抽象出接口，開閉原則
class Shop
{
public:
    virtual void sell() = 0;
};
class MovieShop : public Shop
{
public:
    void sell()
    {
        std::cout << "MovieShop sell" << std::endl;
    }
};
class FamilyShop : public Shop
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
    // 接口類、客戶端
    // 這邊父類換成子類不會有問題，里式代換
    // 依賴於抽象、接口編程，依賴反轉
    void shopping(Shop *shop)
    {
        shop->sell();
    }
};
int main()
{

    Customer customer = Customer();
    FamilyShop *familyShop = new FamilyShop();
    MovieShop *movieShop = new MovieShop();
    // 接口注入是指通過在接口中聲明的業務方法來傳入具體類的對象
    customer.shopping(familyShop);
    customer.shopping(movieShop);
    // FamilyShop sell
    // MovieShop sell
    return 0;
}