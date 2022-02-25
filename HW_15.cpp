#include <iostream>

void fun(int a, int n) {
    if (a % 2 == 0) {

        std::cout << "even" << std::endl;

        for (int i = 0; i < n; i++) {

            if (i % 2 == 0) std::cout << i;

        }
    }
    else {

        std::cout << "odd" << std::endl;

        for (int i = 0; i < n; i++) {

            if (i % 2 != 0) std::cout << i;

        }
    }
};

int main()
{
    int N, a;

    std::cout << "Input N: ";
    std::cin >> N;

    for (int i = 0; i < N; i++) {

        if (i % 2 == 0) std::cout << i << " ";
        
    }
    
    std::cout << std::endl;

    std::cout << "Input a: ";
    std::cin >> a;
    std::cout << "Call function..." << std::endl;

    fun(a, N);

    return 0;
}
