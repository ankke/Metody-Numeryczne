#include <iostream>
#include <cmath>
#include <math.h>


using namespace std;

struct result{
    double zero_point;
    int iter;
};

double fun1(double x){
    return cos(x) * cosh(x) -1;
}

double fun2(double x){
    return 1/x - tan(x);
}

double fun3(double x){
    return pow(2,-x) + pow(M_E, x) + 2 * cos(x) -6;
}

result sieczne(double a, double b, double eps, double max, double (*fun)(double)){
    int i = 0;
//    if( fun(a) * fun(b)  > 0)
//    {
//        cout << "podaj inny przedzial" << endl;
//        result res;
//        res.zero_point = 0;
//        res.iter = -1;
//        return res;
//    }
    double c;
    while(fabs(fun(b) - fun(a))>eps && max > i){
        c =  b - fun(b) * (b - a) / (fun(b) - fun(a));
        a=b;
        b=c;
        i++;
    }
    result res;
    res.zero_point = b;
    res.iter = i;
    return res;
}

int main()
{

    result res;
    res =  sieczne(5, 2 * M_PI, 0.0000001, 100, fun1);
    cout << res.zero_point << " " << res.iter << endl;
    res =  sieczne(0.5, 1.5, 0.0000001, 100, fun2);
    cout << res.zero_point << " " << res.iter << endl;
    res =  sieczne(1, 3, 0.0000001, 100, fun3);
    cout << res.zero_point << " " << res.iter << endl;
    return 0;

}