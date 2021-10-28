#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <map>

/*
 * @file
 * @brief Implementation of the Composite Simpson Rule for the approximation
 *
 * @details The following is an implementation of the Composite Simpson Rule for the approximation of
 * definite integrals. More info -> wiki: https://en.wikipedia.org/wiki/Simpson%27s_rule#Composite_Simpson's_rule
 *
 * The idea is to split the interval in an EVEN number N of intervals and use as interpolation points the xi
 * for which it applies that xi = x0 + i*h, where h is a step defined as h = (b-a)/N where a and b are the
 * first and last points of the interval of the integration [a, b].
 *
 * We create a table of the xi and their corresponding f(xi) values and we evaluate the integral by the formula:
 * I = h/3 * {f(x0) + 4*f(x1) + 2*f(x2) + ... + 2*f(xN-2) + 4*f(xN-1) + f(xN)}
 *
 * That means that the first and last indexed i f(xi) are multiplied by 1,
 * the odd indexed f(xi) by 4 and the even by 2.
 *
 * In this program there are 4 sample test functions f, g, k, l that are evaluated in the same interval.
 *
 * Arguments can be passed as parameters from the command line argv[1] = N, argv[2] = a, argv[3] = b
 *
 * N must be even number and a<b.
 *
 * In the end of the main() i compare the program's result with the one from mathematical software with
 * 2 decimal points margin.
 *
 * Add sample function by replacing one of the f, g, k, l and the assert
 *
 * @author ggkogkou
 *
*/

double f(double x);
double g(double x);
double k(double x);
double l(double x);

double evaluate_by_simpson(int N, double h, double a, char func);

int main(int argc, char** argv){
    int N = 16; // Number of intervals to divide the integration interval. MUST BE EVEN
    double a = 1, b = 3; // Starting and ending point of the integration in the real axis
    double h; // Step, calculated by a, b and N

    // Get user input (by the command line parameters or the console after displaying messages)
    if(argc == 4){
        N = std::atoi(argv[1]);
        a = (double) std::atof(argv[2]);
        b = (double) std::atof(argv[3]);
        // Check if a<b else abort
        assert(a < b && "a has to be less than b");
        std::cout << "You selected N=" << N << ", a=" << a << ", b=" << b << std::endl;
    }
    else{
        do{
            std::cout << "Give [a, b] parameters as the integration's interval: \na = ";
            std::cin >> a;
            std::cout << "b = ";
            std::cin >> b;
        } while (a >= b);

        do{
            std::cout << "Choose an EVEN number of intervals to divide the [a, b]: ";
            std::cin >> N;
        } while(N<0 || N%2 != 0);
    }

    // Find the step
    h = (b-a)/N;

    // Call the functions and find the integral of each function

    double result_f = evaluate_by_simpson(N, h, a, 'f');
    std::cout << "The integral of f(x) is equal to: " << result_f << std::endl;

    double result_g = evaluate_by_simpson(N, h, a, 'g');
    std::cout << "The integral of g(x) is equal to: " << result_g << std::endl;

    double result_k = evaluate_by_simpson(N, h, a, 'k');
    std::cout << "The integral of k(x) is equal to: " << result_k << std::endl;

    double result_l = evaluate_by_simpson(N, h, a, 'l');
    std::cout << "The integral of l(x) is equal to: " << result_l << std::endl;

    // Test the results for [a, b] = [1, 3]
    if(a == 1 && b == 3 && N>=4){
        assert(result_f >= 4.09 && result_f <= 4.10 && "The result of f(x) is wrong");
        assert(result_g >= 0.27 && result_g <= 0.28 && "The result of f(x) is wrong");
        assert(result_k >= 9.06 && result_k <= 9.07 && "The result of f(x) is wrong");
        assert(result_l >= 7.16 && result_l <= 7.17 && "The result of f(x) is wrong");
    }

    return 0;
}

/*
 * @param N: number of intervals
 * @param h: step
 * @param a: x0
 * @param func: choose the function that will be evaluated
*/
double evaluate_by_simpson(int N, double h, double a, char func = 'f'){
    std::map<int, double> data_table; // Contains the data points. key: i, value: f(xi)
    double xi = a; // Initialize xi to the starting point x0 = a

    // Create the data table
    double temp;
    for(int i=0; i<=N; i++){
        if(func == 'f') temp = f(xi);
        else if(func == 'g') temp = g(xi);
        else if(func == 'k') temp = k(xi);
        else if(func == 'l') temp = l(xi);
        else{
            std::cout << "The function you requested doesn't exist.\n";
            std::exit(1);
        }
        data_table.insert(std::pair<int ,double>(i, temp)); // add i and f(xi)
        xi += h; // Get the next point xi for the next iteration
    }

    // Evaluate the integral.
    // Remember: f(x0) + 4*f(x1) + 2*f(x2) + ... + 2*f(xN-2) + 4*f(xN-1) + f(xN)
    double evaluate_integral = 0;
    for(int i=0; i<=N; i++){
        if(i == 0 || i == N) evaluate_integral += data_table.at(i);
        else if(i%2 == 1) evaluate_integral += 4 * data_table.at(i);
        else evaluate_integral += 2 * data_table.at(i);
    }

    // Multiply by the coefficient h/3
    evaluate_integral *= h/3;

    // If the result calculated is nan, then the user has given wrong input interval.
    assert(!std::isnan(evaluate_integral) && "The definite integral can't be evaluated. Check the validity of your input.\n");
    // Else return
    return evaluate_integral;
}

/*
------------ Test sample functions below ----------------------------
*/

// Sample function f(x) = sqrt(x) + log(x)
double f(double x){
    return std::sqrt(x) + std::log(x);
}

// Sample function g(x) = e^-x * (4 - x^2)
double g(double x){
    return std::exp(-x) * (4 - std::pow(x, 2));
}

// Sample function k(x) = sqrt(2x^3+3)
double k(double x){
    return std::sqrt(2*std::pow(x, 3)+3);
}

// Sample function l(x) = x+ln(2x+1)
double l(double x){
    return x + std::log(2*x+1);
}