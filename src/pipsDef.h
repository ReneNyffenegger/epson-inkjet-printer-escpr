/*
 * Epson Inkjet Printer Driver (ESC/P-R) for Linux
 * Copyright (C) 2002-2005 AVASYS CORPORATION.
 * Copyright (C) Seiko Epson Corporation 2002-2013.
 *
 *  This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA.
 */

#ifndef PIPSDEF_H
#define PIPSDEF_H

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

	typedef unsigned char UCHAR;
	typedef unsigned short USHORT;
	typedef unsigned int UINT;
	typedef unsigned long ULONG;
	typedef int BOOL;
	typedef void* HANDLE;

#ifdef __cplusplus
}
#endif /* __cplusplus */


#define MODE_ITEM 4

enum MODE_OFSET
{
  MOFS_PAPER_SIZE = 0,
  MOFS_MEDIA,
  MOFS_QUALITY,
  MOFS_BORDERLESS_PRINT
};

/* output type */
enum eOUTPUT_FORMAT
{
  PIPS_OUTPUT_MONO = 1,
  PIPS_OUTPUT_CMYKcm = 0
};

/* media size */
#define	    PM_MSID_A4                  0x00
#define	    PM_MSID_LETTER              0x01
#define	    PM_MSID_LEGAL               0x02
#define	    PM_MSID_A5                  0x03
#define	    PM_MSID_A6                  0x04
#define	    PM_MSID_B5                  0x05
#define	    PM_MSID_EXECUTIVE           0x06
#define	    PM_MSID_HALFLETTER          0x07
#define	    PM_MSID_PANORAMIC           0x08
#define	    PM_MSID_TRIM_4X6            0x09
#define	    PM_MSID_4X6                 0x0A
#define	    PM_MSID_5X8                 0x0B
#define	    PM_MSID_8X10                0x0C
#define	    PM_MSID_10X15               0x0D
#define	    PM_MSID_200X300             0x0E
#define	    PM_MSID_L                   0x0F
#define	    PM_MSID_POSTCARD            0x10
#define	    PM_MSID_DBLPOSTCARD         0x11
#define	    PM_MSID_ENV_10_L            0x12
#define	    PM_MSID_ENV_C6_L            0x13
#define	    PM_MSID_ENV_DL_L            0x14
#define	    PM_MSID_NEWEVN_L            0x15
#define	    PM_MSID_CHOKEI_3            0x16
#define	    PM_MSID_CHOKEI_4            0x17
#define	    PM_MSID_YOKEI_1             0x18
#define	    PM_MSID_YOKEI_2             0x19
#define	    PM_MSID_YOKEI_3             0x1A
#define	    PM_MSID_YOKEI_4             0x1B
#define	    PM_MSID_2L                  0x1C
#define	    PM_MSID_ENV_10              0x1D
#define	    PM_MSID_ENV_C6              0x1E
#define	    PM_MSID_ENV_DL              0x1F
#define	    PM_MSID_NEWENV              0x20
#define	    PM_MSID_BUZCARD_89X50       0x21
#define     PM_MSID_BUZCARD_89X55       0x22
#define	    PM_MSID_CARD_54X86          0x23
#define	    PM_MSID_BUZCARD_55X91       0x24
#define     PM_MSID_ALBUM_A5            0x25
#define	    PM_MSID_ALBUM_L             0x26
#define	    PM_MSID_PALBUM_L_L          0x27
#define	    PM_MSID_PALBUM_2L           0x28
#define	    PM_MSID_PALBUM_A5_L         0x29
#define	    PM_MSID_PALBUM_A4           0x2A
#define	    PM_MSID_4X7                 0x2B
#define	    PM_MSID_A3NOBI              0x3D
#define	    PM_MSID_A3                  0x3E
#define	    PM_MSID_B4                  0x3F
#define	    PM_MSID_USB	                0x40
#define	    PM_MSID_11X14               0x41
#define	    PM_MSID_B3                  0x42
#define	    PM_MSID_A2                  0x43
#define	    PM_MSID_USC                 0x44
#define     PM_MSID_10X12               0x45
#define     PM_MSID_12X12               0x46
#define	    PM_MSID_USER                0x63
#define	    PM_MSID_UNKNOWN             -2


