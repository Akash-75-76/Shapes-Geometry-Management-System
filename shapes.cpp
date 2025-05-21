#include <iostream>
#include <math.h>
using namespace std;
int n;
class Area
{
protected:
    float area;
};
class Diameter
{
protected:
    float diameter;
};
class Circumference
{
protected:
    float circumference;
};
class Perimeter
{
protected:
    float perimeter;
};
class Surface_area
{
protected:
    float surface_area;
};
class Volume
{
protected:
    float volume;
};
class Circle : public Area, public Diameter, public Circumference
{
protected:
    float radius;

public:
    void circle()
    {
        while (1)
        {
            if (n == 4)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!Geometry of circle!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nDiameter       :1";
                cout << "\nArea           :2";
                cout << "\nCircumference  :3";
                cout << "\nBack to main   :4";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\nEnter radius of circle:";
                    cin >> radius;
                    diameter = (2 * radius);
                    cout << "\n=============================";
                    cout << "\nDiameter of circle      :" << diameter << "cm";
                    cout << "\n=============================\n";
                    break;
                case 2:
                    cout << "\nEnter radius of circle:";
                    cin >> radius;
                    area = (3.14 * radius * radius);
                    cout << "\n=============================";
                    cout << "\nArea of circle           :" << area << "sqcm";
                    cout << "\n=============================\n";
                    break;
                case 3:
                    cout << "\nEnter radius of circle:";
                    cin >> radius;
                    circumference = (2 * 3.14 * radius);
                    cout << "\n=============================";
                    cout << "\nCircumference of circle  :" << circumference;
                    cout << "\n=============================\n";
                    break;
                case 4:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Rectangle : public Area, public Perimeter
{
protected:
    int length, breadth;

public:
    void rectangle()
    {
        while (1)
        {
            if (n == 3)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of rectangle!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nArea           :1";
                cout << "\nPerimeter      :2";
                cout << "\nBack to main   :3";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\nEnter length and breadth of rectangle:";
                    cin >> length >> breadth;
                    area = (length * breadth);
                    cout << "\n=============================";
                    cout << "\nArea of  rectangle       :" << area << "sqcm";
                    cout << "\n=============================\n";
                    break;
                case 2:
                    cout << "\nEnter length and breadth of rectangle:";
                    cin >> length >> breadth;
                    perimeter = (2 * length + 2 * breadth);
                    cout << "\n=============================";
                    cout << "\nPerimeter of rectangle   :" << perimeter << "cm";
                    cout << "\n=============================\n";
                    break;
                case 3:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Triangle : public Area, public Perimeter
{
protected:
    float side;
    float base, height;
    float sidea, sideb, sidec;

public:
    void triangle()
    {
        while (1)
        {
            if (n == 5)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of triangle!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nTriangle                   :No";
                cout << "\n==============================";
                cout << "\nRight Angle triangle       :1";
                cout << "\nEquilateral triangle       :2";
                cout << "\nObtuse Angle triangle      :3";
                cout << "\nIsosceles triangle         :4";
                cout << "\nBack to main               :5";
                cout << "\n=============================";
                cout << "\nEnter your choice          :";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\n***Right Angle Triangle***";
                    cout << "\nEnter base and height for Area   :";
                    cin >> base >> height;
                    area = (float)(0.5 * base * height);

                    cout << "\n=====================================";
                    cout << "\nArea of triangle          :" << area << "sqcm";
                    cout << "\n=============================\n";
                    break;
                case 2:
                    cout << "\n***Equilateral Triangle***";
                    cout << "\nEnter side for Area   :";
                    cin >> side;
                    area = sqrt(0.75) * side * side;
                    perimeter = side + side + side;

                    cout << "\n=====================================";
                    cout << "\nArea of triangle           :" << area << "sqcm";
                    cout << "\nPerimeter of triangle      :" << perimeter << "cm";
                    cout << "\n=============================\n";
                    break;
                case 3:
                    cout << "\n**Obtuse Angle Triangle***";
                    cout << "\nEnter base and height for area   :";
                    cin >> base >> height;
                    area = (float)(0.5 * base * height);

                    cout << "\n=====================================";
                    cout << "\nArea of triangle                    :" << area << "sqcm";

                    cout << "\n=====================================\n";
                    cout << "\n\nEnter sidea,sideb,sidec for Perimeter:";
                    cin >> sidea >> sideb >> sidec;
                    perimeter = (sidea + sideb + sidec);

                    cout << "\n=====================================";
                    cout << "\nPeimeter of triangle:      " << perimeter << "cm";

                    cout << "\n====================================\n";
                    break;
                case 4:
                    cout << "\n***Isosceles Triangle***";
                    cout << "\nEnter base and height for Area   :";
                    cin >> base >> height;
                    area = (float)(0.5 * base * height);

                    cout << "\n=====================================";
                    cout << "\nArea of triangle                    :" << area << "sqcm";

                    cout << "\n====================================\n";
                    cout << "\n\nEnter sidea,sideb,sidec for Perimeter:";
                    cin >> sidea >> sideb >> sidec;
                    perimeter = (sidea + sideb + sidec);

                    cout << "\n=====================================";
                    cout << "\nPeimeter of triangle:      " << perimeter << "cm";

                    cout << "\n====================================\n";
                    break;
                case 5:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Square : public Area, public Perimeter
{
protected:
    int side;

public:
    void square()
    {
        while (1)
        {
            if (n == 3)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of square!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nArea           :1";
                cout << "\nPerimeter      :2";
                cout << "\nBack to main   :3";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\nEnter side of square    :";
                    cin >> side;
                    area = (side * side);

                    cout << "\n=====================================";
                    cout << "\nArea of square          :" << area << "sqcm";

                    cout << "\n=====================================\n";
                    break;
                case 2:
                    cout << "\nEnter side of square    :";
                    cin >> side;
                    perimeter = (4 * side);

                    cout << "\n=====================================";
                    cout << "\nPerimeter of square      :" << perimeter << "cm";

                    cout << "\n=====================================\n";
                    break;
                case 3:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Rhombus : public Area, public Perimeter
{
protected:
    float side, diagonal1, diagonal2;

public:
    void rhombus()
    {
        while (1)
        {
            if (n == 3)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of rhombus!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nArea           :1";
                cout << "\nPerimeter      :2";
                cout << "\nBack to main   :3";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                cout << "\n====================";
                switch (n)
                {
                case 1:
                    cout << "\nEnter diagonal1 & diagonal2     :";
                    cin >> diagonal1 >> diagonal2;
                    area = (0.5 * diagonal1 * diagonal2);

                    cout << "\n=====================================";
                    cout << "\nArea of rhombus                 :" << area << "sqcm";

                    cout << "\n=====================================\n";
                    break;
                case 2:
                    cout << "\nEnter side of rhombus           :";
                    cin >> side;
                    perimeter = (4 * side);

                    cout << "\n=====================================";
                    cout << "\nPerimeter of rhombus : " << perimeter << " cm ";

                    cout
                        << "\n=====================================\n";
                    break;
                case 3:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Parallelogram : public Area, public Perimeter
{
protected:
    int side, base, height;

public:
    void parallelogram()
    {
        while (1)
        {
            if (n == 3)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of parallelogram!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nArea           :1";
                cout << "\nPerimeter      :2";
                cout << "\nBack to main   :3";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\Enter base and height        :";
                    cin >> base >> height;
                    area = (base * height);

                    cout << "\n=====================================";
                    cout << "\nArea of parallelogram       :" << area << "sqcm";

                    cout << "\n=====================================\n";
                    break;
                case 2:
                    cout << "\nEnter base and side         :";
                    cin >> base >> side;
                    perimeter = 2 * (base + side);

                    cout << "\n=====================================";
                    cout << "\nPerimeter of parallelogram  :" << perimeter << "cm";

                    cout << "\n=====================================\n";
                    break;
                case 3:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Cube : public Surface_area, public Volume
{
protected:
    int side;

public:
    void cube()
    {
        while (1)
        {
            if (n == 3)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of cube!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nSurface Area   :1";
                cout << "\nVolume         :2";
                cout << "\nBack to main   :3";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\nEnter side of cube       :";
                    cin >> side;
                    surface_area = (6 * side * side);
                    cout << "\n==================================";
                    cout << "\nSurface Area of cube    : " << surface_area << " sqcm ";

                    cout
                        << "\n==================================\n";
                    break;
                case 2:
                    cout << "\nEnter side of cube      :";
                    cin >> side;
                    volume = (side * side * side);
                    cout << "\n==================================";
                    cout << "\nVolume of cube            :" << volume << "cucm";
                    cout << "\n=================================\n";
                    break;
                case 3:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Cuboid : public Surface_area, public Volume
{
protected:
    int length, breadth, height;

public:
    void cuboid()
    {
        while (1)
        {
            if (n == 3)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of cuboid!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nSurface Area   :1";
                cout << "\nVolume         :2";
                cout << "\nBack to main   :3";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\nEnter length,breadth & height of cuboid :";
                    cin >> length >> breadth >> height;

                    surface_area = (2 * (length * breadth + length * height + breadth * height));

                    cout << "\n===============================================";
                    cout << "\nSurface area of cuboid  : "<<surface_area<<" sqcm "; 

                          cout
                         << "\n==============================================\n";
                    break;
                case 2:
                    cout << "\nEnter length,breadth & height of cuboid :";
                    cin >> length >> breadth >> height;
                    volume = (length * breadth * height);

                    cout << "\n===============================================";
                    cout << "\nVolume of cuboid    : "<<volume<<" cucm "; 

                          cout
                         << "\n==============================================\n";
                    break;
                case 3:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Sphere : public Area, public Volume
{
protected:
    float radius, height;

public:
    void sphere()
    {
        while (1)
        {
            if (n == 3)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of sphere!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nArea           :1";
                cout << "\nVolume         :2";
                cout << "\nBack to main   :3";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\nEnter radius of sphere      :";
                    cin >> radius;
                    area = (4 * 3.14 * radius * radius);
                    cout << "\n===============================";
                    cout << "\nArea of sphere              :" << area << "sqcm";
                    cout << "\n==============================\n";
                    break;
                case 2:
                    cout << "\nEnter radius of sphere      :";
                    cin >> radius;
                    volume = (1.33 * 3.14 * radius * radius * height);
                    cout << "\n================================";
                    cout << "\nVolume of sphere            :" << volume << "cucm";
                    cout << "\n================================\n";
                    break;
                case 3:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Cone : public Surface_area, public Volume
{
protected:
    float radius, height;

public:
    void cone()
    {
        while (1)
        {
            if (n == 3)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of cone!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nSurface Area   :1";
                cout << "\nVolume         :2";
                cout << "\nBack to main   :3";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\nEnter radius & height of cone   :";
                    cin >> radius >> height;

                    surface_area = (3.14 * radius * (radius + sqrt(height * height + radius * radius)));
                    cout << "\n===================================";
                    cout << "\nSurface Area of cone       : "<<surface_area<<" sqcm "; 

                          cout
                         << "\n==================================\n";
                    break;
                case 2:
                    cout << "\nEnter radius & height of cone   :";
                    cin >> radius >> height;
                    volume = (0.33 * 3.14 * radius * radius * height);

                    cout << "\n====================================";
                    cout << "\nVolume of cone                  :" << volume << "cucm";

                    cout << "\n===================================\n";
                    break;
                case 3:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
class Cylinder : public Surface_area, public Volume
{
protected:
    float radius, height;

public:
    void cylinder()
    {
        while (1)
        {
            if (n == 3)
            {
                break;
            }
            else
            {
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\n!!!Geometry of cylinder!!!";
                cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!";
                cout << "\nOperation      :No";
                cout << "\n====================";
                cout << "\nSurface Area   :1";
                cout << "\nVolume         :2";
                cout << "\nBack to main   :3";
                cout << "\n====================";
                cout << "\nEnter your choice:";
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "\nEnter radius & height of cylinder   :";
                    cin >> radius >> height;
                    surface_area = 2 * 3.14 * radius * (height + radius);
                    cout << "\n========================================";
                    cout << "\nTotal surface area of cylinder    : "<<surface_area<<" sqcm "; 
                          cout
                         << "\n======================================\n";
                    break;
                case 2:
                    cout << "\nEnter radius & height of cylinder   :";
                    cin >> radius >> height;
                    volume = (3.14 * radius * radius * height);
                    cout << "\n=========================================";
                    cout << "\nVolume of cylinder                  :" << volume << "cucm";
                    cout << "\n=======================================\n";
                    break;
                case 3:
                    break;
                default:
                    cout << "\n!!Invalid opction!!";
                    break;
                }
            }
        }
    }
};
int main()
{
    Circle c;
    Rectangle r;
    Triangle t;
    Square s;
    Rhombus rh;
    Parallelogram p;
    Cube cub;
    Cuboid cu;
    Sphere sp;
    Cone co;
    Cylinder cy;
    while (1)
    {
        if (n == 12)
        {
            cout << "\n*****************************";
            cout << "\n********CODE BY SKY********";
            cout << "\n*****************************";
            break;
        }
        else
        {
            cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
            cout << "\n!!!!!!!Geometric Operations!!!!!!!";
            cout << "\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
            cout << "\n\nCircle         :1";
            cout << "\nRectangle      :2";
            cout << "\nTriangle       :3";
            cout << "\nSquare         :4";
            cout << "\nRhombus        :5";
            cout << "\nParallelogram  :6";
            cout << "\nCube           :7";
            cout << "\nCuboid         :8";
            cout << "\nSphere         :9";
            cout << "\nCone           :10";
            cout << "\nCylinder       :11";
            cout << "\nExit           :12";
            cout << "\n***************************";
            cout << "\n***************************";
            cout << "\nEnter your choice:";
            cin >> n;
            switch (n)
            {
            case 1:
                c.circle();
                break;
            case 2:
                r.rectangle();
                break;
            case 3:
                t.triangle();
                break;
            case 4:
                s.square();
                break;
            case 5:
                rh.rhombus();
                break;
            case 6:
                p.parallelogram();
                break;
            case 7:
                cub.cube();
                break;
            case 8:
                cu.cuboid();
                break;
            case 9:
                sp.sphere();
                break;
            case 10:
                co.cone();
                break;
            case 11:
                cy.cylinder();
                break;
            case 12:
                break;
            default:
                cout << "\n!!!Enter Valid Opction!!!";
                break;
            }
        }
    }
    return 0;
}
