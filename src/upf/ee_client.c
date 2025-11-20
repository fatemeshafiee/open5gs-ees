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

#include "ee_client.h"

__attribute__((__noreturn__)) void* periodic_sending(void*){
  while (1) {
    sleep(1);  // Wait for 1 second before continuing the loop
    EventReport_UDUM(NULL);  // Send the event report
  }
//  return NULL;
}
