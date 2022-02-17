#include <iostream>

float count(int a, int b, int c, int d) {
    if (d == 0) {
        std::cout << "Division by 0 error" << std::endl;
        return 0;
    }

    return a * (b + (c / static_cast<float>(d)));
    //***************************************
    // There is another way to do this task
    //
    // return a * (b + (c / (d * 1.0f)));
    //***************************************
}

int main()
{
    extern int a;
    extern int b;
    extern int c;
    extern int d;

    std::cout << "result=";
    std::cout << count(a, b, c, d) << std::endl;
    return 0;
}
