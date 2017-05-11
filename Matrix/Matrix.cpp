// Matrix.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <iomanip>

void add(double[2][2], double[2][2], double[2][2]);
void printout(double m3_[2][2]);

int main()
{

	double m1[2][2] = { {1, 2}, {3, 4} };
	double m2[2][2] = { {1, 2}, {3, 4} };
	double m3[2][2];
	
	add(m1, m2, m3);

	printout(m3);
	

	system("pause");
    return 0;
}

void add(double m1_[2][2], double m2_[2][2], double m3_[2][2])
{
	m3_[0][0] = m1_[0][0] + m2_[0][0];
	m3_[0][1] = m1_[0][1] + m2_[0][1];
	m3_[1][0] = m1_[1][0] + m2_[1][0];
	m3_[1][1] = m1_[1][1] + m2_[1][1];
}
void printout(double m3_[2][2])
{
	std::cout << std::setw(4) << m3_[0][0] << std::endl;
	std::cout << std::setw(4) << m3_[0][1] << std::endl;
	std::cout << std::setw(4) << m3_[1][0] << std::endl;
	std::cout << std::setw(4) << m3_[1][1] << std::endl;
}
