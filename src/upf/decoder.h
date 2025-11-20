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
#ifndef REST_API_C_DECODER_H
#define REST_API_C_DECODER_H
#include "./types.h"
#include <jansson.h>
#include "cvector.h"

UpfEventSubscription *parse_subscription_request(const char *body);


#endif //REST_API_C_DECODER_H
