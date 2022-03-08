#include <iostream>

using namespace std;

class A{
public:
    int x;
};

class B{
protected:
    int y;
};

class C{
private:
    int z;
public:
    void setZ(int z){
        this->z = z;
    }
    void getZ(){
        cout << z << endl;
    }

};

class D:public A,public B,public C{
public:
    D() {
        y=5;
    }
    void getY(){
        cout << y << endl;
    }
};

int main()
{
    D d1;

    d1.getY();

    d1.setZ(100);

    d1.getZ();

    return 0;
}
