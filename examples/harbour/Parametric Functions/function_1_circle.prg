/*
 * Function 1 (Circle)
 */

#include "hbdislin.ch"

PROCEDURE Main()

   LOCAL pi := 3.1415926, nStep

   winsiz( 600, 600 )
   page(3000, 3000)
   metafl( "png" )
   imgfmt( "rgb" )
   scrmod( "revers" )
   disini()
   pagera()
   hwfont()
   axspos( 150, 2950 )
   axslen( 2700, 2700 )

   linesp( 2.0 )
   titlin( "Surface Plot of the Parametric Function", 3 )
   titlin( "[sin (u) * cos (v), sin (u) * sin (v), cos (u)]", 4 )

   light( "on" )
   vkytit( -300 )
   nograf()
   graf3d( -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0, -1.0, 1.0 )
   height( 60 )
   title()

   clip3d( "none" )
   surmsh( "on" )

   surclr( 254, 100 )
   survis( "both" )
   shdmod( "off", "zscale" )
   matop3( 1.0, 0.0, 0.0, "diffuse" )
   setfce( "bottom" )
   matop3( 0.0, 1.0, 0.0, "diffuse" )

   shdmod("smooth", "surface")
   nStep := pi / 30.0
   surfcp( zfun(), 0.0, pi, nStep, 0.0, 2 * pi - 0.5, nStep )
   disfin()

   RETURN

STATIC FUNCTION zfun( u, v, iopt )

   LOCAL w

   if iopt == 1
      w := sin( u ) * cos( v )
   elseif iopt == 2
      w := sin( u ) * sin( v )
   else
      w := cos( u )
   ENDIF

  return w
