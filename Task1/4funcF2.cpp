module student_1bib21044_Lab2_Variant10_Task4:funcF2;
import <cmath>;
double RBPO::Lab2::Variant10::Task4::funcF2(double x)
{
	if (x > 3)
		return -3 * x + 9;
	else
		return pow(x, 3) / (pow(x,2) + 8);
}