//
// Created by Fatemeh Shafiei Ardestani on 2025-03-06.
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
#ifndef OPEN5GS_MANAGE_COLLECTION_H
#define OPEN5GS_MANAGE_COLLECTION_H
#ifdef DEFINE_MANAGE
#define EXTERN
#define INITIALIZER(...) = __VA_ARGS__
#else
#define EXTERN extern
#define INITIALIZER(...)
#endif

EXTERN bool is_active INITIALIZER(false);
#endif //OPEN5GS_MANAGE_COLLECTION_H
