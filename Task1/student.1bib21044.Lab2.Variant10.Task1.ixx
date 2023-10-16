export module student_1bib21044_Lab2_Variant10_Task1;

import <cmath>;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant10
		{
			namespace Task1
			{
				export double funcF1(double x)
				{
					return (sin(3.1415/2 + 3 * x)) / (1 - sin(3 * x - 3.1415));
				}
				export double funcF2(double x)
				{
					return (x > 3) ? -3 * x + 9 : pow(x, 3) / (pow(x,2) + 8);
				}
				double funcA(int i)
				{
					return pow((-1), i) * ((i + 1) / ((pow(i, 3) - pow(i, 2) + 1)));
				}
				export double funcF3(int n)
				{
					double f3 = 0;
					for (int i = 0; i < n; i++)
					{
						f3 += funcA(i);
					}
					return f3;
				}
				export double funcF4(double e)
				{
					double temp0 = 1, temp1 = 0;
					double f4 = 0;
					for(int i = 0; abs(temp0 - temp1) > e; i++)
					{
						temp0 = funcA(i);
						temp1 = funcA(i + 1);
						f4 += funcA(i);
					}
					return f4;
				}
			}
		}
	}
}


