# Getting started

* [Harbour programming language](https://en.wikipedia.org/wiki/Harbour_(programming_language))
* [Homepage](https://harbour.github.io)
* Select your Harbour:
   - [hb30](https://sourceforge.net/projects/harbour-project/files/)
   - [hb32](https://github.com/harbour/core)
   - [hb34](https://github.com/vszakats/harbour-core)

# DISLIN HTML Manual

- [Contents](https://www.dislin.de/manual/contents.html)
- [Index](https://www.dislin.de/manual/appd.html)

# Installing on Windows

Downloading DISLIN Distributions for Windows 64-bit.

- [gcc, g++, Mingw64](https://ftp.gwdg.de/pub/grafik/dislin/win64/dl_11_mg.zip)
- [MS Visual 64-bit](https://ftp.gwdg.de/pub/grafik/dislin/win64/dl_11_vc.zip)

Unpack in the directory:

```
c:\DISLIN\bin *.dll
c:\DISLIN\include *.h
c:\DISLIN\lib *.a
```

# Installing on Linux

Downloading DISLIN Linux Distributions (i586, 64-bit)

- [DEB Distribution](https://ftp.gwdg.de/pub/grafik/dislin/linux/i586_64/dislin-11.4.linux.i586_64.deb)

# Installing on Mac OSX

Downloading DISLIN Distributions (Mac OSX)

- [Mac OSX 10.x, Intel](https://ftp.gwdg.de/pub/grafik/dislin/darwin/dislin-11.4.darwin.intel.64.tar.gz)

# Install hb-dislin

Environment Variables

##### Windows

```
set HB_WITH_DISLIN=c:\DISLIN\include
set PATH=c:\DISLIN\bin;%path%
```

##### Linux

```
echo '' >> ~/.bashrc
echo '# Install hb-dislin to ~/' >> ~/.bashrc
echo 'export HB_WITH_DISLIN="$HOME/dislin/include"' >> ~/.bashrc
echo 'export PATH=$HOME/dislin/lib:$PATH' >> ~/.bashrc
source ~/.bashrc
```

- [Downloading hb-dislin](https://github.com/rjopek/hb-dislin/archive/refs/heads/master.zip)

```
cd hb-dislin
hb-dislin>hbmk2 hbdislin.hbp
```
---

[Edit me](https://github.com/rjopek/hb-dislin/edit/main/examples/README.md)
