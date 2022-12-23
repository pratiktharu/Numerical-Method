#include<stdio.h>
#include<math.h>
float f(float x, float y){

    return(x+y);
}

int main(){


    float xo, yo, x, y, h, m, xn;
    int n, i;
    printf("Enter the initial values as X,Y\n");
    scanf("%f%f", &xo,&yo);
    printf("Enter the no of iterations : \n");
    scanf("%d", &n);
    printf("Enter the desired value of x for f(x): ");
    scanf("%f", &xn);
    h=(xn-xo)/n;
    printf("The functional value is: %f", y);
    printf("\tx\ty\n");
    for(i=1; i<=n; i++){

        y=yo+h*f(xo,yo);
        x=xo+h;
        yo=y;
        xo=x;
        printf("\t%f\t%f\n", x, y);
    }

    printf("The functional value is: %f", y);
    return 0; 

}
