#include <iostream>
#include <climits>
unsigned short isPyth(
size_t a=0,
size_t b=0,
size_t c=0);
int main() 
{
    size_t a=0,b=0,c=0, count=0;
    std::cin >> c >> b;
    size_t count =0;

    while (!((std::cin.eof())||(std::cin.fail()))) { //Учел ваще предложение о том, чтобы поместить отслеживание ошибок в условие цикла
        std::cin >> a;
        if (isPyth(a,b,c)==1) {count++}
        else if (isPyth(a,b,c)==2) {return 2;}
        c=b;
        b=a;
    }

    if (std::cin.eof()){
        std::cout << count;
        std::cout << "\n";
    } 
    else if (std::cin.fail()){
    std::cerr << "Error\n"; }
    return 1;
}

unsigned short isPyth(
size_t a,
size_t b,
size_t c){
    size_t d=0;
    unsigned short p1=0;
    bool p;

    if (a>b) {d=a; a=b; b=d;}
    if (b>c) {d=b; b=c; c=d;}
    if (c>a) {d=c; c=a; a=d;}

    if ((ULONG_MAX/a>a)) {return 2;}
    if ((a==0)||(b==0)||(c==0)) {return 0;}
                                             //Я убрал проверки связанные с целыми тк как их проверки не соответствую условию
    bool p =(a*a==b*b+c*c);                 // задачи. Стороны не могут быть отрицательными
    p=p||(b*b==a*a+c*c);
    p=p||(c*c==b*b+a*a);
    if (p) {p1=1;}
    return p1;                              //Прощу прощения за то что костыльно не как вы показывали устроил вывод функции
                                            // Было в лом, обещаю принести безсахарную кока колу за это
}


