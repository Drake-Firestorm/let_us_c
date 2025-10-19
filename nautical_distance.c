/* Distance between 2 lat long in nautical miles */

# include <stdio.h>
# include <math.h>

int main()
{
    float l1, l2, g1, g2, lat1, lat2, long1, long2, d;

    printf("Enter Latitude and Longitude for first point (lat1, long1): ");
    scanf("%f %f", &l1, &g1);

    printf("Enter Latitude and Longitude for second point (lat2, long2): ");
    scanf("%f %f", &l2, &g2);

    // convert degrees to radians
    lat1  = l1 * 3.14 / 180;
    lat2  = l2 * 3.14 / 180;
    long1 = g1 * 3.14 / 180;
    long2 = g2 * 3.14 / 180;

    // distance in nautical miles
    d = 3963 * acos((sin(lat1) * sin(lat2)) + (cos(lat1) * cos(lat2)) * (cos(long2 - long1)));

    printf("Distance between (%f, %f) and (%f, %f): %f\n", lat1, long1, lat2, long2, d);

    return 0;
}
