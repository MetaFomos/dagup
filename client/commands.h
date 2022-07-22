#ifndef XDAG_COMMANDS_H
#define XDAG_COMMANDS_H

#include <time.h>
#include "block.h"

#define XDAG_COMMAND_MAX	0x1000

#ifdef __cplusplus
extern "C" {
#endif

/* time of last transfer */
extern time_t g_xdag_xfer_last;
extern int xdag_do_xfer(void *outv, const char *amount, const char *address, const char *remark, int isGui);
extern void xdagSetCountMiningTread(int miningThreadsCount);
extern double xdagGetHashRate(void);
extern long double hashrate(xdag_diff_t *diff);
extern const char *get_state(void);

#ifdef __cplusplus
};
#endif

#define XFER_MAX_IN				11

struct xfer_callback_data {
	struct xdag_field fields[XFER_MAX_IN + 1];
	int keys[XFER_MAX_IN + 1];
	xdag_amount_t todo, done, remains;
	int fieldsCount, keysCount, outsig, hasRemark;
	xdag_hash_t transactionBlockHash;
	xdag_remark_t remark;
};

void startCommandProcessing(int transportFlags);
int xdag_command(char *cmd, FILE *out);
void xdag_log_xfer(xdag_hash_t from, xdag_hash_t to, xdag_amount_t amount);
int out_balances(void);
int xdag_show_state(xdag_hash_t hash);

int xfer_callback(void *data, xdag_hash_t hash, xdag_amount_t amount, xtime_t time, int n_our_key);

int read_command(char* cmd);

void xdag_init_commands(void);

#endif // !XDAG_COMMANDS_H
