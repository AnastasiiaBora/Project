#include <iostream>
 
class Money
{
public:
    long usd;
    int penny;
 
    Money(long usd, int penny)
    {
        this->usd = usd;
        if (penny < 0 || penny >= 100) {
            throw std::string("Wrong money!");
        }
        this->penny = penny;
    }
   
    void add (Money money2)
    {
         this->usd = this->usd + money2.usd;
         this->penny = this->penny + money2.penny;
         this->calculateMoney();
    }

    void subtract(Money money2)
    {
         this->usd = this->usd + money2.usd;
         this->penny = this->penny + money2.penny;
         this->calculateMoney();
    }
    void calculateMoney()
    {
        if (this->penny > 100) {

        } else if (this->penny < 0) {

        }
    }
    void print() {
        std::cout << this->usd << ',' << this->penny << std::endl;
    }
};
 
int main() {
    try {
        Money money1((long)10, 10000);
    } catch (std::string exception) {
        std::cout << exception << std::endl;
        return 0;
    }
   // Money money2(10, 50);
    //money1.print();
 
    Money money2((long)5, 25);
    money2.print();
    
    //money1.add(money2);
    //money1.print();

    //money1.subtract(money2);
   // money1.print();
    
  return 0;
}

