////
//// Created by Fatemeh Shafiei Ardestani on 2024-08-18.
////
//
/*
 * This file has been added as part of the research work
 * "Towards NWDAF-enabled Analytics and Closed-Loop Automation in 5G Networks".
 *
 * Added by: Fatemeh Shafiei Ardestani <f2shafie@uwaterloo.ca>
 * Date: 2025-04-06
 *
 * These modifications are licensed under the same terms as the original file.
 * For detailed changes, see the Git history.
 */

#ifndef UPG_VPP_EE_CLIENT_H
#define UPG_VPP_EE_CLIENT_H

#include <microhttpd.h>
#include <jansson.h>
#include "types.h"
#include "btree.h"
#include "send_data.h"
#include "ee_event.h"
#include "stb_ds.h"

__attribute__((__noreturn__)) void* periodic_sending(void*);
#endif //UPG_VPP_EE_CLIENT_H
