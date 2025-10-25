#include <iostream>
unsigned short siPyth(
long long a;
long long b;
long long c;);
int main() {
usning u_t =unsigned;
u_t a=0,b=0,c=0;
std::cin >> c >> b;

size_t count =0;
while (std::cin==a) {
count=isPyth(a,b,c)?1:0;
c=b
b=a
}
if (std::cin.eof()){
std::cout << count;
std::cout << "\n";
} else if (std::cin.fail()){
std::cerr << "Error\n";
} return 1;
}

isPyth(
unsigned a;
unsigned b;
unsigned c;);
#include <iostream>
int main() {
usning u_t =unsigned;
u_t a=0;
size_t count =0;
while (std::cin==a) {
count =a*a;
}
if (std::cin.eof()){
std::cout << count;
std::cout << "\n";
} else if (std::cin.fail()){
std::cerr << "Error\n";
} return 1;
#include <iostream>
bool siPyth(
unsigned a;
unsigned b;
unsigned c;);
int main() {
usning u_t =unsigned;
u_t a=0,b=0,c=0;
std::cin >> c >> b;
size_t count =0;
while (std::cin==a) {
count=isPyth(a,b,c)<2?1:0;
if (isPyth(a,b,c)==2){std::cerr <<""}
c=b
b=a
}
if (std::cin.eof()){
std::cout << count;
std::cout << "\n";
} else if (std::cin.fail()){
std::cerr << "Error\n";
} return 1;
}

unsigned short isPyth(
long long a;
long long b;
long long c;){
long long d=0;
unsigned short p1=0;
if (a>b) {d=a; a=b; b=d;}
if (b>c) {d=b; b=c; c=d;}
if (c>a) {d=c; c=a; a=d;}
if (b>0){
if ((ULONG_MAX/a>a)) {return 2}}
else if ((ULONG_MAX/b>b)&&(ULONG_MAX/c>c)) {if (ULONG_MAX-c*c<b*b){return 2}}
else (a>ULONG_MAX+b)
bool p =(a*a=b*b+c*c);
p=p||(b*b=a*a+c*c);
p=p||(c*c=b*b+a*a);
if (p) {p1=1}
return p1;
}
}
