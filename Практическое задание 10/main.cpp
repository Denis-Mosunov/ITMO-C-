#include <iostream>
#include "Dot.h"
#include "TriangleComposition.h"
#include "TriangleAgregation.h"

int main()
{
    Dot p[3];
    int x, y;
    
    for( int i = 0; i < 3; i++ )
    {
        cout << "Enter the x, y value for point number " << i + 1 << " \n";
        cin >> x;
        cin >> y;
        p[i].setXY(x, y);
    }

    try
    {
        TriangleComposition tComp(p[0], p[1], p[2]);
        //--.
        TriangleAgregation tAgr(p[0], p[1], p[2]);

        
        cout.precision(5);

        cout << "TriangleComposition: \n";
        cout << "- the perimeter of the triangle is : " << tComp.getPerimetr() << " \n";
        cout << "- the area of the triangle is : " << tComp.getSquare() << " \n";
      
        cout << "TriangleAgregation: \n";
        cout << "- the perimeter of the triangle is : " << tAgr.getPerimetr() << " \n";
        cout << "- the area of the triangle is : " << tAgr.getSquare() << " \n";
    }
    catch (ExValidTriangle& error)
    {
        cout << "ERROR: ";
        error.printMessage();
        return 1;
    }

    return 0;
}
