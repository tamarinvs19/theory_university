#include <iostream>
using namespace std;

struct Base {
    virtual void f() {
	cout << "Base::f" << endl;
    }
};
struct Derived: public Base {
    void f() final {
	cout << "Derived::f" << endl;
    }
};

int main()
{
    struct Derived d;
    d.f();
    return 0;
}
