#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;   // pure virtual function
};
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle";
    }
};

int main() {
    Circle c;
    c.draw();
}
