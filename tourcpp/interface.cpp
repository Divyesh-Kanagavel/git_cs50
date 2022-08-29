#include "interface.h"
/**
* Construct the IntCell with initialValue
*/
IntCell::IntCell( int initialValue ) : storedValue{ initialValue }   // default parameters are written in interface only , not in implementation
{
}
/**
* Return the stored value.
*/
int IntCell::read( ) const
{
return storedValue;
}
/**
* Store x.
*/
void IntCell::write( int x )
{
storedValue = x;
}