/*Äŕíî ěíîćĺńňâî ňî÷ĺę íŕ ďëîńęîńňč. Íŕďčřčňĺ ďđîăđŕěěó, íŕőîä˙ůóţ ńđĺäč ýňčő äâĺ, đŕńńňî˙íčĺ ěĺćäó ęîňîđűěč - íŕčěĺíüřĺĺ.
*/

#include <iostream>
#include <cmath>
using namespace std;

double l(double x1,double y1,double x2,double y2)
{
	double dx = x1 - x2;
	double dy = y1 - y2;
	double k = sqrt(dx * dx + dy * dy );
	return k;
}
int main()
{
int n;
cin>>n;
double dotsX[n];
double dotsY[n];

for (int j = 0;j < n; j++)
cin >> dotsX[j] >> dotsY[j];

double c=0;
double cmin = l(dotsX[1],dotsY[1],dotsX[2],dotsY[2]);
for (int j = 0; j < n; j++)
{

for (int i = j + 1;i < n; i++)
{
	c=l(dotsX[j],dotsY[j],dotsX[i],dotsY[i]);
	if (cmin > c)
  {
	cmin = c;
}
}
}
cout << cmin;

return 0;
}
