#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <float.h>

double GetRandomNumber(void);

int main()
{
    // Initialization, should only be called once.
    time_t t;
    srand((unsigned)time(&t));
    double inCount = 0;
    double maxCount = 100000;
    for (int i = 0; i < maxCount; i++)
    {
        double x = GetRandomNumber();
        //printf("x = %f\r\n", x);
        double xSquared = pow(x, 2.0);
        //printf("x2 = %f\r\n", xSquared);
        double y = GetRandomNumber();
        //printf("y = %f\r\n", y);
        double ySquared = pow(y, 2.0);
        //printf("y2 = %f\r\n", ySquared);
        double t = xSquared + ySquared;
        //printf("x2 + y2 = %f\r\n", t);
        double result;
        result = sqrt(t);
        //printf("sqrt = %f\r\n", result);
        if (result < 1)
        {
            ++inCount;
        }
       
    }
    double pi = (inCount / maxCount) * 4;
    printf("pi is about %f\r\n", pi);
    return 0;
}

double GetRandomNumber()
{
    // Returns a pseudo-random integer between 0 and 10.
    int r = rand() % 10;
    // divide number by ten to get value in range 0 .. 1
    double returnValue = r / 10.0F;
    return returnValue;
}
