//Bisection method

#include<iostream>
#include<math.h>
using namespace std;
double checkRoot(double x){
    return x*sin(x)+cos(x);
}

int main()
{

    double a,b;
    int count=0;
    double c=0;
    cout<<"Enter Interval"<<endl;
    cin>>a>>b;
    if(checkRoot(a)*checkRoot(b)>0){

        std::cout<<"Root doesnot lie in this interal";

    }
    else{

        while(fabs(checkRoot(c)>0.0005)){

            count++;
            c=(a+b)/2;
            if(checkRoot(a)*checkRoot(c)<0){
                b=c;
            }
            else{
                a=c;

            }
            if(count==50)
            {
                cout<<"The function is discountinous";
            }
        }
    }

    cout<<"The root is"<<c;
    return 0;


}
