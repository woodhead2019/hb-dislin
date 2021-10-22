/*
 * Shading Patterns
 */

#include "hbdislin.h"

int main()
{
   int ixp[ 4 ], iyp[ 4 ], nl, nx, nx0 = 335, ny0 = 350, ny, i, j, ii, k, iclr;
   int ix[ 4 ] = { 0, 300, 300, 0 }, iy[ 4 ] = { 0, 0, 400, 400 };
   char *ctit = "Shading Patterns (AREAF)", cstr[ 80 ];

   scrmod( "revers" );
   metafl( "cons" );
   disini();
   pagera();
   complx();
   setvlt( "small" );

   height( 50 );
   nl = nlmess( ctit );
   nx = ( 2970 - nl ) / 2;
   messag( ctit, nx, 200 );

   iclr = 0;
   for( i = 0; i < 3; i++ )
   {
      ny = ny0 + i * 600;
      for( j = 0; j < 6; j++ )
      {
         nx = nx0 + j * 400;
         ii = i * 6 + j;
         nl = intcha( ii, cstr );
         shdpat( ii );

         iclr = iclr % 16;
         iclr++;
         setclr( iclr );

         for( k = 0; k < 4; k++ )
         {
            ixp[ k ] = ix[ k ] + nx;
            iyp[ k ] = iy[ k ] + ny;
         }

      areaf( ixp, iyp, 4 );

      nl = nlmess( cstr );
      nx += ( 300 - nl ) / 2;
      messag( cstr, nx, ny + 460 );
      }
   }
   disfin();
   return 0;
}
