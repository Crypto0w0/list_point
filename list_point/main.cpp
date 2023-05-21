#include <iostream>
#include <list>
using namespace std;

class Point{
    int x;
    int y;
public:
    Point(){
        x = 0;
        y = 0;
    }
    Point (int x, int y){
        this->x = x;
        this->y = y;
    }
    int GetX() const{
        return x;
    }
    int GetY() const{
        return y;
    }
    friend ostream& operator<<(ostream& o, const Point& p){
        o << p.GetX() << ", " << p.GetY() << endl;
        return o;
    }
};

int main() {
    list<Point> l;
    Point p1(0, 0);
    Point p2(1, 1);
    Point p3(2, 2);
    Point p4(3, 3);
    Point p5(4, 4);
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);
    for (auto i = l.begin(); i != l.end(); ++i){
        cout << *i;
    }
}
