#include <iostream>
using namespace std;
class imaginary
{
private:
    int real;
    int imaginary;

public:
    void put_real(int r)
    {
        real = r;
    }
    void put_imaginary(int im)
    {
        imaginary = im;
    }
    void display(int real, int imaginary)
    {
        cout << real << "+" << imaginary << "i";
    }
};
int main()
{
    int r, im;
    imaginary obj;
    cin >> r >> im;
    obj.put_real(r);
    obj.put_imaginary(im);
    obj.display(r, im);
}
