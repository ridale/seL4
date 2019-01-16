/*
 * Copyright 2015, DornerWorks, Ltd.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

#ifndef __PLAT_MACHINE_HARDWARE_H
#define __PLAT_MACHINE_HARDWARE_H

#include <util.h>
#include <basic_types.h>
#include <linker.h>
#include <plat/machine.h>
#include <plat/machine/devices.h>
#include <plat/machine/devices_gen.h>

static const kernel_frame_t BOOT_RODATA kernel_devices[] = {
    /*  GP Timer 11 */
    {
        TIMER0_PADDR,
        TIMER0_PPTR,
        true  /* armExecuteNever */
    },
    /*  GIC */
    {
        GIC_CONTROLLER0_PADDR,
        GIC_CONTROLLER_PPTR,
        true  /* armExecuteNever */
#ifdef CONFIG_PRINTING
    },
    {
        /*  UART */
        UART0_PADDR,
        UART_PPTR,
        true  /* armExecuteNever */
#endif
    }
};

/* Handle a platform-reserved IRQ. */
static inline void
handleReservedIRQ(irq_t irq)
{
}

#endif
