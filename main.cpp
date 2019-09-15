#include <iostream>
#include <algorithm>
#include <string>

//INTO THE VOID
/* void greet();
int main()
{
    greet();
    return 0;
}
void greet() {
    std::cout << "Hello Green Fox!" << std::endl;
}

//FUNCTIONS OF THE V O I D
void sayGreen();
void sayFox();
int main(int argc, char* args[])
{
    sayGreen();
    std::cout << "Hello from main()" << std::endl;
    return 0;
}
void sayGreen()
{
    std::cout << "Green ";
    sayFox();
    std::cout << "Hello from sayGreen()" << std::endl;
}
void sayFox()
{
    std::cout << "Fox" << std::endl;
    std::cout << "Hello from sayFox()" << std::endl;
} */

//DOUBLING
/*
void doubling(int&);
int main()
{
    int basenum = 123;
    doubling(basenum);
    std::cout << basenum << std::endl;
    return 0;
}
void doubling(int& basenum)
{
    int multiplier = 2;
    //FOR CUSTOM MULTIPLYING
    //std::cout << "Put in the number you want to multiply with:" << std::endl;
    //std::cin >> multiplier;
    basenum = basenum*multiplier;
} */

//GREET
/*
void greet(std::string);
int main()
{
    std::string al = "Green Fox";
    greet(al);
    return 0;
}
void greet(std::string al)
{
    std::cout << "Greetings, dear " << al << std::endl;
} */

//APPEND A
/*
void appendA(std::string&);
int main ()
{
    std::string typo = "Chinchill";
    appendA(typo);
    return 0;
}
void appendA(std::string& typo)
{
    std::cout<< typo << "a" << std::endl;
} */

//SUM
/*
void sum(int&);
int main ()
{
    int randnum;
    std::cout << "Please enter a number:" << std::endl;
    std::cin >> randnum;
    sum(randnum);
    return 0;
}
void sum(int& randnum)
{
    for (int i = 0; i <= randnum; ++i) {
        std::cout << i << std::endl;
    }
} */

//FACTORIAL
/*
int factorio(int);
int main ()
{
    int x;
    std::cout << "Please enter a number" << std::endl;
    std::cin >> x;
    std::cout << factorio(x) << std::endl;
    return 0;
}
int factorio(int x)
{
    if (x>1)
        return x * factorio(x-1);
    else
        return 1;
} */

//SWAP
/* void swap(int& a, int& b);
int main()
{
    int a = 15, b = 23;
    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;
}
void swap(int& a, int& b)
{
    std::swap(a, b);
} */
