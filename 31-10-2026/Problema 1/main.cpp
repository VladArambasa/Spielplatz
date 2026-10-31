/**o functie care sa verifice daca 3 numere sunt numere pitagoreice**/
#include <iostream>
using namespace std;
int numere(int a, int b, int c);
int main()
{
    int a,b,c;
    cout<<"a= "; cin>>a;
    cout<<"b= "; cin>>b;
    cout<<"c= "; cin>>c;
    cout<<numere(a, b, c);
}
int numere (int a, int b, int c)
{
    return(a*a + b*b == c*c) or (a*a + c*c == b*b) or (b*b + c*c == a*a);
}
