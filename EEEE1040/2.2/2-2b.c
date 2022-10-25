#include <stdio.h>
#include <math.h>

int main () {
    int a, b, c, d, e, f, g;
    float x1, x2;

    printf("\nInput a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    x1 = (-b + sqrt(b*b - 4*a*c)) / 2*a;
    x2 = (-b - sqrt(b*b - 4*a*c)) / 2*a;
    e = b*b;
    f = 4*a*c;
    d = e-f;
    printf("%i", d);
    g = (b*b - 4*a*c);
    printf("\n%i", g);



    printf("%i", (b*b - 4*a*c));

    if((b*b - 4*a*c) < 0) {
        printf("\nThis quadratic has no solutions.\n");
    }

    if((b*b - 4*a*c) == 0) {
        printf("\nThe solution of this qudaratic is %0.2f.\n", x1);
    }

    if((b*b - 4*a*c) > 0) {
        printf("\nThe solutions to this quadratic are %0.2f and %0.2f.\n", x1, x2);
    }
    return 0;
}