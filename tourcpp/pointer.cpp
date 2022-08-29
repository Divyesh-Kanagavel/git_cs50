#include <iostream>
#include "interface.h"
using namespace std;

int main(){
    IntCell* m;
    m = new IntCell{0};
    m->write(5);
    cout << "Cell content: " << m->read() << endl;

    delete m;
    return 0;

}