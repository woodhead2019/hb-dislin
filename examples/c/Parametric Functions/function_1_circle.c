/*
 * Function 1 (Circle)
 */

#include "hbdislin.h"

float zfun( float u, float v, int iopt );

main()
{
   float pi = 3.1415926, step;

   winsiz( 600, 600 );
   page( 3000, 3000 );
   metafl( "png" );
   imgfmt( "rgb" );
   scrmod( "revers" );
   disini();
   pagera();
   hwfont();
   axspos( 150, 2950 );
   axslen( 2700, 2700 );

   linesp( 2.0 );
   titlin( "Surface Plot of the Parametric Function", 3 );
   titlin( "[sin (u) * cos (v), sin (u) * sin (v), cos (u)]", 4 );

   light( "on" );
   vkytit( -300 );
   nograf();
   graf3d( -1., 1., -1., 1., -1., 1., -1., 1., -1., 1., -1., 1. );
   height( 60 );
   title();

   clip3d( "none" );
   surmsh( "on" );

   surclr( 254, 100 );
   survis( "both" );
   shdmod( "off", "zscale" );
   matop3( 1.0, 0.0, 0.0, "diffuse" );
   setfce( "bottom" );
   matop3( 0.0, 1.0, 0.0, "diffuse" );

   shdmod( "smooth", "surface" );
   step = pi / 30.;
   surfcp( zfun, 0., pi, step, 0., 2 * pi - 0.5, step );
   disfin();
}

float zfun( float u, float v, int iopt )
{
   double w;

   if( iopt == 1 )
      w = sin( u ) * cos( v );
   else if( iopt == 2 )
      w = sin( u ) * sin( v );
   else
      w = cos( u );

  return ( float ) w;
}
