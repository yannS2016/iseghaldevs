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

#ifndef KISEGTYPE
#define KISEGTYPE

#include "isegcommon.h"
#include "kernel/kcan.h"

EXTERN_C_BEGIN

typedef enum ElementState{
	unused = 0,
	waitForInitialData,       ///< request start up values
	communicationBad,         ///< reply no answer
	actual,                   ///< item value is correspoding to the data point in the device
	newValueLowPriority,      ///< set value with low priority
	newValueHighPriority,     ///< set value with high priority
	waitForRequest0,          ///< first internal operation
	waitForRequestMaxChannels = waitForRequest0 + DataCacheMaxChannels,
	lastWaitForRequest,       ///< last internal operation
	request,                  ///< request item
	requested,                ///< item requested
	unimplemented,            ///< item is not supported by the module
	replacement               ///< item replaced by another data point value
} ElementState;

typedef enum WriteRequestState {
	WriteRequestStateNone = 0,
	WriteRequestStateWait = 1,
	WriteRequestStateWrite = 2,
	WriteRequestStateRequest = 3
} WriteRequestState;

typedef enum CacheState {
	state_notLogged = 0,
	state_logOff,
	state_configure,
	state_uninitialized,
	state_waitForAnswer,
	state_requestVariableData,
	state_afterRequestData
} CacheState;

typedef struct TimeOut {
	KCanId canId;
	uint16_t dataId;
	uint32_t time;
	uint16_t answers;
	uint16_t messagesLostCounter;
	bool newRequest;
	CacheState cacheState;
} TimeOut;
#define EmptyTimeOut { { 0 }, 0, 0, 0, 0, false, state_notLogged }

typedef enum DataType {
	DataTypeUI1,
	DataTypeUI4,
	DataTypeR4,
	DataTypeString,
	DataTypeBool,
	DataTypeNone
} DataType;

typedef enum KDataCacheColumn {
	DataCacheColumn0 = 0,
	DataCacheColumn1,
	DataCacheColumn2,
	DataCacheColumn3,
	DataCacheColumn4,
	DataCacheColumn5,
	DataCacheColumn6,
	DataCacheColumn7,
	DataCacheColumn8,
	DataCacheColumn9,
	DataCacheColumn10,
	DataCacheColumn11,
	DataCacheColumn12,
	DataCacheColumn13,
	DataCacheColumnSize
} KDataCacheColumn;

typedef struct ItemProperty {
	char     objectString[OBJECT_NAME_SIZE];
	uint16_t dataId;
	KDataCacheColumn column;
	DataType type;
	char     typeString[DATA_TYPE_SIZE];
	char     unit[UNIT_SIZE];
	char     accessRights[ACCESS_SIZE];
} ItemProperty;

typedef enum CommunicationSystem {
	state_init = 0,
	state_disconnect_0,
	state_disconnect_1,
	state_preConfigured,
} CommunicationSystem;

typedef uint16_t KEdcpDataId;
typedef uint8_t KDcpDataId;

typedef union FloatInt {
	uint32_t uintVal;
	float floatVal;
} FloatInt;

float toFloat(uint32_t value);
uint32_t toUint(float value);

typedef enum KCollectData {
	CollectEhsModuleData = 0,
	CollectEhqModuleData,
	CollectCrateData,
	Collect238CrateData,
	CollectDataSize
} KCollectData;

typedef enum Polarity {
	Positive = +1,
	Negative = -1
} Polarity;

typedef uint64_t IsegTime;

extern CommunicationSystem m_commSystemState;

EXTERN_C_END

#endif // KISEGTYPE

