
#include "mytriangle.h"
bool is_valid(double side1, double side2, double side3) {
    
    return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}
double calculate_area(double side1, double side2, double side3) {
    if (!is_valid(side1, side2, side3)) {
        std::cerr << "错误：三边不满足三角形" << std::endl;
        return -1.0;
    }

    double s = (side1 + side2 + side3) / 2.0;
    return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
}