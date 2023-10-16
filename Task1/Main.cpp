#include <iostream>

import student_1bib21044_Lab2_Variant10_Task1;
import student_1bib21044_Lab2_Variant10_Task2;
import student_1bib21044_Lab2_Variant10_Task3;
import student_1bib21044_Lab2_Variant10_Task4;
import student_1bib21044_Lab2_Variant10_Task5;

using namespace std;

int main()
{
	int choice;
	bool repeat = true;
	while(repeat)
	{
		cout << "Choice task 1-5: ";
		cin >> choice;
		double x;
		cout << "input x: ";
		cin >> x;
		int n;
		cout << "input the number of iterations n:";
		cin >> n;
		double e = 0;
		cout << "input the accuracy e: ";
		cin >> e;

		switch (choice)
		{
			case(1):
			{
				cout << "variant 10 task 1" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant10::Task1::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant10::Task1::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant10::Task1::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant10::Task1::funcF4(e) << endl;
				break;
			}
			case(2):
			{
				cout << "variant 10 task 2" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant10::Task2::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant10::Task2::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant10::Task2::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant10::Task2::funcF4(e) << endl;
				break;
			}
			case(3):
			{
				cout << "variant 10 task 3" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant10::Task3::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant10::Task3::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant10::Task3::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant10::Task3::funcF4(e) << endl;
				break;
			}
			case(4):
			{
				cout << "variant 10 task 4" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant10::Task4::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant10::Task4::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant10::Task4::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant10::Task4::funcF4(e) << endl;
				break;
			}
			case(5):
			{
				cout << "variant 10 task 5" << endl;
				cout << "f1 = " << RBPO::Lab2::Variant10::Task5::funcF1(x) << endl;
				cout << "f2 = " << RBPO::Lab2::Variant10::Task5::funcF2(x) << endl;
				cout << "f3 = " << RBPO::Lab2::Variant10::Task5::funcF3(n) << endl;
				cout << "f4 = " << RBPO::Lab2::Variant10::Task5::funcF4(e) << endl;
				break;
			}
		}
		cout << "repeat? 1)Y 0)N" << endl;
		cin >> repeat;
		cout << "okay" << endl;
	}
	
}
