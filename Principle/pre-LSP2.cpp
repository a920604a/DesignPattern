#include <iostream>

class CommonCustomer
{
private:
    std::string name;
    std::string email;

public:
    CommonCustomer(std::string name, std::string email)
    {
        setName(name);
        setEmail(email);
    }
    std::string getName()
    {
        return name;
    }
    void setName(std::string name)
    {
        this->name = name;
    }
    std::string getEmail()
    {
        std::cout << "CommonCustomer email\n";
        return email;
    }
    void setEmail(std::string email)
    {
        this->email = email;
    }
};
class VIPCustomer
{
private:
    std::string name;
    std::string email;

public:
    VIPCustomer(std::string name, std::string email)
    {
        setName(name);
        setEmail(email);
    }
    std::string getName()
    {
        return name;
    }
    void setName(std::string name)
    {
        this->name = name;
    }
    std::string getEmail()
    {
        std::cout << "VIPCustomer email\n";
        return email;
    }
    void setEmail(std::string email)
    {
        this->email = email;
    }
};
class EmailSender
{
public:
    // 方法名稱一樣，但signature不一樣 => overload
    void sent(CommonCustomer customer)
    {
        customer.getEmail();
    }
    void sent(VIPCustomer customer)
    {
        customer.getEmail();
    }
};
int main()
{
    CommonCustomer customer("google", "xxx@gmail.com");
    VIPCustomer vip("aws", "xxx@aws.com");
    EmailSender emailSender;
    emailSender.sent(customer);
    emailSender.sent(vip);
}