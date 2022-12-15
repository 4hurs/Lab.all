#include <iostream> 
#include <cmath>

using namespace std; 
 
class Square 
{ 
private: 
    double m_side;
    double diagonal;
public: 
    void DiaOfSquare(double side) 
    { 
        m_side = side; 
        diagonal = m_side * sqrt(2); 
        if (m_side <= 0) 
            cout << "Wrong value"; 
        else 
            cout << "Your diagonal = " << diagonal; 
         
    } 
}; 
 
int main() 
{  
    double side; 
    Square par1; 
 
    cout << "Enter the side of Square: "; 
    cin >> side; 
 
     
    par1.DiaOfSquare(side); 
}
