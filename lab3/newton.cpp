//#include <iostream>
//#include <cmath>
//#include <math.h>
//
//using namespace std;
//
//struct result{
//    double zero_point;
//    int iter;
//};
//
//double fun1(double x){
//    return cos(x) * cosh(x) -1;
//}
//
//double deriv_fun1(double x){
//    return cos(x)* sinh(x) - sin(x)*cosh(x);
//}
//
//double fun2(double x){
//    return 1/x - tan(x);
//}
//
//double deriv_fun2(double x){
//    return -1/pow(x, 2) - 1/pow(cos(x), 2);
//}
//
//double fun3(double x){
//    return pow(2,-x) + pow(M_E, x) + 2 * cos(x) -6;
//}
//
//double deriv_fun3(double x){
//    return pow(M_E, x) - pow(2, -x) * log10(2) - 2*sin(x);
//}
//
//result newtonRaphson(double x, double eps, double max, double (*func)(double), double (*deriv_fun)(double))
//{
//    double h = func(x); /// deriv_fun(x);
//    int i = 0;
//    while (abs(h) >= eps && max > i) {
//        h = func(x) / deriv_fun(x);
//        x = x - h;
//        i++;
//    }
//    result res;
//    res.zero_point = x;
//    res.iter = i;
//    return res;
//}
//int main() {
//    result res;
//    res =  newtonRaphson(5, 0.001, 10000, fun1,deriv_fun1);
//    cout << res.zero_point << " " << res.iter << endl;
//    res =  newtonRaphson(1, 0.001, 10000, fun2,deriv_fun2);
//    cout << res.zero_point << " " << res.iter << endl;
//    res =  newtonRaphson(2, 0.001, 10000, fun3,deriv_fun3);
//    cout << res.zero_point << " " << res.iter << endl;
//    return 0;
//}