// 2.3.cpp
// Define two namespaces: Square and Cube. In both the namespaces, define an integer variable named "num" and a function named "fun". The "fun" function in "Square" namespace, should return the square of an integer passed as an argument while the "fun" function in "Cube" namespace, should return the cube of an integer passed as an argument. In the main function, set the integer variables "num" of both the namespaces with different values. Then, compute and print the cube of the integer variable "num" of the "Square" namespace using the "fun" function of the "Cube" namespace and the square of the integer variable "num" of the "Cube" namespace using the "fun" function of the "Square" namespace.
#include <iostream>
using namespace std;
namespace square
{
    int num;
    int fun(int x)
    {
        return x * x;
    }
}
namespace cube
{
    int num;
    int fun(int x)
    {
        return x * x * x;
    }
}
int main()
{
    square ::num = 2;
    cube ::num = 3;
    int cube_of_squarenum = cube::fun(square::num);
    int square_of_cubenum = square::fun(cube::num);
    cout << "The cube of square num is" << cube_of_squarenum << endl;
    cout << "The square of cube num is" << square_of_cubenum << endl;
    return 0;
}