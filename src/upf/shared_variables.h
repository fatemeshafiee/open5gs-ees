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
#include "types.h"
#include "btree.h"
#ifndef OPEN5GS_SHARED_VARIABLES_H
#define OPEN5GS_SHARED_VARIABLES_H
#ifdef DEFINE_UPF_SHARED
#define EXTERN
#define INITIALIZER(...) = __VA_ARGS__
#else
#define EXTERN extern
#define INITIALIZER(...)
#endif

EXTERN BTreeMap mymap INITIALIZER(NULL);



#endif //OPEN5GS_SHARED_VARIABLES_H
