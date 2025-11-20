/*
 * This file has been added as part of the research work
 * "Towards NWDAF-enabled Analytics and Closed-Loop Automation in 5G Networks".
 *
 * Added by: Fatemeh Shafiei Ardestani <f2shafie@uwaterloo.ca>
 * Date: 2025-11-09
 *
 * These modifications are licensed under the same terms as the original file.
 * For detailed changes, see the Git history.
 */
#include "ee_event.h"
#include "stb_ds.h"
#include <stdio.h>
#include <string.h>
#include <microhttpd.h>
#include <jansson.h>
#include "handler.h"
#include "types.h"
#include <pthread.h>
#include "send_data.h"
#define PORT 8080
void log_ee(const char* j);
void * init_send_report_client(void);
void * init_server_for_getting_requests(void);

void* send_report_client(void *arg);
void* server_for_getting_requests(void *arg);




