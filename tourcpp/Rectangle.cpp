#include <iostream>
#include <vector>
using namespace std;

class Rectangle{

    public:
    Rectangle(double l, double w) : length{l}, width{w} {}

    double getLength() const {
        return length;
    }

    double getWidth() const{
        return width;
    }








    private:
    double length;
    double width;
};

template <typename Comparator>
const Rectangle& findMax(const vector<Rectangle>& arr, Comparator cmp){
    int maxIndex = 0;

    for(int i=0;i<arr.size();++i){
        if(cmp.isGreaterThan(arr[maxIndex],arr[i]))
        maxIndex = i;
    }

    return arr[maxIndex];
}

class PerimeterCompare{
public:
bool isGreaterThan(const Rectangle& r1, const Rectangle& r2) const 
{
    double p1 = 2*(r1.getLength()+r1.getWidth());
    double p2 = 2*(r2.getLength()+r2.getWidth());

    return p1 < p2 ;
}
};

class AreaCompare{
    public:
    bool isGreaterThan(const Rectangle& r1, const Rectangle& r2) const 
    {
        double a1 = r1.getLength()*r1.getWidth();
        double a2 = r2.getLength()*r2.getWidth();

        return a1<a2;
    }
};






int main(){

    vector<Rectangle> a = {Rectangle(4.08,2.56), Rectangle(5.67,9.08), Rectangle(3.15,12.07)};

    const Rectangle& maxperimeter = findMax(a, PerimeterCompare{});
    const Rectangle& maxarea = findMax(a, AreaCompare{});

    cout << "The rectange with maximum area has area of " << maxarea.getLength()*maxarea.getWidth() << endl;
    cout << "The rectangle with maximum perimeter has perimeter of " << 2*(maxperimeter.getLength()+maxperimeter.getWidth()) << endl;

    return 0;
}