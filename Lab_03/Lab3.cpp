#include <iostream>
using namespace std;

int n = 111111, m = 22;

int NOD( int a, int b)
{
 if( a > b )
 {
  if( !b )
   return a;
  else
   return NOD(b, a%b);
 }
 else
 { 
   if( !a )
    return b;
   else
    return NOD(a, b%a);
 }

}

int main ()
{
// cin >> n >> m;
 cout << (NOD(n, m)+1) << endl;
 return 0;
}
