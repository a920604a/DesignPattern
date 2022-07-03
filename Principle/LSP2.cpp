#include <iostream>

class Customer
{
protected:
    std::string name;
    std::string email;
    Customer(std::string name, std::string email)
    {
        setName(name);
        setEmail(email);
    }

public:
    virtual std::string getName()
    {
        return this->name;
    }
    virtual void setName(std::string name)
    {
        this->name = name;
    };
    virtual std::string getEmail()
    {
        return this->email;
    }
    virtual void setEmail(std::string email)
    {
        this->email = email;
    }
};
class EmailSender
{
public:
    void send(Customer *customer)
    {
        std::cout << "send to \t" << customer->getName() << " " << customer->getEmail() << std::endl;
    }
};
class CommonCustomer : public Customer
{
public:
    CommonCustomer(std::string name, std::string email) : Customer(name, email) {}
};
class VIPCustomer : public Customer
{
public:
    VIPCustomer(std::string name, std::string email) : Customer(name, email) {}
};

int main()
{
    EmailSender email = EmailSender();
    CommonCustomer customer = CommonCustomer("aws", "xxx@aws.com");
    email.send(&customer);
    return 0;
}