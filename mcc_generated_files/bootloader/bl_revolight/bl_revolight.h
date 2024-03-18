/**
 * ?� 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip 
 * software and any derivatives exclusively with Microchip products. 
 * It is your responsibility to comply with third party license terms 
 * applicable to your use of third party software (including open 
 * source software) that may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, 
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, 
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, 
 * MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, 
 * PUNITIVE, INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE 
 * OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, 
 * EVEN IF MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE 
 * DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, 
 * MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO 
 * THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU 
 * HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 * 
 * @file        bl_revolight.h
 * @ingroup     8bit_mdfu_client
 *
 * @brief       This file contains prototypes for APIs that can be used to run a device firmware upgrade process.
 */
#ifndef BL_REVOLIGHT_H
/* cppcheck-suppress misra-c2012-2.5; This is a false positive. */
#define	BL_REVOLIGHT_H

#ifdef __XC
#include <xc.h>
#endif
#include <stdint.h>

typedef enum
{
    REVOLIGHT_BL_OK,
    REVOLIGHT_BL_FAIL
} bl_revolight_result_t;

/**
 * @ingroup 8bit_mdfu_client
 * @brief This API will be used to initialize the startup logic.
 */
bl_revolight_result_t BL_RevolightInitialize(void);

/**
 * @ingroup 8bit_mdfu_client
 * @brief This API will be used to run the bootloader process. This API will be run in
 * a while loop until the bootloader cycle is completed and the device performs a reset.
 * 
 * @note The bootloader will not have any startup logic by default but this API will allow users
 * to customize the start up steps and process cycle of the bootloader.
 */
void BL_Revolight(void);

#endif // BL_REVOLIGHT_H