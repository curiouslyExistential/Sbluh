#include "sbluh.h"

double conv(double x, bool sweeps)
{
    // x refers to the value that was passed to convert. It is either Years, or Sweeps. It's a double to give more percision.
    // y is simply the value that is going to be passed on to whatever called the function
    double y = 0;

    // If the input is in Years, the number is divided by 2.166666666666667. Else multiplied for the reverse.
    // Alternian solar sweeps equal to 2.166666666666667 years per Solar sweep.
    if(sweeps == 1)
        y = (double)x / 2.166666666666667;
    else if(sweeps == 0)
        y = (double)x * 2.166666666666667;
    return y;
}
