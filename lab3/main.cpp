//#include <iostream>
//#include <cmath>
//#include <math.h>
//using namespace std;
//
//struct result{
//    double zero_point;
//    int iter;
//};
//
//double fun1(double x){
//    return cos(x) * cosh(x) * -1;
//}
//
//double fun2(double x){
//    return 1/x - tan(x);
//}
//
//double fun3(double x){
//    return pow(2,-x) + pow(M_E, x) + 2 * cos(x) -6;
//}
//
//result bisection(double a, double b, double eps, double (* func)(double))
//{
//    if (func(a) * func(b) >= 0)
//    {
//        cout << "podaj inny przedział\n";
//        result res;
//        res.zero_point = 0;
//        res.iter = -1;
//        return res;
//    }
//
//    double c = a;
//    int i = 0;
//    while ((b-a) >= eps)
//    {
//        c = (a+b)/2;
//        if (func(c) == 0.0)
//            break;
//        else if (func(c)*func(a) < 0)
//            b = c;
//        else
//            a = c;
//        i++;
//    }
//    result res;
//    res.zero_point = c;
//    res.iter = i;
//    return res;
//}
//int main() {
//    result res;
//    res =  bisection(3/2 * M_PI, 2 * M_PI, 0.001, fun1);
//    cout << res.zero_point << " " << res.iter << endl;
//    res =  bisection(0.5, 1.5, 0.001, fun2);
//    cout << res.zero_point << " " << res.iter << endl;
//    res =  bisection(1, 3, 0.001, fun3);
//    cout << res.zero_point << " " << res.iter << endl;
//
//    return 0;
//}