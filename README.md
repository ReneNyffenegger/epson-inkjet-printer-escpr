# epson-inkjet-printer-escpr

Epson Inkjet Printer Driver (ESC/P-R) filter for CUPS.

## Creation of repository


1. Downloaded epson-inkjet-printer-escpr-1.6.18-1lsb3.2.src.rpm via/from http://download.ebz.epson.net/dsc/search/01/search/searchModule

2. rpm2cpio ~/Downloads/epson-inkjet-printer-escpr-1.6.18-1lsb3.2.src.rpm | cpio -id

3. tar zxvf epson-inkjet-printer-escpr-1.4.1-1lsb3.2.tar.gz -C $githubDir --strip-components=1

4. cd $githubDir

5. git add *

6. git commit ...

## Building

    ./bootstrap

    automake --add-missing

    ./configure --prefix=/usr --with-cupsfilterdir=/usr/lib/cups/filter  --with-cupsppddir=/usr/share/ppd

    make

    make install
