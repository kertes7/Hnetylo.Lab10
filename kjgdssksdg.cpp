#include <iostream> 

#include <regex> 

#include <string> 

#include <Windows.h> 

  

int main() { 

    SetConsoleCP(1251); 

    SetConsoleOutputCP(1251); 

    std::string text = "Ось номери: +38(067)173-15-97, +38(050)725-91-74 та +38(063)849-58-23."; 

    std::regex phoneRegex(R"(\+38\(\d{3}\)\d{3}-\d{2}-\d{2})"); 

  

    auto numbers_begin = std::sregex_iterator(text.begin(), text.end(), phoneRegex); 

    auto numbers_end = std::sregex_iterator(); 

  

    for (std::sregex_iterator i = numbers_begin; i != numbers_end; ++i) { 

        std::cout << "Знайдено номер: " << i->str() << std::endl; 

    } 

  

    return 0; 

} 
