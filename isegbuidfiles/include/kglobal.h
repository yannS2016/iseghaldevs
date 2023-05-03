/****************************************************************************
**
** Copyright (C) 2016 - 2021 iseg Spezialelektronik GmbH
** Contact: http://www.iseg-hv.com
** Contact: sales@iseg-hv.com
**
** This file is part of the isegHAL project
**
** Commercial License Usage
** Licensees holding valid commercial licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained
** in a written agreement between you and iseg. For licensing terms
** and conditions contact sales@iseg-hv.com.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
****************************************************************************/

#ifndef KGLOBAL_H
#define KGLOBAL_H

#ifdef _MSC_VER
#	define K_DECL_EXPORT __declspec(dllexport)
#	define K_DECL_IMPORT __declspec(dllimport)
#	define GETNEXT(id)( (decltype(id))(id + 1) )

#	define _CRT_SECURE_NO_WARNINGS
#else
#	define K_DECL_EXPORT
#	define K_DECL_IMPORT
#	ifdef __cplusplus
#		define GETNEXT(id)( static_cast<typeof(id)>(id + 1) )
#	else
#		define GETNEXT(id)( (typeof(id))(id + 1) )
#	endif
#endif

#define SETNEXT(id)( id=GETNEXT(id) )

#endif // KGLOBAL_H
