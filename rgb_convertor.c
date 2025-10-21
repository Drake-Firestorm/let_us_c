/* RGB to CMKY convertor */

# include <stdio.h>

int main()
{
    int r, g, b;
    float r_255, g_255, b_255, w, c, m, y, k;

    printf("Enter values for RGB (0-255): ");
    scanf("%d %d %d", &r, &g, &b);

    // convert
    r_255 = r / 255.0;
    g_255 = g / 255.0;
    b_255 = b / 255.0;

    if (r_255 >= g_255 && r_255 >= b_255)
        w = r_255;
    else if (g_255 > r_255 && g_255 > b_255)
        w = g_255;
    else
        w = b_255;

    c = (w - r_255) / w;
    m = (w - g_255) / w;
    y = (w - b_255) / w;
    k = 1 - w;

    if (r_255 == 0 && g_255 == 0 && b_255 == 0)
        {
            c = m = y = 0;
            k = 1;
        }

    printf("RGB (%d, %d, %d) converted to CMYK(%f, %f, %f, %f)\n", r, g, b, c, m, y, k);

    return 0;
}
