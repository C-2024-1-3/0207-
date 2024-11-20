#include <iostream>
using namespace std;

int main() {
    const double applePrice = 0.8;
    int applesBought = 2; 
    double totalCost = applesBought * applePrice; 
    int days = 1; 

 
    while ((applesBought *= 2) <= 100) {
        totalCost += applesBought * applePrice; 

        days++; 

    }

    
    double averageCost = totalCost / days; 
    cout << "平均每天花费的金额: " << averageCost << endl;

    return 0;
}