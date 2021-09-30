#include <iostream>

using namespace std;

class Rectangle{
    public:
        float aideA;
        float sideB;

        inline float inline_area(float sideA, float sideB){
            return sideA*sideB;
        }

        inline float inline_circuit(float sideA, float sideB){
            return 2*sideA+2*sideB;
        }
};

int main()
{

    cout << "Hello world!" << endl;
    Rectangle prostokat;
    cout<<"Pole prostokat wynosi: "<<prostokat.inline_area(2,4)<<" cm^2 \n"
    << "Obwod prostokata wynosi: " << prostokat.inline_circuit(2,4) << "cm";
    return 0;
}
