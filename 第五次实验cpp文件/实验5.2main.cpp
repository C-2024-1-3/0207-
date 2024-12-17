#include <iostream>
#include "2.student.h"

int main() {
    Student stud;
    stud.set_value(1, "zhangsan", 'm');
    Student stud1; 
    stud1.set_value(7, "tcg", 'm'); 
    stud.display(); 
    stud1.display(); 
    return 0;
}