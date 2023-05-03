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

#ifndef KCRATES_ECH238_H
#define KCRATES_ECH238_H

#include "iseghalcanglobal.h"
#include "kcrates_ech4x.h"
#include "kech238_can_dataid.h"
#include "kisegtype.h"

EXTERN_C_BEGIN

ISEGHALCAN_EXPORT extern CrateCache m_crateEch238CacheValue[DataCacheMaxLines][DataCacheMaxCratesEch238];
extern IsegTime m_crateEch238CacheTimeStampLastRefreshed[DataCacheMaxLines][DataCacheMaxCratesEch238][DataCacheColumnCrate238Size];
extern IsegTime m_crateEch238CacheTimeStampLastChanged[DataCacheMaxLines][DataCacheMaxCratesEch238][DataCacheColumnCrate238Size];
extern char m_crateEch238CacheQuality[DataCacheMaxLines][DataCacheMaxCratesEch238][DataCacheColumnCrate238Size][QUALITY_SIZE];
extern ElementState m_crateEch238CacheState[DataCacheMaxLines][DataCacheMaxCratesEch238][DataCacheColumnCrate238Size];

extern const ItemPropertyCrate m_crateEch238ItemProperties[DataCacheColumnCrate238Size];

ISEGHALCAN_EXPORT void kcrateEch238_setCanMessageValue(const KCanMessage *rxMsg);
ISEGHALCAN_EXPORT KCanMessage kcrateEch238_handler(uint32_t *preConfiguredCounter, KCollectData *collectData);
ISEGHALCAN_EXPORT void kcrateEch238_setAlive(bool alive, uint16_t line, uint16_t crate);

EXTERN_C_END

#endif // KCRATES_ECH238_H
