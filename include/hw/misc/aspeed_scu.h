/*
 * ASPEED System Control Unit
 *
 * Andrew Jeffery <andrew@aj.id.au>
 *
 * Copyright 2016 IBM Corp.
 *
 * This code is licensed under the GPL version 2 or later.  See
 * the COPYING file in the top-level directory.
 */
#ifndef ASPEED_SCU_H
#define ASPEED_SCU_H

#include "hw/sysbus.h"

#define TYPE_ASPEED_SCU "aspeed.scu"
#define ASPEED_SCU(obj) OBJECT_CHECK(AspeedSCUState, (obj), TYPE_ASPEED_SCU)

typedef struct AspeedSCUState {
    /*< private >*/
    SysBusDevice parent_obj;

    /*< public >*/
    MemoryRegion iomem;

    uint32_t regs[(0x1AF >> 2)];
} AspeedSCUState;

#endif /* ASPEED_SCU_H */
