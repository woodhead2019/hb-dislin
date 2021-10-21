/* Symbols
 *
 */

#include "hbdislin.ch"

PROCEDURE Main()

   LOCAL nl, ny, i, nxp
   LOCAL ctit := "Symbols", cstr := ""

   scrmod( "revers" )
   setpag( "da4p" )
   metafl( "cons" )
   disini()
   pagera()
   complx()

   height( 60 )
   nl := nlmess( ctit )
   messag( ctit, int( ( 2100 - nl ) / 2 ), 200 )

   height( 50 )
   hsymbl( 120 )

   ny := 150

   FOR i := 0 TO 24

      IF ( i % 4 ) == 0
         ny += 400
         nxp := 550
      ELSE
         nxp += 350
      ENDIF

      nl := Int( nlmess( cstr ) / 2 )
      messag( cstr, nxp - nl, ny + 150 )
      symbol( i, nxp, ny )

   NEXT

   disfin()

   RETURN