# hb-dislin

**Harbour** bindings for [**DISLIN**](https://www.mps.mpg.de/dislin), is a high level library of subroutines and functions that display data graphically. It is intended to be a powerful and easy to use software package for programmers and scientists that does not require knowledge of hardware features. DISLIN can display graphic information directly on graphic terminals or store them in metafiles. The supported display types are VGA, X Windows, Windows API and OpenGL. The supported file formats are GKSLIN, CGM, HPGL, PostScript, PDF, WMF, SVG, PNG, BMP, PPM, GIF and TIFF. DISLIN metafiles can either be printed on various devices using the DISLIN driver program DISDRV or imported into third party products such as TeX and MS Word. The project has an educational nature - the main goal is to expand knowledge in the field of creating the aplications with the usege of Harbour programing language.

### The library contains the following features:

- 9 software fonts where each font provides 6 alphabets. PostScript fonts for PostScript, PDF and SVG output, X11 fonts for X terminals and TrueType fonts for
  Windows displays and WMF files can also be used.The different aphabets contain Roman, Greek, Russian, mathematical and special European characters. TeX instructions can be used for plotting mathematical formulas.
- Plotting of two- and three-dimensional axis systems. Axes can be linearly or logarithmically scaled and labeled with linear, logarithmic, time, date, map and
  user-defined formats.
- Plotting of curves. Several curves can appear in one axis system and can be differentiated by colour, line style and pattern. Multiple axis system can be
  displayed on a page.
- Plotting of legends.
- Elementary plot routines for lines, vectors and outlined or filled regions such as rectangles, circles, arcs, ellipses and polygons.
- Shielded regions can be defined.
- Business graphics.
- 3-D colour graphics.
- 3-D graphics.
- Elementary image routines.
- Geographical projections and plotting of maps.
- Contouring.
- Graphical user interface (GUI) routines based on Motif and Windows API functions.

### Getting Started

Installing **hb-dislin** requires **DISLIN** including its headers. For more info see [**getting started**](examples/README.md).

### Example code

```Harbour
#include "hbdislin.ch"

PROCEDURE Main()

   LOCAL cstr := "TeX Instructions for Mathematical Formulas"
   LOCAL nl

   scrmod( "revers" )
   setpag( "da4p" )
   metafl( "cons" )
   disini()
   pagera()
   complx()
   height( 28 )

   nl := nlmess( cstr )
   messag( cstr, Int( ( 2100 - nl ) / 2 ), 100 )

   texmod( "on" )
   messag( "$\\frac{1}{x+y}$", 150, 400 )
   messag( "$\\frac{a^2 - b^2}{a+b} = a - b$", 1200, 400 )

   messag( "$r = \\sqrt{x^2 + y^2}", 150, 700 )
   messag( "$\\cos \\phi = \\frac{x}{\\sqrt{x^2 + y^2}}$", 1200, 700 )

   messag( "$\\Gamma(x) = \\int_0^\\infty e^{-t}t^{x-1}dt$", 150, 1000 )
   messag( "$\\lim_{x \\to \\infty} (1 + \\frac{1}{x})^x = e$", 1200, 1000 )

   messag( "$\\mu = \\sum_{i=1}^n x_i p_i$", 150, 1300 )
   messag( "$\\mu = \\int_{-\\infty}^ \\infty x f(x) dx$", 1200, 1300 )

   messag( "$\\overline{x} = \\frac{1}{n} \\sum_{i=1}^n x_i$", 150, 1600 )
   messag( "$s^2 = \\frac{1}{n-1} \\sum_{i=1}^n (x_i - \\overline{x})^2$", 1200, 1600 )

   messag( "$\\sqrt[n]{\\frac{x^n - y^n}{1 + u^{2n}}}$", 150, 1900 )
   messag( "$\\sqrt[3]{-q + \\sqrt{q^2 + p^3}}$", 1200, 1900 )

   messag( "$\\int \\frac{dx}{1+x^2} = \\arctan x + C$", 150, 2200 )
   messag( "$\\int \\frac{dx}{\\sqrt{1+x^2}} = {\\rm arsinh} x + C$", 1200, 2200 )

   messag( "$\\overline{P_1P_2} = \\sqrt{(x_2-x_1)^2 + (y_2-y_1)^2}$", 150,2500 )
   messag( "$x = \\frac{x_1 + \\lambda x_2}{1 + \\lambda}$", 1200, 2500 )

   disfin()

   RETURN
```

## License

[![License](http://img.shields.io/:license-mit-blue.svg?style=flat-square)](.git/LICENSE)

License MIT is obviously applied only for this repository, not what it builds.
