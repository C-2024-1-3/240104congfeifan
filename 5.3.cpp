#include <iostream>
using namespace std;
class Cub
{
private:
    double length, width, height;
public :
    void printV()
    {
        cout << length * width * height << endl;
    }
    Cub(double length, double width, double height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }
};

int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    Cub a = Cub(x,y,z);
    cin >> x >> y >> z;
    Cub b = Cub(x, y, z);
    cin >> x >> y >> z;
    Cub c = Cub(x, y, z);
    a.printV();
    b.printV();
    c.printV();
}
