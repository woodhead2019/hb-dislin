
#include <math.h>
#include "hbdislin.h"

// void  abs3pt (float x, float y, float z, float *xp, float *yp);
// void  addlab (const char *cstr, float v, int itic, const char *cax);
// void  angle  (int ngrad);
// void  arcell (int nx, int ny, int na, int nb, float a, float b, float t);
// void  areaf  (const int *nxray, const int *nyray, int n);
// void  autres (int ixdim, int iydim);
// void  autres3d (int ixdim, int iydim, int izdim);
// void  ax2grf (void);
// void  ax3len (int nxl, int nyl, int nzl);
// void  axclrs (int nclr, const char *copt, const char *cax);
// void  axends (const char *cstr, const char *cax);
// void  axgit  (void);
// void  axis3d (float x3, float y3, float z3);

// void  axsbgd (int nclr);
HB_FUNC( AXSBGD )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL )
   {
      axsbgd( hb_parni( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  axsers (void);
HB_FUNC( AXSERS )
{
   axsers();
}

// void  axslen (int nxl, int nyl);
HB_FUNC( AXSLEN )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      axslen( hb_parni( 1 ), hb_parni( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  axsorg (int nxa, int nya);
HB_FUNC( AXSORG )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      axsorg( hb_parni( 1 ), hb_parni( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  axspos (int nxa, int nya);
HB_FUNC( AXSPOS )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      axspos( hb_parni( 1 ), hb_parni( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  axsscl (const char *cscl, const char *cax);
// void  axstyp (const char *copt);
// void  barbor (int iclr);
// void  barclr (int ic1, int ic2, int ic3);
// void  bargrp (int ngrp, float gap);
// void  barmod (const char *cmod, const char *copt);
// void  baropt (float xf, float a);
// void  barpos (const char *copt);
// void  bars   (float *xray, float *y1ray, float *y2ray, int n);
// void  bars3d (const float *xray, const float *yray, const float *z1ray, const float *z2ray, const float *xwray, const float *ywray, const int *icray, int n);
// void  bartyp (const char *ctyp);
// void  barwth (float factor);
// void  basalf (const char *calph);
// void  basdat (int id, int im, int iy);
// void  bezier (const float *xray, const float *yray, int nray, float *x, float *y, int n);
// void  bfcclr (int ic);
// void  bfcmsh (int ic);
// short bitsi2 (int nbits, short mher, int iher, short mhin, int ihin);
// int   bitsi4 (int nbits, int mher,int iher, int mhin, int ihin);
// void  bmpfnt (const char *copt);
// void  bmpmod (int n, const char *cval, const char *copt);
// void  box2d  (void);
// void  box3d  (void);
// void  bufmod (const char *cmod, const char *ckey);
// void  center (void);
// void  cgmbgd (float xr, float xg, float xb);
// void  cgmpic (const char *cstr);
// void  cgmver (int nclr);
// void  chaang (float angle);
// void  chacod (const char *copt);
// void  chaspc (float xspc);
// void  chawth (float xwth);
// void  chnatt (void);
// void  chncrv (const char *copt);
// void  chndot (void);
// void  chndsh (void);
// void  chnbar (const char *copt);
// void  chnpie (const char *copt);
// void  circ3p (float x1, float y1, float x2, float y2, float x3, float y3, float *xm, float *ym, float *r);
// void  circle (int nx, int ny, int nr);
// void  circsp (int nspc);

// void  clip3d (const char *ctyp);
HB_FUNC( CLIP3D )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      clip3d( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   closfl (int nu);
// void  clpbor (const char *copt);
// void  clpmod (const char *copt);
// void  clpwin (int nx, int ny, int nw, int nh);
// void  clrcyc (int index, int iclr);
// void  clrmod (const char *cmode);
// void  clswin (int id);

// void  color  (const char *col);
HB_FUNC( COLOR )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      color( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  colran (int nca, int nce);
// void  colray (const float *zray, int *nray, int n);

// void  complx (void);
HB_FUNC( COMPLX )
{
   complx();
}

// void  conclr (const int *nray, int n);
// void  concrv (const float *xray, const float *yray, int n, float zlev);
// void  cone3d (float xm, float ym, float zm, float r, float h1, float h2, int nsk1, int nsk2);
// void  confll (const float *xray, const float *yray, const float *zray, int n, const int *i1ray, const int *i2ray, const int *i3ray, int ntri, const float *zlev, int nlev);
// void  congap (float xfac);
// void  conlab (const char *clab);
// void  conmat (const float *zmat, int n, int m, float zlev);
// void  conmod (float xfac, float xquot);
// void  conn3d (float x, float y, float z);
// void  connpt (float x, float y);
// void  conpts (const float *xray, int n, const float *yray, int m, const float *zmat, float zlev, float *xpts, float *ypts, int maxpts, int *nray, int maxray, int *nlins);
// void  conshd (const float *xray, int n, const float *yray, int m, const float *zmat, const float *zlev, int nlev);
// void  conshd2 (const float *xmat, const float *ymat, const float *zmat, int n, int m, const float *zlev, int nlev);
// void  conshd3d (const float *xray, int n, const float *yray, int m, const float *zmat, const float *zlev, int nlev);
// void  contri (const float *xray, const float *yray, const float *zray, int n, const int *i1ray, const int *i2ray, const int *i3ray, int ntri, float zlev);
// void  contur (const float *xray, int n, const float *yray, int m, const float *zmat, float zlev);
// void  contur2 (const float *xmat, const float *ymat, const float *zmat, int n, int m, float zlev);
// void  cross  (void);
// void  crvmat (const float *zmat, int n, int m, int ixpts, int iypts);
// void  crvqdr (const float *xray, const float *yray, const float *zray, int n);
// void  crvt3d (const float *xray, const float *yray, const float *zray, const float *rray, const int *icray, int n);
// void  crvtri (const float *xray, const float *yray, const float *zray, int n, const int *i1ray, const int *i2ray, const int *i3ray, int ntri);
// int   csrkey (void);
// void  csrlin (int *ix1, int *iy1, int *ix2, int *iy2);
// void  csrmod (const char *cmod, const char *ckey);
// void  csrpol (int *ix, int *iy, int nmax, int *n, int *iret);
// int   csrpos (int *ix, int *iy);
// void  csrpt1 (int *ix, int *iy);
// void  csrpts (int *ix, int *iy, int nmax, int *n, int *iret);
// void  csrmov (int *ix, int *iy, int nmax, int *n, int *iret);
// void  csrrec (int *ix1, int *iy1, int *ix2, int *iy2);
// void  csrtyp (const char *copt);
// void  csruni (const char *copt);
// void  curv3d (const float *xray, const float *yray, const float *zray, int n);
// void  curv4d (const float *xray, const float *yray, const float *zray, const float *wray, int n);

// void  curve  (const float *xray, const float *yray, int n);
HB_FUNC( CURVE )
{
   PHB_ITEM pItem1, pItem2;

   if( ( pItem1 = hb_param( 1, HB_IT_ARRAY ) ) != NULL &&
       ( pItem2 = hb_param( 2, HB_IT_ARRAY ) ) != NULL &&
                  hb_param( 3, HB_IT_INTEGER ) != NULL )
   {
      float xray;
      float yray;

      xray = ( float ) hb_arrayGetND( pItem1, 1 );
      yray = ( float ) hb_arrayGetND( pItem2, 1 );

      curve( &xray, &yray, hb_parni( 3 ) );
   }
   else
   {
      hb_errRT_BASE( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  curve3 (const float *xray, const float *yray, const float *zray, int n);
// void  curvmp (const float *xray, const float *yray, int n);
// void  curvx3 (const float *xray, float y, const float *zray, int n);
// void  curvy3 (float x, const float *yray, const float *zray, int n);
// void  cyli3d (float xm, float ym, float zm, float r, float h, int nsk1, int nsk2);
// void  dash   (void);
// void  dashl  (void);
// void  dashm  (void);
// void  dbffin (void);
// int   dbfini (void);
// void  dbfmod (const char *copt);
// void  delglb (void);
// void  digits (int ndig, const char *cax);
// void  disalf (void);
// void  disenv (const char *cenv);

// void  disfin (void);
HB_FUNC( DISFIN )
{
   disfin();
}

// void  disini (void);
HB_FUNC( DISINI )
{
   disini();
}

// void  disk3d (float xm, float ym, float zm, float r1, float r2, int nsk1, int nsk2);
// void  doevnt (void);
// void  dot    (void);
// void  dotl   (void);
// void  duplx  (void);
// int   dwgbut (const char *cstr, int ival);
// int   dwgerr (void);
// char *dwgfil (const char *clab, const char *cstr, const char *cmask);
// int   dwglis (const char *clab, const char *clis, int ilis);
// void  dwgmsg (const char *cstr);
// char *dwgtxt (const char *clab, const char *cstr);
// void  ellips (int nx, int ny, int na, int nb);
// void  endgrf (void);
// void  erase  (void);
// void  errbar (const float *x, const float *y, const float *err1, const float *err2, int n);
// void  errdev (const char *cdev);
// void  errfil (const char *cfil);
// void  errmod (const char *cstr, const char *copt);
// void  eushft (const char *cnat, const char *cshf);
// void  expimg (const char *cfil, const char *copt);
// void  expzlb (const char *cstr);
// void  fbars  (const float *xray, const float *y1ray, const float *y2ray, const float *y3ray, const float *y4ray, int n);
// int   fcha   (float x, int ndig, char *cstr);
// void  field  (const float *xray, const float *yray, const float *uray, const float *vray, int n, int ivec);
// void  field3d (const float *x1ray, const float *y1ray, const float *z1ray, const float *x2ray, const float *y2ray, const float *z2ray, int n, int ivec);

// void  filbox (int nx, int ny, int nw, int nh);
HB_FUNC( FILBOX )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL &&
       hb_param( 3, HB_IT_INTEGER ) != NULL &&
       hb_param( 4, HB_IT_INTEGER ) != NULL )
   {
      filbox( hb_parni( 1 ), hb_parni( 2 ), hb_parni( 3 ), hb_parni( 4 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  filclr (const char *copt);
// void  filmod (const char *cmod);
// void  filopt (const char *copt, const char *ckey);
// int   filsiz (const char *cfl, int *nw, int *nh);
// int   filtyp (const char *cfl);
// void  filwin (int nx, int ny, int nw, int nh);
// void  fitscls (void);
// float fitsflt (const char *ckey);
// int   fitshdu (int nhdu);
// int   fitsimg (unsigned char *iray, int nmax);
// int   fitsopn (const char *cfl);
// void  fitsstr (const char *ckey, char *cval, int nmax);
// int   fitstyp (const char *ckey);
// int   fitsval (const char *ckey);
// void  fixspc (float xfac);
// void  flab3d (void);
// int   flen   (float x, int ndig);
// void  frame  (int nfrm);
// void  freeptr (void *p);
// void  frmbar (int nfrm);
// void  frmclr (int nclr);
// void  frmess (int nfrm);
// void  gapcrv (float xgap);
// void  gapsiz (float gap, const char *cax);
// void  gaxpar (float a1, float a2, const char *copt, const char *cax, float *a, float *b, float *org, float *stp, int *ndig);
// char *getalf (void);
// int   getang (void);
// int   getbpp (void);
// void  getclp (int *nx, int *ny, int *nw, int *nh);
// int   getclr (void);
// void  getdig (int *nxdig, int *nydig, int *nzdig);
// char *getdsp (void);
// char *getfil (void);
// void  getgrf (float *a, float *e, float *org, float *step, const char *cax);
// int   gethgt (void);
// int   gethnm (void);
// void  getico (float rre, float rimg, float *zre, float *zimg);
// void  getind (int index, float *xr, float *xg, float *xb);
// void  getlab (char *cx, char *cy, char *cz);
// void  getlen (int *nxl, int *nyl, int *nzl);
// int   getlev (void);
// int   getlin (void);
// int   getlit (float xp, float yp, float zp, float xn, float yn, float zn);
// void  getmat (const float *xray, const float *yray, const float *zray, int n, float *zmat, int nx, int ny, float zval, int *imat, float *wmat);
// char *getmfl (void);
// char *getmix (const char *copt);
// void  getor  (int *nx0, int *ny0);
// void  getpag (int *nxpag, int *nypag);
// long  getpat (void);
// int   getplv (void);
// void  getpos (int *nxa, int *nya);
// void  getran (int *nca, int *nce);
// void  getrco (float zre, float zimg, float *rre, float *rimg);
// void  getres (int *npb, int *nph);
// void  getrgb (float *xr, float *xg, float *xb);
// void  getscl (int *nxscl, int *nyscl, int *nzscl);
// void  getscm (int *ix, int *iy, int *iz);
// void  getscr (int *nwidth, int *nheight);
// char *getshf (const char *copt);
// void  getsp1 (int *nxdis, int *nydis, int *nzdis);
// void  getsp2 (int *nxdis, int *nydis, int *nzdis);
// void  getsym (int *nxsym, int *nysym);
// void  gettcl (int *nmaj, int *nmin);
// void  gettic (int *nxtic, int *nytic, int *nztic);
// int   gettyp (void);
// void *getuni (void);
// float getver (void);
// void  getvk  (int *nv, int *nvfx, int *nvfy);
// char *getvlt (void);
// int   getwid (void);
// void  getwin (int *ix, int *iy, int *nwidth, int *nheight);
// int   getxid (const char *copt);
// void  gifmod (const char *cmod, const char *ckey);
// int   gmxalf (const char *copt, char *ca, char *cb);
// void  gothic (void);
// void  grace  (int ngrace);

// void  graf   (float xa, float xe, float xorg, float xstp, float ya, float ye, float yorg, float ystp);
HB_FUNC( GRAF )
{
   if( hb_param( 1, HB_IT_NUMERIC ) != NULL &&
       hb_param( 2, HB_IT_NUMERIC ) != NULL &&
       hb_param( 3, HB_IT_NUMERIC ) != NULL &&
       hb_param( 4, HB_IT_NUMERIC ) != NULL &&
       hb_param( 5, HB_IT_NUMERIC ) != NULL &&
       hb_param( 6, HB_IT_NUMERIC ) != NULL &&
       hb_param( 7, HB_IT_NUMERIC ) != NULL &&
       hb_param( 8, HB_IT_NUMERIC ) != NULL )
   {
      graf( ( float ) hb_parnd( 1 ), ( float ) hb_parnd( 2 ), ( float ) hb_parnd( 3 ), ( float ) hb_parnd( 4 ),
      ( float ) hb_parnd( 5 ),( float ) hb_parnd( 6 ), ( float ) hb_parnd( 7 ), ( float ) hb_parnd( 8 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  graf3  (float xa, float xe, float xorg, float xstp, float ya, float ye, float yorg, float ystp, float za, float ze, float zorg, float zstp);

// void  graf3d (float xa, float xe, float xorg, float xstp, float ya, float ye, float yorg, float ystp, float za, float ze, float zorg, float zstp);
HB_FUNC( GRAF3D )
{
   if( hb_param( 1, HB_IT_NUMERIC ) != NULL &&
       hb_param( 2, HB_IT_NUMERIC ) != NULL &&
       hb_param( 3, HB_IT_NUMERIC ) != NULL &&
       hb_param( 4, HB_IT_NUMERIC ) != NULL &&
       hb_param( 5, HB_IT_NUMERIC ) != NULL &&
       hb_param( 6, HB_IT_NUMERIC ) != NULL &&
       hb_param( 7, HB_IT_NUMERIC ) != NULL &&
       hb_param( 8, HB_IT_NUMERIC ) != NULL )
   {
      graf3d( ( float ) hb_parnd( 1 ), ( float ) hb_parnd( 2 ), ( float ) hb_parnd( 3 ), ( float ) hb_parnd( 4 ),
              ( float ) hb_parnd( 5 ),( float ) hb_parnd( 6 ), ( float ) hb_parnd( 7 ), ( float ) hb_parnd( 8 ),
              ( float ) hb_parnd( 9 ),( float ) hb_parnd( 10 ), ( float ) hb_parnd( 11 ), ( float ) hb_parnd( 12 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  grafmp (float xa, float xe, float xorg, float xstp, float ya, float ye, float yorg, float ystp);
// void  grafp  (float xe, float xorg, float xstp, float yorg, float ystp);
// void  grafr  (const float *zre, int nre, const float *zimg, int nimg);
// void  grdpol (int ixgrid, int iygrid);
// void  grffin (void);
// void  grfimg (const char *cfil);
// void  grfini (float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3);

// void  grid   (int ixgrid, int iygrid);
HB_FUNC( GRID )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      grid( hb_parni( 1 ), hb_parni( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  grid3d (int ixgrid, int iygrid, const char *copt);
// void  gridim (float zim, float zre1, float zre2, int n);
// void  gridmp (int ixgrid, int iygrid);
// void  gridre (float zre, float zim1, float zim2, int n);
// int   gwgatt (int id, const char *copt);
// int   gwgbox (int id);
// int   gwgbut (int id);
// void  gwgfil (int id, char *cfile);
// float gwgflt (int id);
// int   gwggui (void);
// int   gwgint (int id);
// int   gwglis (int id);
// float gwgscl (int id);
// void  gwgsiz (int id, int *nw, int *nh);
// float gwgtbf (int id, int i, int j);
// int   gwgtbi (int id, int i, int j);
// void  gwgtbl (int id, float *xray, int n, int idx, const char *copt);
// void  gwgtbs (int id, int i, int j, char *s);
// void  gwgtxt (int id, char *ctext);
// int   gwgxid (int id);

// void  height (int nhchar);
HB_FUNC( HEIGHT )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL )
   {
      height( hb_parni( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  helve  (void);
// void  helves (void);
// void  helvet (void);
// void  hidwin (int id, const char *copt);
// void  histog (const float *xray, int n, float *x, float *y, int *m);
// void  hname  (int nhchar);
// void  hpgmod (const char *cmod, const char *ckey);
// void  hsvrgb (float  xh, float  xs, float  xv, float *xr, float *xg, float *xb);
// void  hsym3d (float x);

// void  hsymbl (int nhsym);
HB_FUNC( HSYMBL )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL )
   {
      hsymbl( hb_parni( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  htitle (int nhtit);

// void  hwfont (void);
HB_FUNC( HWFONT )
{
   hwfont();
}

// void  hwmode (const char *copt, const char *ckey);
// void  hworig (int nx, int ny);

// void  hwpage (int nw, int nh);
HB_FUNC( HWPAGE )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      hwpage( hb_parni( 1 ), hb_parni( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}


// void  hwscal (float xfac);
// void  imgbox (int nx, int ny, int nw, int nh);
// void  imgclp (int nx, int ny, int nw, int nh);
// void  imgfin (void);

// void  imgfmt (const char *copt);
HB_FUNC( IMGFMT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      imgfmt( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  imgini (void);
// void  imgmod (const char *copt);
// void  imgsiz (int nw, int nh);
// void  imgtpr (int n);
// void  inccrv (int ncrv);
// int   incdat (int id, int im, int iy);

// void  incfil (const char *cfil);
HB_FUNC( INCFIL )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      incfil( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  incmrk (int nmrk);
// int   indrgb (float xr, float xg, float xb);
// void  intax  (void);

// int   intcha (int nx, char *cstr);
HB_FUNC( INTCHA )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      hb_retni( intcha( hb_parni( 1 ), ( char *) hb_parc( 2 ) ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   intlen (int nx);

// int   intrgb (float xr, float xg, float xb);
HB_FUNC( INTRGB )
{
   if( hb_param( 1, HB_IT_NUMERIC ) != NULL &&
       hb_param( 2, HB_IT_NUMERIC ) != NULL &&
       hb_param( 3, HB_IT_NUMERIC ) != NULL )
   {
      hb_retni( intrgb( ( float ) hb_parnd( 1 ), ( float ) hb_parnd( 2 ), ( float ) hb_parnd( 3 ) ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   intutf (const int *iray, int n, char *cstr, int nmax);
// void  isopts (const float *xray, int nx, const float *yray, int ny, const float *zray, int nz, const float *wmat, float wlev, float *xtri, float *ytri, float *ztri, int nmax, int *ntri);
// void  itmcat (char *clis, const char *cstr);
// int   itmcnt (const char *clis);
// void  itmncat (char *clis,int nmax,  const char *cstr);
// char *itmstr (const char *clis, int nlis);
// void  jusbar (const char *copt);

// void  labclr (int iclr, const char *copt);
HB_FUNC( LABCLR )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      labclr( hb_parni( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  labdig (int ndig, const char *cax);
HB_FUNC( LABDIG )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      labdig( hb_parni( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  labdis (int ndis, const char *cax);
HB_FUNC( LABDIS )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      labdis( hb_parni( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  labels (const char *clab, const char *cax);
// void  labjus (const char *copt, const char *cax);
// void  labl3d (const char *copt);
// void  labmod (const char *ckey, const char *cval, const char *cax);
// void  labpos (const char *cpos, const char *cax);
// void  labtyp (const char *ctyp, const char *cax);
// int   ldimg  (const char *cfil, unsigned short *iray, int nmax, int nc);
// void  legbgd (int iclr);
// void  legclr (void);
// void  legend (const char *cbuf, int ncor);
// void  legini (char *cbuf, int nlin, int nmaxln);
// void  leglin (char *cbuf, const char *cstr, int ilin);
// void  legopt (float x1, float x2, float x3);
// void  legpat (int ityp, int ithk, int isym, int iclr, long ipat, int ilin);
// void  legpos (int nx, int ny);
// void  legsel (const int *nray, int n);
// void  legtbl (int n, const char *copt);
// void  legtit (const char *cstr);
// void  legtyp (const char *copt);
// void  legval (float x, const char *copt);
// void  lfttit (void);
// void  licmod (const char *cmod, const char *ckey);
// void  licpts (const float *xv, const float *yv, int nx, int ny, const int *itmat, int *iwmat, float *wmat);

// void  light  (const char *copt);
HB_FUNC( LIGHT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      light( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  linclr (const int *nray, int n);
// void  lincyc (int index, int ityp);

// void  line   (int nx, int ny, int nu, int nv);
HB_FUNC( LINE )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL &&
       hb_param( 3, HB_IT_INTEGER ) != NULL &&
       hb_param( 4, HB_IT_INTEGER ) != NULL )
   {
      line( hb_parni( 1 ), hb_parni( 2 ), hb_parni( 3 ), hb_parni( 4 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  linesp (float xfac);
HB_FUNC( LINESP )
{
   if( hb_param( 1, HB_IT_NUMERIC ) != NULL )
   {
      linesp( ( float ) hb_parnd( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  linfit (const float *x, const float *y, int n, float *a, float *b, float *r, const char *copt);
// void  linmod (const char *cmod, const char *ckey);
// void  lintyp (int ntyp);
// void  linwid (int i);
// void  litmod (int id, const char *copt);
// void  litop3 (int id, float xr, float xg, float xb, const char *copt);
// void  litopt (int id, float xval, const char *copt);
// void  litpos (int id, float x, float y, float z, const char *copt);
// void  lncap  (const char *copt);
// void  lnjoin (const char *copt);
// void  lnmlt  (float x);
// void  logtic (const char *cmod);
// void  mapbas (const char *cmod);
// void  mapfil (const char *cfil, const char *copt);
// void  mapimg (const char *cfil, float x1, float x2, float x3, float x4, float x5, float x6);
// void  maplab (const char *copt, const char *ckey);
// void  maplev (const char *cmod);
// void  mapmod (const char *cmod);
// void  mappol (float xpol, float ypol);
// void  mapopt (const char *copt, const char *ckey);
// void  mapref (float ylower, float yupper);
// void  mapsph (float xrad);
// void  marker (int nsym);

// void  matop3 (float xr, float xg, float xb, const char *copt);
HB_FUNC( MATOP3 )
{
   if( hb_param( 1, HB_IT_NUMERIC ) != NULL &&
       hb_param( 2, HB_IT_NUMERIC ) != NULL &&
       hb_param( 3, HB_IT_NUMERIC ) != NULL &&
       hb_param( 4, HB_IT_STRING ) != NULL )
   {
      matop3( ( float ) hb_parnd( 1 ), ( float ) hb_parnd( 2 ), ( float ) hb_parnd( 3 ), hb_parc( 4 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  matopt (float xval, const char *copt);
// void  mdfmat (int nx, int ny, float weight);

// void  messag (const char *cstr, int nx, int ny);
HB_FUNC( MESSAG )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL &&
       hb_param( 3, HB_IT_INTEGER ) != NULL )
   {
      messag( hb_parc( 1 ), hb_parni( 2 ), hb_parni( 3 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  metafl (const char *cstr);
HB_FUNC( METAFL )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      metafl( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  mixalf (void);
// void  mixleg (void);
// void  mpaepl (int i);
// void  mplang (float x);
// void  mplclr (int nbg, int nfg);
// void  mplpos (int nx, int ny);
// void  mplsiz (int nsize);
// void  mpslogo (int nx, int ny, int nsize, const char *copt);
// void  mrkclr (int nclr);
// void  msgbox (const char *cstr);
// void  mshclr (int ic);
// void  mshcrv (int n);
// void  mylab  (const char *cstr, int itick, const char *cax);
// void  myline (const int *nray, int n);
// void  mypat  (int iang, int itype, int idens, int icross);
// void  mysymb (const float *xray, const float *yray, int n, int isym, int iflag);
// void  myvlt  (const float *xr, const float *xg, const float *xb, int n);
// void  namdis (int ndis, const char *cax);

// void  name   (const char *cstr, const char *cax);
HB_FUNC( NAME )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      name( hb_parc( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  namjus (const char *copt, const char *cax);
// void  nancrv (const char *copt);
// void  neglog (float eps);
// void  newmix (void);
// void  newpag (void);

// int   nlmess (const char *cstr);
HB_FUNC( NLMESS )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      hb_retni( nlmess( hb_parc( 1 ) ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   nlnumb (float x, int ndig);
// void  noarln (void);
// void  nobar  (void);
// void  nobgd  (void);
// void  nochek (void);
// void  noclip (void);
// void  nofill (void);

// void  nograf (void);
HB_FUNC( NOGRAF )
{
   nograf();
}
// void  nohide (void);
// void  noline (const char *cax);

// void  number (float x, int ndig, int nx, int ny);
HB_FUNC( NUMBER )
{
   if( hb_param( 1, HB_IT_NUMERIC ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL &&
       hb_param( 3, HB_IT_INTEGER ) != NULL &&
       hb_param( 4, HB_IT_INTEGER ) != NULL )
   {
      number( ( float ) hb_parnd( 1 ), hb_parni( 2 ), hb_parni( 3 ), hb_parni( 4 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}


// void  numfmt (const char *copt);
// void  numode (const char *cdec, const char *cgrp, const char *cpos, const char *cfix);
// int   nwkday (int id, int im, int iy);
// int   nxlegn (const char *cbuf);
// int   nxpixl (int ix, int iy);
// int   nxposn (float x);
// int   nylegn (const char *cbuf);
// int   nypixl (int ix, int iy);
// int   nyposn (float y);
// int   nzposn (float z);
// int   openfl (const char *cfil, int nu, int irw);
// void  opnwin (int id);

// void  origin (int nx0, int ny0);
HB_FUNC( ORIGIN )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      origin( hb_parni( 1 ), hb_parni( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  page   (int nw, int nh);
HB_FUNC( PAGE )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      page( hb_parni( 1 ), hb_parni( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  pagera (void);
HB_FUNC( PAGERA )
{
   pagera();
}

// void  pagfll (int nclr);
// void  paghdr (const char *cstr1, const char *cstr2, int iopt, int idir);
// void  pagmod (const char *cmod);

// void  pagorg (const char *cpos);
HB_FUNC( PAGORG )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      pagorg( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  pagwin (int nw, int nh);
// void  patcyc (int index, long ipat);
// int   pdfbuf (char *cbuf, int nmax);
// void  pdfmod (const char *cmod, const char *ckey);
// void  pdfmrk (const char *cstr, const char *copt);
// void  penwid (float x);
// void  pie    (int nxm, int nym, int nr, float a, float b);
// void  piebor (int iclr);
// void  piecbk (void (*callbck) (int iseg, float xdat, float xper, int *nrad, int *noff, float *angle, int *nvx, int *nvy, int *idrw, int *iann));
// void  pieclr (const int *ic1, const int *ic2, int n);
// void  pieexp (void);
// void  piegrf (const char *cbuf, int nlin, const float *xray, int nseg);
// void  pielab (const char *clab, const char *cpos);
// void  pieopt (float xf, float a);
// void  pierot (float angle);

// void  pietyp (const char *ctyp);
HB_FUNC( PIETYP )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      pietyp( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  pieval (float x, const char *copt);
// void  pievec (int ivec, const char *copt);
// void  pike3d (float x1, float y1, float z1, float x2, float y2, float z2, float r, int nsk1, int nsk2);
// void  plat3d (float xm, float ym, float zm, float xl, const char *copt);
// void  plyfin (const char *cfl, const char *cobj);

// void  plyini (const char *copt);
HB_FUNC( PLYINI )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      plyini( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  pngmod (const char *cmod, const char *ckey);
HB_FUNC( PNGMOD )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      pngmod( hb_parc( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  point  (int nx, int ny, int nb, int nh, int ncol);
HB_FUNC( POINT )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL &&
       hb_param( 3, HB_IT_INTEGER ) != NULL &&
       hb_param( 4, HB_IT_INTEGER ) != NULL &&
       hb_param( 5, HB_IT_INTEGER ) != NULL )
   {
      point( hb_parni( 1 ), hb_parni( 2 ), hb_parni( 3 ), hb_parni( 4 ), hb_parni( 5 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  polar  (float xe, float xorg, float xstp, float yorg, float ystp);
// int   polclp (const float *xray, const float *yray, int n, float *xout, float *yout, int nmax, float xv, const char *cedge);

// void  polcrv (const char *cpol);
HB_FUNC( POLCRV )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      polcrv( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  polmod (const char *cpos, const char *cdir);
// void  pos2pt (float x, float y, float *xp, float *yp);
// void  pos3pt (float x, float y, float z, float *xp, float *yp, float *zp);

// void  posbar (const char *copt);
HB_FUNC( POSBAR )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      posbar( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   posifl (int nu, int nbyte);

// void  proj3d (const char *copt);
HB_FUNC( PROJ3D )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      proj3d( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  projct (const char *cproj);
HB_FUNC( PROJCT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      projct( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  psfont (const char *cfont);
HB_FUNC( PSFONT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      psfont( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  psmode (const char *cmod);
HB_FUNC( PSMODE )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      psmode( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  pt2pos (float x, float y, float *xp, float *yp);
// void  pyra3d (float xm, float ym, float zm, float xl, float h1, float h2, int n);
// void  qplbar (const float *yray, int n);
// void  qplclr (const float *zmat, int n, int m);
// void  qplcrv (const float *xray, const float *yray, int n, const char *copt);
// void  qplcon (const float *zmat, int n, int m, int nlv);
// void  qplot  (const float *xray, const float *yray, int n);
// void  qplpie (const float *xray, int n);
// void  qplsca (const float *xray, const float *yray, int n);
// void  qplscl (float a, float e, float org, float stp, const char *copt);
// void  qplsur (const float *zmat, int n, int m);
// void  quad3d (float xm, float ym, float zm, float xl, float yl, float zl);
// int   rbfpng (char *cbuf, int nmax);

// void  rbmp   (const char *cfil);
HB_FUNC( RBMP )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      rbmp( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   readfl (int nu, unsigned char *cbuf, int nbyte);
// void  reawgt (void);
// void  recfll (int nx, int ny, int nw, int nh, int ncol);

// void  rectan (int nx, int ny, int nw, int nh);
HB_FUNC( RECTAN )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL &&
       hb_param( 3, HB_IT_INTEGER ) != NULL &&
       hb_param( 4, HB_IT_INTEGER ) != NULL )
   {
      rectan( hb_parni( 1 ), hb_parni( 2 ), hb_parni( 3 ), hb_parni( 4 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  rel3pt (float x, float y, float z, float *xp, float *yp);
// void  resatt (void);

// void  reset  (const char *cname);
HB_FUNC( RESET )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      reset( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  revscr (void);
// void  rgbhsv (float xr, float xg, float xb, float *xh, float *xs, float *xv);

// void  rgif   (const char *cfil);
HB_FUNC( RGIF )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      rgif( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  rgtlab (void);

// void  rimage (const char *cfil);
HB_FUNC( RIMAGE )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      rimage( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  rlarc  (float xm, float ym, float xa, float xb, float a,  float b,  float t);
// void  rlarea (const float *xray, const float *yray, int n);
// void  rlcirc (float xm, float ym, float r);
// void  rlconn (float x, float y);
// void  rlell  (float xm, float ym, float a, float b);
// void  rline  (float x, float y, float u, float v);
// void  rlmess (const char *cstr, float x, float y);
// void  rlnumb (float x, int ndig, float xp, float yp);
// void  rlpie  (float xm, float ym, float r, float a, float b);
// void  rlpoin (float x, float y, int nb, int nh, int ncol);
// void  rlrec  (float x, float y, float xw, float xh);
// void  rlrnd  (float x, float y, float xb, float xh, int irnd);
// void  rlsec  (float xm, float ym, float r1, float r2, float a,  float b,  int ncol);
// void  rlstrt (float x, float y);
// void  rlsymb (int nsym, float x, float y);
// void  rlvec  (float x1, float y1, float x2, float y2, int ivec);
// void  rlwind (float xk, float x, float y, int nwidth, float a);
// void  rndrec (int nx, int ny, int nb, int nh, int irnd);
// void  rot3d  (float xa, float ya, float za);
// void  rpixel (int ix, int iy, int *iclr);
// void  rpixls (unsigned char *iray, int ix, int iy, int nw, int nh);

// void  rpng   (const char *cfil);
HB_FUNC( RPNG )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      rpng( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  rppm   (const char *cfil);
HB_FUNC( RPPM )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      rppm( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  rpxrow (unsigned char *iray, int ix, int iy, int n);

// void  rtiff  (const char *cfil);
HB_FUNC( RTIFF )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      rtiff( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  rvynam (void);

// void  scale  (const char *cscl, const char *cax);
HB_FUNC( SCALE )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL)
   {
      scale( hb_parc( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  sclfac (float xfac);

// void  sclmod (const char *cmode);
HB_FUNC( SCLMOD )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      sclmod( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  scrmod (const char *cmode);
HB_FUNC( SCRMOD )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      scrmod( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  sector (int nx, int ny, int nr1, int nr2, float a, float b, int ncol);
// void  selwin (int id);
// void  sendbf (void);
// void  sendmb (void);
// void  sendok (void);
// void  serif  (void);
// void  setbas (float xfac);
// void  setcbk (void (*callbck) (float *x, float *y), const char *copt);
// void  setclr (int ncol);

// void  setcsr (const char *copt);
HB_FUNC( SETCSR )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      setcsr( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  setexp (float fexp);

// void  setfce (const char *copt);
HB_FUNC( SETFCE )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      setfce( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  setfil (const char *cfil);
HB_FUNC( SETFIL )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      setfil( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  setgrf (const char *c1, const char *c2, const char *c3, const char *c4);
// void  setind (int index, float xr, float xg, float xb);
// void  setmix (const char *cstr, const char *cmix);

// void  setpag (const char *cpag);
HB_FUNC( SETPAG )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      setpag( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  setres (int npb, int nph);
// void  setres3d (float xl, float yl, float zl);

// void  setrgb (float xr, float xg, float xb);
HB_FUNC( SETRGB )
{
   if( hb_param( 1, HB_IT_NUMERIC ) != NULL &&
       hb_param( 2, HB_IT_NUMERIC ) != NULL &&
       hb_param( 3, HB_IT_NUMERIC ) != NULL )
   {
      setrgb( ( float ) hb_parnd( 1 ), ( float ) hb_parnd( 2 ), ( float ) hb_parnd( 3 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  setscl (const float *xray, int n, const char *cax);

// void  setvlt (const char *cvlt);
HB_FUNC( SETVLT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      setvlt( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  setxid (int id, const char *copt);
// void  shdafr (const int *inray, const long *ipray, const int *icray, int n);
// void  shdasi (const int *inray, const long *ipray, const int *icray, int n);
// void  shdaus (const int *inray, const long *ipray, const int *icray, int n);
// void  shdcha (void);
// void  shdcrv (const float *x1ray, const float *y1ray, int n1, const float *x2ray, const float *y2ray, int n2);
// void  shdeur (const int *inray, const long *ipray, const int *icray, int n);
// void  shdfac (float xfac);

// void  shdmap (const char *cmap);
HB_FUNC( SHDMAP )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      shdmap( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  shdmod (const char *copt, const char *ctyp);
HB_FUNC( SHDMOD )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      shdmod( hb_parc( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  shdnor (const int *inray, const long *ipray, const int *icray, int n);
// void  shdpat (long ipat);
// void  shdsou (const int *inray, const long *ipray, const int *icray, int n);
// void  shdusa (const int *inray, const long *ipray, const int *icray, int n);
// void  shield (const char *carea, const char *cmode);
// void  shlcir (int nx, int ny, int nr);
// void  shldel (int id);
// void  shlell (int nx, int ny, int na, int nb, float t);
// int   shlind (void);
// void  shlpie (int nx, int ny, int nr, float a, float b);
// void  shlpol (const int *nxray, const int *nyray, int n);
// void  shlrct (int nx, int ny, int nw, int nh, float t);
// void  shlrec (int nx, int ny, int nw, int nh);
// void  shlres (int n);
// void  shlsur (void);
// void  shlvis (int id, const char *cmode);
// void  simplx (void);
// int   skipfl (int nu, int nbyte);
// void  smxalf (const char *calph, const char *c1, const char *c2, int n);
// void  solid  (void);
// void  sortr1 (float *xray, int n, const char *copt);
// void  sortr2 (float *xray, float *yray, int n, const char *copt);
// void  spcbar (int n);
// void  sphe3d (float xm, float ym, float zm, float r, int n, int m);
// void  spline (const float *xray, const float *yray,  int n, float *xsray, float *ysray, int *nspl);
// void  splmod (int ngrad, int npts);
// void  stmmod (const char *cmod, const char *ckey);
// void  stmopt (int n, const char *copt);
// void  stmpts (const float *xmat, const float *ymat, int nx, int ny, const float *xp, const float *yp, float x0, float y0, float *xray, float *yray, int nmax, int *nray);
// void  stmpts3d (const float *xv, const float *yv, const float *zv, int nx, int ny, int nz, const float *xp, const float *yp, const float *zp, float x0, float y0, float z0, float *xray, float *yray, float *zray, int nmax, int *nray);
// void  stmtri (const float *xv, const float *yv, const float *xp, const float *yp, int n, const int *i1ray, const int *i2ray, const int *i3ray, int ntri, const float *xs, const float *ys, int nray);
// void  stmval (float x, const char *copt);
// void  stream (const float *xmat, const float *ymat, int nx, int ny, const float *xp, const float *yp, const float *xs, const float *ys, int n);
// void  stream3d (const float *xv, const float *yv, const float *zv, int nx, int ny, int nz, const float *xp, const float *yp, const float *zp, const float *xs, const float *ys, const float *zs, int n);
// void  strt3d (float x, float y, float z);
// void  strtpt (float x, float y);

// void  surclr (int ictop, int icbot);
HB_FUNC( SURCLR )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      surclr( hb_parni( 1 ), hb_parni( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  surfce (const float *xray, int n, const float *yray, int m, const float *zmat);

static float zfun( float u, float v, int iopt )
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

// void  surfcp (float (*zfun)(float x, float y, int i), float a1, float a2, float astp, float b1, float b2, float bstp);
HB_FUNC( SURFCP )
{
   surfcp( zfun, ( float ) hb_parnd( 2 ), ( float ) hb_parnd( 3 ), ( float ) hb_parnd( 4 ), ( float ) hb_parnd( 5 ), ( float ) hb_parnd( 6 ), ( float ) hb_parnd( 7 ) );
}

// void  surfun (float (*zfun)(float x, float y), int ixpts, float xdel, int iypts, float ydel);
// void  suriso (const float *xray, int nx, const float *yray, int ny, const float *zray, int nz, const float *wmat, float wlev);
// void  surmat (const float *zmat, int nx, int ny, int ixpts, int iypts);

// void  surmsh (const char *copt);
HB_FUNC( SURMSH )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      surmsh( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  suropt (const char *copt);
HB_FUNC( SUROPT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      suropt( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  surshc (const float *xray, int n, const float *yray, int m, const float *zmat, const float *wmat);
// void  surshd (const float *xray, int n, const float *yray, int m, const float *zmat);
// void  sursze (float xmin, float xmax, float ymin, float ymax);
// void  surtri (const float *xray, const float *yray, const float *zray, int n, const int *i1ray, const int *i2ray, const int *i3ray, int ntri);

// void  survis (const char *cvis);
HB_FUNC( SURVIS )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      survis( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  swapi2 (short *iray, int n);
// void  swapi4 (int *iray, int n);
// void  swgatt (int id, const char *cval, const char *copt);
// void  swgbgd (int id, float xr, float xg, float xb);
// void  swgbox (int ip, int ival);
// void  swgbut (int ip, int ival);
// void  swgcb  (int id, void (*callbck) (int i, int *ir), int *iray);
// void  swgcb2 (int id, void (*callbck) (int id, int irow, int icol));
// void  swgcb3 (int id, void (*callbck) (int id, int ival));
// void  swgcbk (int id, void (*callbck) (int i));
// void  swgclr (float xr, float xg, float xb, const char *copt);

// void  swgdrw (float x);
HB_FUNC( SWGDRW )
{
   if( hb_param( 1, HB_IT_NUMERIC ) != NULL  )
   {
      swgdrw( ( float ) hb_parnd( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  swgfgd (int id, float xr, float xg, float xb);
// void  swgfil (int ip, const char *cval);
// void  swgflt (int ip, float xv, int ndig);
// void  swgfnt (const char *cfnt, int n);
// void  swgfoc (int id);

// void  swghlp (const char *cstr);
HB_FUNC( SWGHLP )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      swghlp( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  swgint (int ip, int iv);
// void  swgiop (int n, const char *copt);
// void  swgjus (const char *ctyp, const char *cwidg);
// void  swglis (int ip, int ival);
// void  swgmix (const char *c, const char *cstr);
// void  swgmrg (int ival, const char *cstr);
// void  swgoff (int nx, int ny);

// void  swgopt (const char *cval, const char *copt);
HB_FUNC( SWGOPT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      swgopt( hb_parc( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  swgpop (const char *copt);
HB_FUNC( SWGPOP )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      swgpop( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  swgpos (int nx, int ny);
// void  swgray (const float *xray, int nray, const char *copt);
// void  swgscl (int ip, float xval);
// void  swgsiz (int nx, int ny);
// void  swgspc (float xw, float xh);
// void  swgstp (float step);
// void  swgtbf (int id, float xval, int ndig, int irow, int icol, const char *copt);
// void  swgtbi (int id, int ival, int irow, int icol, const char *copt);
// void  swgtbl (int id, float *xray, int nray, int ndig, int idx, const char *copt);
// void  swgtbs (int id, const char *cstr, int irow, int icol, const char *copt);

// void  swgtit (const char *ctit);
HB_FUNC( SWGTIT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      swgtit( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  swgtxt (int ip, const char *cval);
// void  swgtyp (const char *ctyp, const char *cwidg);
// void  swgval (int ip, float xval);
// void  swgwin (int nx, int ny, int nw, int nh);

// void  swgwth (int nchar);
HB_FUNC( SWGWTH )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL )
   {
      swgwth( hb_parni( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  symb3d (int n, float xm, float ym, float zm);

// void  symbol (int nsym, int nx, int ny);
HB_FUNC( SYMBOL )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL &&
       hb_param( 3, HB_IT_INTEGER ) != NULL )
   {
      symbol( hb_parni( 1 ), hb_parni( 2 ), hb_parni( 3 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  symfil (const char *cdev, const char *cstat);
// void  symrot (float angle);
// int   tellfl (int nu);

// void  texmod (const char *copt);
HB_FUNC( TEXMOD )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      texmod( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  texopt (const char *copt, const char *ctyp);
// void  texval (float x, const char *copt);
// void  thkc3d (float x);
// void  thkcrv (int nthk);
// void  thrfin (void);
// void  thrini (int n);

// void  ticks  (int itick, const char *cax);
HB_FUNC( TICKS )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      ticks( hb_parni( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  ticlen (int nmaj, int nmin);
// void  ticmod (const char *copt, const char *cax);
// void  ticpos (const char *cpos, const char *cax);
// void  tifmod (int n, const char *cval, const char *copt);
// void  tiforg (int nx, int ny);
// void  tifwin (int nx, int ny, int nw, int nh);
// void  timopt (void);

// void  titjus (const char *copt);
HB_FUNC( TITJUS )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      titjus( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  title  (void);
HB_FUNC( TITLE )
{
   title();
}

// void  titlin (const char *cstr, int n);
HB_FUNC( TITLIN )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      titlin( hb_parc( 1 ), hb_parni( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  titpos (const char *copt);
HB_FUNC( TITPOS )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      titpos( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  torus3d (float xm, float ym, float zm, float r1, float r2, float h, float a1, float a2, int n, int m);
// void  tprfin (void);
// void  tprini (void);
// void  tprmod (const char *cmod, const char *ckey);
// void  tprval (float x);
// void  tr3axs (float x, float y, float z, float a);
// void  tr3res (void);
// void  tr3rot (float a, float b, float c);
// void  tr3scl (float x, float y, float z);
// void  tr3shf (float x, float y, float z);
// void  trfco1 (float *xray, int n, const char *cfrom, const char *cto);
// void  trfco2 (float *xray, float *yray, int n, const char *cfrom, const char *cto);
// void  trfco3 (float *xray, float *yray, float *zray, int n, const char *cfrom, const char *cto);
// void  trfdat (int ndays, int *id, int *im, int *iy);
// void  trfmat (const float *zmat, int nx, int ny, float *zmat2, int nx2, int ny2);
// void  trfrel (float *xray, float *yray, int n);
// void  trfres (void);
// void  trfrot (float xang, int nx, int ny);
// void  trfscl (float xscl, float yscl);
// void  trfshf (int nx, int ny);
// void  tria3d (const float *xtri, const float *ytri, const float *ztri);
// int   triang (float *xray, float *yray, int n, int *i1ray, int *i2ray, int *i3ray, int nmax);
// void  triflc (const float *xray, const float *yray, const int *iray, int n);
// void  trifll (const float *xray, const float *yray);
// void  triplx (void);
// void  tripts (const float *xray, const float *yray, const float *zray, int n, const int *i1ray, const int *i2ray, const int *i3ray, int ntri, float zlev, float *xpts, float *ypts, int maxpts, int *nptray, int maxray, int *nlins);

// int   trmlen (const char *cstr);
HB_FUNC( TRMLEN )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      trmlen( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  ttfont (const char *cfnt);
HB_FUNC( TTFONT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      ttfont( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  tube3d (float x1, float y1, float z1, float x2, float y2, float z2, float r, int nsk1, int nsk2);
// void  txtbgd (int n);
// void  txtjus (const char *copt);
// void  txture (int *itmat, int nx, int ny);
// void  unit   (void *fp);
// void  units  (const char *copt);
// void  upstr  (char *cstr);
// int   utfint (const char *cstr, int *iray, int n);
// void  vang3d (float a);
// void  vclp3d (float x1, float x2);
// void  vecclr (int iclr);
// void  vecf3d (const float *xv, const float *yv, const float *zv, const float *xp, const float *yp, const float *zp, int n, int ivec);
// void  vecfld (const float *xv, const float *yv, const float *xp, const float *yp, int n, int ivec);
// void  vecmat (const float *xmat, const float *ymat, int nx, int ny, const float *xp, const float *yp, int ivec);
// void  vecmat3d (const float *xv, const float *yv, const float *zv, int nx, int ny, int nz, const float *xp, const float *yp, const float *zp, int ivec);
// void  vecopt (float x, const char *copt);
// void  vector (int nx1, int ny1, int nx2, int ny2, int ivec);
// void  vectr3 (float x1, float y1, float z1, float x2, float y2, float z2, int ivec);
// void  vfoc3d (float x, float y, float z, const char *cview);
// void  view3d (float xvu, float yvu, float zvu, const char *cvu);
// void  vkxbar (int nvfx);
// void  vkybar (int nvfy);

// void  vkytit (int nvfy);
HB_FUNC( VKYTIT )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL )
   {
      vkytit( hb_parni( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  vltfil (const char *cfl, const char *copt);
// void  vscl3d (float x);
// void  vtx3d  (const float *xray, const float *yray, const float *zray, int n, const char *copt);
// void  vtxc3d (const float *xray, const float *yray, const float *zray, const int *ic, int n, const char *copt);
// void  vtxn3d (const float *xray, const float *yray, const float *zray, const float *xn, const float *yn, const float *zn, int n, const char *copt);
// void  vup3d  (float a);
// int   wgapp  (int ip, const char *clab);
// int   wgappb (int ip, unsigned const char *iray, int nw, int nh);

// int   wgbas  (int ip, const char *ctyp);
HB_FUNC( WGBAS )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      hb_retni( wgbas( hb_parni( 1 ), hb_parc( 2 ) ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   wgbox  (int ip, const char *cstr, int isel);
// int   wgbut  (int ip, const char *cstr, int ival);
// int   wgcmd  (int ip, const char *clab, const char *cmd);
// int   wgdlis (int ip, const char *cstr, int isel);

// int   wgdraw (int ip);
HB_FUNC( WGDRAW )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL )
   {
      hb_retni( wgdraw( hb_parni( 1 ) ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   wgfil  (int ip, const char *clab, const char *cstr, const char *cmask);
// void  wgfin  (void);
// int   wgicon (int ip, const char *clab, int nw, int nh, const char *cfl);
// int   wgimg  (int ip, const char *clab, const unsigned char *iray, int nw, int nh);

// int   wgini  (const char *ctyp);
HB_FUNC( WGINI )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      hb_retni( wgini( hb_parc( 1 ) ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   wglab  (int ip, const char *cstr);
HB_FUNC( WGLAB )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      hb_retni( wglab( hb_parni( 1 ), hb_parc( 2 ) ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   wglis  (int ip, const char *cstr, int isel);
// int   wgltxt (int ip, const char *clab, const char *ctext, int iper);
// int   wgok   (int ip);
// int   wgpbar (int ip, float x1, float x2, float xstp);
// int   wgpbut (int ip, const char *clab);
// int   wgpicon (int ip, const char *clab, int nw, int nh, const char *cfl);
// int   wgpimg (int ip, const char *clab, const unsigned char *iray, int nw, int nh);
// int   wgpop  (int ip, const char *clab);
// int   wgpopb (int ip, unsigned const char *iray, int nw, int nh);
// int   wgquit (int ip);

// int   wgscl  (int ip, const char *cstr, float x1, float x2, float xval, int ndez);
HB_FUNC( WGSCL )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_STRING )  != NULL &&
       hb_param( 3, HB_IT_NUMERIC ) != NULL &&
       hb_param( 4, HB_IT_NUMERIC ) != NULL &&
       hb_param( 5, HB_IT_NUMERIC ) != NULL &&
       hb_param( 6, HB_IT_INTEGER ) != NULL )
   {
      hb_retni( wgscl( hb_parni( 1 ), hb_parc( 2 ), ( float ) hb_parnd( 3 ), ( float ) hb_parnd( 4 ), ( float ) hb_parnd( 5 ), hb_parni( 6 ) ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   wgsep  (int ip);
// int   wgstxt (int ip, int nsize, int nmax);
// int   wgtbl (int ip, int nrows, int ncols);
// int   wgtxt  (int ip, const char *cstr);
// void  widbar (int nzb);

// void  wimage (const char *cfil);
HB_FUNC( WIMAGE )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      wimage( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  winapp (const char *copt);
HB_FUNC( WINAPP )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      winapp( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  wincbk (void (*callbck) (int id, int nx, int ny, int nw, int nh), const char *copt);
// void  windbr (float xk, int nx, int ny, int nwidth, float a);
// void  window (int nx, int ny, int nw, int nh);
// void  winfin (int iopt);

// void  winfnt (const char *cfont);
HB_FUNC( WINFNT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      winfnt( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  winico (const char *cstr);
HB_FUNC( WINICO )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      winico( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// int   winid  (void);

// void  winjus (const char *copt);
HB_FUNC( WINJUS )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      winjus( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  winkey (const char *copt);
HB_FUNC( WINKEY )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      winkey( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  winmod (const char *copt);
HB_FUNC( WINMOD )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      winmod( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  winopt (int iopt, const char *copt);

// void  winsiz (int nw, int nh);
HB_FUNC( WINSIZ )
{
   if( hb_param( 1, HB_IT_INTEGER ) != NULL &&
       hb_param( 2, HB_IT_INTEGER ) != NULL )
   {
      winsiz( hb_parni( 1 ), hb_parni( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  wintit (const char *cstr);
HB_FUNC( WINTIT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      wintit( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  wintyp (const char *copt);
HB_FUNC( WINTYP )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      wintyp( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  wmfmod (const char *cmod, const char *ckey);
HB_FUNC( WMFMOD )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL &&
       hb_param( 2, HB_IT_STRING ) != NULL )
   {
      wmfmod( hb_parc( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  world  (void);
// void  wpixel (int ix, int iy, int iclr);
// void  wpixls (const unsigned char *iray, int ix, int iy, int nw, int nh);
// void  wpxrow (const unsigned char *iray, int ix, int iy, int n);
// int   writfl (int nu, const unsigned char *cbuf, int nbyte);

// void  wtiff  (const char *cfil);
HB_FUNC( WTIFF )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      wtiff( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  x11fnt (const char *cfont, const char *copt);
HB_FUNC( X11FNT )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      x11fnt( hb_parc( 1 ), hb_parc( 2 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  x11mod (const char *copt);
HB_FUNC( X11MOD )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      x11mod( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// float x2dpos (float x, float y);
// float x3dabs (float x, float y, float z);
// float x3dpos (float x, float y, float z);
// float x3drel (float x, float y, float z);
// void  xaxgit (void);
// void  xaxis  (float xa, float xe, float xorg, float xstp, int nl, const char *cstr, int it, int nx, int ny);
// void  xaxlg  (float xa, float xe, float xorg, float xstp, int nl, const char *cstr, int it, int nx, int ny);
// void  xaxmap (float xa, float xe, float xorg, float xstp, const char *cstr, int it, int ny);
// void  xcross (void);
// void  xdraw  (float x, float y);
// float xinvrs (int n);
// void  xmove  (float x, float y);
// float xposn  (float x);
// float y2dpos (float x, float y);
// float y3dabs (float x, float y, float z);
// float y3dpos (float x, float y, float z);
// float y3drel (float x, float y, float z);
// void  yaxgit (void);
// void  yaxis  (float ya, float ye, float yor, float ystp, int nl, const char *cstr, int it, int nx, int ny);
// void  yaxlg  (float ya, float ye, float yor, float ystp, int nl, const char *cstr, int it, int nx, int ny);
// void  yaxmap (float ya, float ye, float yor, float ystp, const char *cstr, int it, int ny);
// void  ycross (void);
// float yinvrs (int n);
// void  ypolar (float ya, float ye, float yor, float ystp, const char *cstr, int ndist);
// float yposn  (float y);
// float z3dpos (float x, float y, float z);
// void  zaxis  (float za, float ze, float zor, float zstp, int nl, const char *cstr, int it, int id, int nx, int ny);
// void  zaxlg  (float za, float ze, float zor, float zstp, int nl, const char *cstr, int it, int id, int nx, int ny);
// void  zbfers (void);
// void  zbffin (void);
// int   zbfini (void);
// void  zbflin (float x1, float y1, float z1, float x2, float y2, float z2);

// void  zbfmod (const char *copt);
HB_FUNC( ZBFMOD )
{
   if( hb_param( 1, HB_IT_STRING ) != NULL )
   {
      zbfmod( hb_parc( 1 ) );
   }
   else
   {
      hb_errRT_BASE_SubstR( EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS );
   }
}

// void  zbfres (void);
// void  zbfscl (float x);
// void  zbftri (const float *x, const float *y, const float *z, const int *ic);
// void  zscale (float za, float ze);