#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Rectangle{
	public:
		float a,b;
		float pole(float a,float b);
		void ahowPole();
};

float Rectangle::pole(float a,float b){
	return a*b;
}
int main(int argc, char** argv) {
	Rectangle test;
	test.a=12;
	test.b=120;
	cout << test.a;
	cout << test.b;
	return 0;
}
