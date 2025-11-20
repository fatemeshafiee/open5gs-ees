//
// Created by Fatemeh Shafiei Ardestani on 2024-07-07.
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


#ifndef REST_API_C__EE_EVENT_H
#define REST_API_C__EE_EVENT_H

#ifdef DEFINE_UPF_STORAGE
#define EXTERN
#define INITIALIZER(...) = __VA_ARGS__
#else
#define EXTERN extern
#define INITIALIZER(...)
#endif

#include "cvector.h"
#include "types.h"
#include "stb_ds.h"
#include "btree.h"

EXTERN cvector_vector_type(CreatedSubscription) subscriptionList INITIALIZER(NULL);
EXTERN EventType supported_events[2] INITIALIZER({USER_DATA_USAGE_MEASURES, USER_DATA_USAGE_TRENDS});
EXTERN BTreeMap subHash INITIALIZER(NULL);
EXTERN pthread_mutex_t subHash_lock;
EXTERN pthread_mutex_t subID_lock;
EXTERN cvector_vector_type(char*) subIDList INITIALIZER(NULL);

//int initialize_hashmap(const unsigned initial_size){
//  return hashmap_create(initial_size, &hashmap);;
//}

#endif //REST_API_C__EE_EVENT_H