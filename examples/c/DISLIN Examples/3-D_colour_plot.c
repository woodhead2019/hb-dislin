/*
 * 3-D Colour Plot
 */

#include "hbdislin.h"

float zmat[ 100 ][ 100 ];

int main()
{
   int n = 100, i, j;
   double fpi = 3.1415927 / 180.0, step, x, y;

   step = 360.0 / ( n - 1 );
   for( i = 0; i < n; i++ )
   {
      x = i * step;
      for( j = 0; j < n; j++ )
      {
         y = j * step;
         zmat[ i ][ j ] = ( float ) ( 2 * sin ( x * fpi ) *sin ( y * fpi ) );
      }
   }

   scrmod( "revers" );
   metafl( "cons" );
   disini();
   pagera();
   hwfont();

   titlin( "3-D Colour Plot of the Function", 2 );
   titlin( "F(X,Y) = 2 * SIN(X) * SIN(Y)", 4 );

   name( "X-axis", "x" );
   name( "Y-axis", "y" );
   name( "Z-axis", "z" );

   intax();
   autres( n, n );
   axspos( 300, 1850 );
   ax3len( 2200, 1400, 1400 );

   graf3( 0.0, 360.0, 0.0, 90.0, 0.0, 360.0, 0.0, 90.0, -2.0, 2.0, -2.0, 1.0 );
   crvmat( ( float * ) zmat, n, n, 1, 1 );

   height( 50 );
   title();
   disfin();
   return 0;
}
