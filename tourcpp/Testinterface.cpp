#include <iostream>
#include "interface.h"
using namespace std;
int main( )
{
IntCell m;
m.write( 5 );
cout << "Cell contents: " << m.read( ) << endl;
return 0;
}