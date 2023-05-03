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

#ifndef KCANAPI_H
#define KCANAPI_H

#include "isegcommon.h"
#include "iseghalcanglobal.h"

#include <stdbool.h>

#define STATE_SIMULATION_STRING    "Simulation"	/* Simulation mode */

#define CAN_STATE_ERROR_ACTIVE_STRING    "00"	/* RX/TX error count < 96 */
#define CAN_STATE_ERROR_WARNING_STRING   "01"	/* RX/TX error count < 128 */
#define CAN_STATE_ERROR_PASSIVE_STRING   "02"	/* RX/TX error count < 256 */
#define CAN_STATE_BUS_OFF_STRING         "03"	/* RX/TX error count >= 256 */
#define CAN_STATE_STOPPED_STRING         "04"	/* Device is stopped */
#define CAN_STATE_SLEEPING_STRING        "05"	/* Device is sleeping */
#define CAN_STATE_SERIOUSLY_ERROR_STRING "06"	/* Cannot get bustate -something is seriously wrong */

#define STATE_UNDEFINED_STRING       "99"

EXTERN_C_BEGIN
ISEGHALCAN_EXPORT unsigned int can_getVersion(void);
ISEGHALCAN_EXPORT const char *can_getVersionString(void);
ISEGHALCAN_EXPORT IsegResult can_connect(const char *interfaceName);
ISEGHALCAN_EXPORT IsegResult can_disconnect(const char *interfaceName);
ISEGHALCAN_EXPORT IsegResult can_setItemValue(const IsegItem *item);
ISEGHALCAN_EXPORT IsegItem can_getItemValue(const char *object);
ISEGHALCAN_EXPORT IsegItemProperty can_getItemProperty(const char *object);
EXTERN_C_END

#endif // KCANAPI_H
