//secant method

#include<iostream>
#include<math.h>
using namespace std;

double checkRoot(double x){

    return (1/(x*x*x)+sin(x));

}

int main()
{

    double a,b;
    int count =0;
    double c=0;
    cout<<"Enter interval"<<endl;
    cin>>a>>b;
    while(fabs(checkRoot(c))>0.0005){

        c=(a*checkRoot(b)-b*checkRoot(a))/(checkRoot(b)-checkRoot(a));
        a=b;
        b=c;
        count++;
        if(checkRoot(a)==checkRoot(b)){

            cout<<"The value doesnot exit";
        }

        if(count == 50){

            cout<<"The function is discountinous or value doesnot exist";

        }

 

    }
    cout<<"The root is"<<c;
    return 0;
}