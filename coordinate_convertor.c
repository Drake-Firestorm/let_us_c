/* Convert Cartesian co-ordinates to Polar co-ordinates */

# include <stdio.h>
# include <math.h>

int main()
{
    int x, y, r;
    float theta;

    printf("Enter Cartesian co-ordinates (x, y): ");
    scanf("%d %d", &x, &y);

    // convert to polar
    r = sqrt((x * x) + (y * y));
    theta = atan2(y, x) * 180 / 3.14; // 180/pi to convert radians to degrees

    printf("Polar co-ordinates (r, theta): %d %f\n", r, theta);

    return 0;
}
