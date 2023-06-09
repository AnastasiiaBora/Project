#include <iostream>
 
class Money
{
public:
    long usd; 
    int penny; 
 
    Money(long usd, int penny)
    {
        if (penny < 0 || usd < 0) {
            throw std::string("Wrong money!");
        }
        // convert penny to usd if needed
        if (penny >= 100) {
            // 125 | 125 / 100 = 1 | 125 % 100 = 25
            long pennyToUsd = penny / 100;
            int newPenny = penny % 100;
            usd += pennyToUsd;
            penny = newPenny;
        }
        
        this->usd = usd;
        this->penny = penny;
    }
    // 99 + 99 = 198
    void add (Money money2)
    {
        this->usd = this->usd + money2.usd;
        this->penny = this->penny + money2.penny;
        this->calculateMoney();
    }
    
    void calculateMoney ()
    {
        if (this->penny >= 100) {
            this->usd++;
            this->penny -= 100;
        } else if (this->penny < 0) {
            this->penny += 100;
            if (this->usd >= 1) {
                this->usd--;
            } else {
                throw std::string("Not enough money");
            }
        }
    }

    void compare(Money money2) 
    {
        if(this->usd > money2.usd) {
            std::cout << this->usd << ',' << this->penny << std::endl;
        } else {
            if(this->usd < money2.usd) {
                std::cout << money2.usd << ',' << money2.penny << std::endl;
            } else {
                    if(this->penny > money2.penny) {
                        std::cout << this->usd << ',' << this->penny << std::endl;
                    } else {
                         std::cout << money2.usd << ',' << money2.penny << std::endl;
                        }
                }
         }
    };

    void subtract (Money money2)
    {
        this->usd = this->usd - money2.usd;
        this->penny = this->penny - money2.penny;
        this->calculateMoney();
    }
 
    void print ()
    {
        std::cout << this->usd << ',' << this->penny << std::endl;
    }
};
 
int main() {
    try {
        Money money1((long)0, 89);
        money1.print();
 
        Money money2((long)0, 99);
        money2.print();
 
        money1.compare(money2);
 
 
    } catch (std::string exception) {
        std::cout << exception << std::endl;
        return 0;
    }
 
    return 0;
}