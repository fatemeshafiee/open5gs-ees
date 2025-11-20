//
// Shared delta queue between UPF writer and send_data reader.
//
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
#ifndef OPEN5GS_DELTA_QUEUE_H
#define OPEN5GS_DELTA_QUEUE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct flow_delta_entry {
    bool is_new;
    char *str_key;
    char *usubid;
    char *ue_ip;
    char *dst_ip;
    uint64_t seid;
    uint16_t src_port;
    uint16_t dst_port;
    uint16_t proto;
    uint64_t ul_bytes_delta;
    uint64_t dl_bytes_delta;
    uint64_t ul_pkts_delta;
    uint64_t dl_pkts_delta;
    time_t start_time;
    time_t timestamp;
} flow_delta_entry;

bool flow_delta_enqueue(flow_delta_entry *entry);
flow_delta_entry *flow_delta_try_dequeue(void);
void flow_delta_entry_free(flow_delta_entry *entry);
void flow_delta_queue_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif // OPEN5GS_DELTA_QUEUE_H
