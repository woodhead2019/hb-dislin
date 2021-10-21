/*
 * Symbols
 */

#include "hbdislin.h"

int main()
{
   int nl, ny, i, nxp;
   char ctit[] = "Symbols", cstr[ 80 ];

   scrmod( "revers" );
   setpag( "da4p" );
   metafl( "cons" );
   disini();
   pagera();
   complx();

   height( 60 );
   nl = nlmess( ctit );
   messag( ctit, ( 2100 - nl ) / 2, 200 );

   height( 50 );
   hsymbl( 120 );

   ny = 150;

   for( i = 0; i < 24; i++ )
   {
      if( ( i % 4 ) == 0 )
      {
         ny += 400;
         nxp = 550;
      }
      else
      {
         nxp += 350;
      }

      nl = intcha( i, cstr );
      nl = nlmess( cstr ) / 2;
      messag( cstr, nxp - nl, ny + 150 );
      symbol( i, nxp, ny );
   }

   disfin();

   return 0;
}
