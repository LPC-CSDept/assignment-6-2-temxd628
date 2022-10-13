//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
double nthpowerp(int n)
{      
      double res = 1;
      for (int i = 0; i < n; i++) {
        res *= 2;
      }
      return res;

}
double nthpowern(int n)
{
        return 1/nthpowerp(-n);
}
void printout(double result)
{
        cout << "The result is " << setw(10) << fixed << setprecision(5) << result << endl;
}
