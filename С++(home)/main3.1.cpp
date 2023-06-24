#include <iostream>

struct student {
    int group;
    int ses[10];
    std::string name;
};

int main() {
    student y;
    std::cout << "Enter group: ";
    std::cin >> y.group;
    std::cout << std::endl << "Enter name: ";
    std::cin >> y.name;
    std::cout << std::endl << "Enter performance: ";
    for (int i = 0; i < 5 ; i++) {
        std::cin >> y.ses[i]; 
    }
    
    std::cout << "Y student is: " << y.group << " and " << y.name << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Performance " << i << ": " << y.ses[i] << std::endl;
    }
   
    return 0;
}
