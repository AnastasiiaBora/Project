#include <iostream>

struct student {
    int group;
    int ses[10];
    std::string name;
};

int main() {
    student STUD1[10];
    for (int e = 0; e < 5; e ++) {
    std::cout << "Details for student " << e << ":\n";
    std::cout << "Enter group: ";
    std::cin >> STUD1[e].group;
    std::cout << std::endl << "Enter name: ";
    std::cin >> STUD1[e].name;
    std::cout << std::endl << "Enter performance: ";
     int total = 0;
     for (int a = 0; a < 5; a ++) {
    std::cin >> STUD1[e].ses[a];
    total += STUD1[e].ses[a];
    }
    double average = total / 5.0;
    std::cout << std::endl;
    if (average > 4) {
            std::cout << "Student with average score > 4: " << STUD1[e].group << " and " << STUD1[e].name << std::endl;
        } else {
            std::cout << std::endl << "This student has average score < 4\n";
        } 
    }
    

    for (int j = 0; j < 4; j ++) {
        for (int k = 0; k < 5 - j - 1; k ++) {
             if (STUD1[k].group > STUD1[k + 1].group) {
                student tmp = STUD1[k+1];
                STUD1[k] = STUD1[k + 1];
                STUD1[k + 1] = tmp;
            }
        }
    }

    for(int t = 0; t < 5; t ++) { 
    std::cout << "Details for student " << t << ":\n";
    std::cout << "Student is: " << STUD1[t].group << " and " << STUD1[t].name << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Performance " << i << ": " << STUD1[t].ses[i] << std::endl;
    }
}
  
  
    return 0;
}
