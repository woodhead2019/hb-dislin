@@ -1,58 +0,0 @@
/*
 *  Demonstration of CURVE
 */

#include "hbdislin.ch"

PROCEDURE Main()

   LOCAL n := 100, i, ic
   LOCAL fpi := 3.1415926 / 180.0, STEP, x
   LOCAL xray[ 100 ], y1ray[ 100 ], y2ray[ 100 ]

   STEP := 360.0 / ( n - 1 )

   FOR i := 1 TO n
      xray[ i ] := i * STEP
      x := xray[ i ] * fpi
      y1ray[ i ] := sin( x )
      y2ray[ i ] := cos( x )
   NEXT

   metafl( "cons" )
   scrmod( "revers" )
   disini()
   pagera()
   complx()
   axspos( 450, 1800 )
   axslen( 2200, 1200 )

   name( "X-axis", "x" )
   name( "Y-axis", "y" )

   labdig( - 1, "x" )
   ticks( 9, "x" )
   ticks( 10, "y" )

   titlin( "Demonstration of CURVE", 1 )
   titlin( "SIN(X), COS(X)", 3 )

   ic := intrgb( 0.95, 0.95, 0.95 )
   axsbgd( ic )

   graf( 0.0, 360.0, 0.0, 90.0, - 1.0, 1.0, - 1.0, 0.5 )
   setrgb( 0.7, 0.7, 0.7 )
   grid( 1, 1 )

   COLOR( "fore" )
   height( 50 )
   title()

   COLOR( "red" )
   curve( xray, y1ray, n )
   COLOR( "green" )
   curve( xray, y2ray, n )
   disfin()

   RETURN
