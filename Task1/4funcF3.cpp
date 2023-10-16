module student_1bib21044_Lab2_Variant10_Task4:funcF3;
import <cmath>;
import :funcA;
double RBPO::Lab2::Variant10::Task4::funcF3(int n)
{
	double f3 = 0;
	int i = 0;
	do
	{
		f3 += funcA(i);
		i++;
	} while (i < n);
	return f3;
}