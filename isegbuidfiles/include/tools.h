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

#ifndef TOOLS_H
#define TOOLS_H

#include <isegcommon.h>

#include <stdlib.h>

EXTERN_C_BEGIN

typedef IsegResult (* IsegSetItem)(const char *, const char *, const char *);
typedef IsegItem (* IsegGetItem)(const char *, const char *);
typedef IsegItemProperty (* IsegGetItemProperty)(const char *, const char *);

#define tools_min(a, b)(((a) < (b)) ? (a) : (b))
#define tools_max(a, b)(((a) > (b)) ? (a) : (b))

void tools_setIsegGetItem(IsegGetItem function);
void tools_setIsegSetItem(IsegSetItem function);
void tools_setIsegGetItemProperty(IsegGetItemProperty function);

void tools_init(void);
int  tools_getLine(const char *msg, char *buf, int bufSize);
void tools_history(void);
void tools_done(void);
typedef void (* PrintIsegItem)(const IsegItem *item, void *userData);
void tools_getItem(const char *name, const char *object, PrintIsegItem printItem, void *userData);
const char *tools_decodeIsegResult(IsegResult value);
void tools_setItem(const char *name, const char *object, const char *value);
void tools_getItemProperty(const char *name, const char *buf);
void tools_resetEventStatus(const char *name);
void tools_setVoltage(const char *name);
void tools_executeScript(const char *name, const char *scriptFilePath);

const char *tools_firstObject(int line);
const char *tools_nextObject(void);

EXTERN_C_END

#endif // TOOLS_H
