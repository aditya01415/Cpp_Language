
#include<iostream>
using namespace std;

class A {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    // Constructor
    A() {
        privateVar = 10;
        protectedVar = 20;
        publicVar = 30;
    }

    // Accessor functions
    int getPrivate() { return privateVar; }
    int getProtected() { return protectedVar; }
    int getPublic() { return publicVar; }
};

class B : public A {
    // Inherited publicly
};

class C : protected A {
    // Inherited protectedly
public:
    void display() {
        cout << "Protected Var: " << getProtected() << endl;
        cout << "Public Var: " << getPublic() << endl;
    }
};
class D : private A {
    // Inherited privately
public:
    void display() {
        cout << "Protected Var: " << getProtected() << endl;
        cout << "Public Var: " << getPublic() << endl;
    }
};

int main() {
    B b;
    cout << "Class B: " << b.getPublic() << endl;

    C c;
    c.display();

    D d;
    d.display();

    return 0;
}
