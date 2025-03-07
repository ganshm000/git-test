#include<cstdio>
#include"func1.hpp"
#include"func2.hpp"

int main()
{
    func1();
    func2();

    printf("local change\n");

    return 0;
}