/* Support media type id */
#define	    PM_MTID_PLAIN               0x00
#define	    PM_MTID_360INKJET           0x01
#define	    PM_MTID_IRON                0x02
#define	    PM_MTID_PHOTOINKJET         0x03
#define	    PM_MTID_PHOTOADSHEET        0x04
#define	    PM_MTID_MATTE               0x05
#define	    PM_MTID_PHOTO               0x06
#define	    PM_MTID_PHOTOFILM           0x07
#define	    PM_MTID_MINIPHOTO           0x08
#define	    PM_MTID_OHP                 0x09
#define	    PM_MTID_BACKLIGHT           0x0A
#define	    PM_MTID_PGPHOTO             0x0B
#define	    PM_MTID_PSPHOTO             0x0C
#define	    PM_MTID_PLPHOTO             0x0D
#define	    PM_MTID_MCGLOSSY            0x0E
#define	    PM_MTID_ARCHMATTE           0x0F
#define	    PM_MTID_WATERCOLOR          0x10
#define	    PM_MTID_PROGLOSS            0x11
#define	    PM_MTID_MATTEBOARD          0x12
#define	    PM_MTID_PHOTOGLOSS          0x13
#define	    PM_MTID_SEMIPROOF           0x14
#define	    PM_MTID_SUPERFINE2          0x15
#define	    PM_MTID_DSMATTE             0x16
#define	    PM_MTID_CLPHOTO             0x17
#define	    PM_MTID_ECOPHOTO            0x18
#define	    PM_MTID_VELVETFINEART       0x19
#define	    PM_MTID_PROOFSEMI           0x1A
#define	    PM_MTID_HAGAKIRECL          0x1B
#define	    PM_MTID_HAGAKIINKJET        0x1C
#define	    PM_MTID_PHOTOINKJET2        0x1D
#define	    PM_MTID_DURABRITE           0x1E
#define	    PM_MTID_MATTEMEISHI         0x1F
#define	    PM_MTID_HAGAKIATENA         0x20
#define	    PM_MTID_PHOTOALBUM          0x21
#define	    PM_MTID_PHOTOSTAND          0x22
#define	    PM_MTID_RCB                 0x23
#define	    PM_MTID_PGPHOTOEG           0x24
#define	    PM_MTID_ENVELOPE            0x25
#define	    PM_MTID_PLATINA             0x26
#define	    PM_MTID_ULTRASMOOTH         0x27
/* add Wed Jan 28 2009 v */
#define     PM_MTID_SFHAGAKI            0x28  /* "Super Fine Postcard\0"                       */
#define     PM_MTID_PHOTOSTD            0x29  /* "Premium Glossy Photo Paper (Standard)\0"     */
#define     PM_MTID_GLOSSYHAGAKI        0x2A  /* "Glossy Postcard\0"                           */
#define     PM_MTID_GLOSSYPHOTO         0x2B  /* "Glossy Photo Paper\0"                        */
#define     PM_MTID_GLOSSYCAST	        0x2C  /* "Epson Photo\0"							   */
#define     PM_MTID_BUSINESSCOAT        0x2D  /* "Business Ink Jet Coat Paper\0"			   */
/* add Wed Jan 28 2009 ^ */
/* del Wed Jan 28 2009 #define	    PM_MTID_GPHOTO              0x2B*/
/* del Wed Jan 28 2009 #define	    PM_MTID_PHOTOEGCP           0x2C*/
#define	    PM_MTID_CDDVD               0x5B
#define	    PM_MTID_CDDVDHIGH           0x5C
#define	    PM_MTID_HAGAKIATENA         0x20
#define	    PM_MTID_THICKPAPER          0x2F
#define	    PM_MTID_PREPRINTED          0x35
#define	    PM_MTID_LETTERHEAD          0x36
#define	    PM_MTID_RECYCLED	          0x37
#define	    PM_MTID_COLORPAPER          0x38
#define	    PM_MTID_CLEANING            0x63
#define	    PM_MTID_UNKNOWN             -2


#define	SILENT_MASK 0x10000000	


/* quality level set pattern bits */
enum eQUALITY
{
  PIPS_LV_DRAFT = 0,
  PIPS_LV_NORMAL = 1,
  PIPS_LV_HIGH = 2

};

/* Ink status */
enum eINK_STATUS
{
  ST_INK_NORMAL = 0,
  ST_INK_LOW,
  ST_INK_END
};

/* Fit to page */
enum eFIT_PAGE
{
	PIPS_FP_OFF = 0,
	PIPS_FP_ON
};

/* Multi page */
enum eMULTI_PAGE
{
	PIPS_MP_1 = 0,
	PIPS_MP_2,
	PIPS_MP_4
};

/* Borderless Print */
enum eBORDERLESS_PRINT
{
	PIPS_BL_OFF = 0,
	PIPS_BL_ON
};

typedef int (*func_t)(UCHAR *, void *, void *, void *);


#endif /* PIPSDEF_H */
