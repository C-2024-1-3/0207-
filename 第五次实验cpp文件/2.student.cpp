#include <iostream>
#include <string> 
#include "2.student.h"

void Student::display() {
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}

void Student::set_value(int num, const char* name, char sex) {
    this->num = num;
    strcpy_s(this->name, sizeof(this->name), name);
    this->sex = sex;
}