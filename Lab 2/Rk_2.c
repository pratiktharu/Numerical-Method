//RK-2 Method

#include<stdio.h>
#include<math.h>
float f(float x, float y){

    return(x+y);
}

int main(){

    float x,y,xo,yo,a,b,c,d,k,h,xn;
    int i,n;
    printf("Enter the intial values as X,Y \n");
    scanf("%f%f", &xo,&yo);
    printf("Enter the desired value of x for f(x) \n");
    scanf("%f", &xn);
    printf("Enter the no of iterations you want:\n");
    scanf("%d", &n);
    h=(xn-xo)/n;
    printf("\tx\ty\n");
    for(i=1; i<=n; i++){

        a=h*f(xo,yo);
        b=h*f(xo+h, yo+h);
        c=h*f(xo+h/2, yo+b/2);
        d=h*f(xo+h, yo+c);
        k=(a+b)/2;
        y=yo+k;
        x=xo+h;
        yo=y;
        xo=x;
        printf("\t%f\t%f\n", x,y);
    }

    printf("The functional value is: %f", y);
    return 0;

}