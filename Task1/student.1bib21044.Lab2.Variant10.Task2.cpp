module student_1bib21044_Lab2_Variant10_Task2;
import <cmath>;


double RBPO::Lab2::Variant10::Task2::funcF1(double x)
{
	return (sin(3.1415/2 + 3 * x)) / (1 - sin(3 * x - 3.1415));
}
double RBPO::Lab2::Variant10::Task2::funcF2(double x)
{
	if (x > 3)
		return -3 * x + 9;
	else
		return pow(x, 3) / (pow(x,2) + 8);
}
static double funcA(int i)
{
	return pow((-1), i) * ((i + 1) / ((pow(i, 3) - pow(i, 2) + 1)));
}
double RBPO::Lab2::Variant10::Task2::funcF3(int n)
{
	double f3 = 0;
	int i = 0;
	while (i < n)
	{
		f3 += funcA(i);
		i++;
	}
	return f3;
}
double RBPO::Lab2::Variant10::Task2::funcF4(double e)
{

	double temp0 = 1, temp1 = 0;
	double f4 = 0;
	int i = 0;
	while (abs(temp0 - temp1) > e)
	{
		temp0 = funcA(i);
		temp1 = funcA(i + 1);
		f4 += funcA(i);
		i++;
	}
	return f4;
}