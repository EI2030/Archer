/*
 * Copyright 2014-2016 Freescale Semiconductor, Inc.
 * Copyright 2016-2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __FSL_DEVICE_REGISTERS_H__
#define __FSL_DEVICE_REGISTERS_H__

/*
 * Include the cpu specific register header files.
 *
 * The CPU macro should be declared in the project or makefile.
 */
#if (defined(CPU_LPC55S28JBD100) || defined(CPU_LPC55S28JBD64) || defined(CPU_LPC55S28JEV98))

#define LPC55S28_SERIES

/* CMSIS-style register definitions */
#include "LPC55S28.h"
/* CPU specific feature definitions */
#include "LPC55S28_features.h"

#elif (defined(CPU_LPC5528JBD64))

#define LPC5528_SERIES

/* CMSIS-style register definitions */
#include "LPC5528.h"
/* CPU specific feature definitions */
#include "LPC5528_features.h"

#else
#error "No valid CPU defined!"
#endif

#endif /* __FSL_DEVICE_REGISTERS_H__ */

/*******************************************************************************
 * EOF
 ******************************************************************************/
