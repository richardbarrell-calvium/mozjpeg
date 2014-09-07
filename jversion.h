/*
 * jversion.h
 *
 * This file was part of the Independent JPEG Group's software:
 * Copyright (C) 1991-2012, Thomas G. Lane, Guido Vollbeding.
 * Modifications:
 * Copyright (C) 2010, 2012-2013, D. R. Commander.
 * mozjpeg Modifications:
 * Copyright (C) 2014, Mozilla Corporation.
 * For conditions of distribution and use, see the accompanying README file.
 *
 * This file contains software version identification.
 */


#if JPEG_LIB_VERSION >= 80

#define JVERSION	"8d  15-Jan-2012"

#elif JPEG_LIB_VERSION >= 70

#define JVERSION	"7  27-Jun-2009"

#else

#define JVERSION	"6b  27-Mar-1998"

#endif

#define JCOPYRIGHT	"Copyright (C) 1991-2012 Thomas G. Lane, Guido Vollbeding\n" \
			"Copyright (C) 1999-2006 MIYASAKA Masaru\n" \
			"Copyright (C) 2009 Pierre Ossman for Cendio AB\n" \
			"Copyright (C) 2009-2013 D. R. Commander\n" \
			"Copyright (C) 2009-2011 Nokia Corporation and/or its subsidiary(-ies)\n" \
                        "Copyright (C) 2014 Mozilla Corporation\n"

