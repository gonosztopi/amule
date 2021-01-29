//
// This file is part of the aMule Project.
//
// Copyright (c) 2004-2011 aMule Team ( admin@amule.org / http://www.amule.org )
//
// Any parts of this program derived from the xMule, lMule or eMule project,
// or contributed by third-party developers are copyrighted by their
// respective authors.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301, USA
//

#ifndef CRYPTOPP_INC_H
#define CRYPTOPP_INC_H

#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1

#ifndef CRYPTOPP_INCLUDE_PREFIX
	#include "config.h"		// Needed for CRYPTOPP_INCLUDE_PREFIX
#endif

#define noinline	noinline

#define CRYPTO_HEADER(hdr)	<CRYPTOPP_INCLUDE_PREFIX/hdr>

#include CRYPTO_HEADER(config.h)
#include CRYPTO_HEADER(md4.h)
#include CRYPTO_HEADER(rsa.h)
#include CRYPTO_HEADER(base64.h)
#include CRYPTO_HEADER(osrng.h)
#include CRYPTO_HEADER(files.h)
#include CRYPTO_HEADER(sha.h)
#include CRYPTO_HEADER(des.h)

#endif /* CRYPTOPP_INC_H */
