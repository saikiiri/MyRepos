#include<iostream>
#include<string>

int main(void)
{
    std::string Imya; //Added string for name
    std::cout << "Enter your name:" << "\t";
    std::cin >> Imya;
    std::cout << "Hello world from @" << Imya << std::endl;

    return 0;
}
