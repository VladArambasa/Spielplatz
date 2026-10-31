/**    un prgrm care sa calculeze nr de
    aparitii a nr div cu 2 intr un sir     **/
#include <iostream>
using namespace std;
int c;
int main()
{
    int n,v;
    cout<<"n= "; cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        if(v%2==0)
            c++;
    }
    cout<<c;
}
