#include <linux/types.h>
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/stddef.h>
#include <linux/printk.h>
#include <linux/debug-snapshot.h>
#include <linux/bug.h>
#include <stdbool.h>

#define ALIGN8 __attribute__((aligned(8)))

ALIGN8 unsigned long __debug_sj_lock = 0;
ALIGN8 void exynos_ss_uart(void) {}
ALIGN8 void exynos_ss_save_log(void) {}
ALIGN8 void dbg_snapshot_save_log(void) {}
ALIGN8 int sec_debug_save_die_info(const char *str, void *regs) { return 0; }
ALIGN8 void print_ppmpu_protection(void *regs) {}
ALIGN8 int sec_debug_save_panic_info(const char *str, unsigned long caller) { return 0; }
ALIGN8 void sec_debug_irq_sched_log(unsigned int irq, void *fn, int en) {}
ALIGN8 int s3c2410wdt_set_emergency_reset(unsigned int timeout, int index) { return 0; }
ALIGN8 void sec_debug_set_extra_info_rvd1(void) {}
ALIGN8 int trace_puts(const char *str) { return 0; }
// ALIGN8 int tracing_mark_write(const char *buf, unsigned int count) { return 0; }
ALIGN8 bool dbg_snapshot_debug_test_enabled(void) { return false; }
ALIGN8 u32 dbg_snapshot_get_debug_test_run(void) { return 0; }
ALIGN8 void dbg_snapshot_set_debug_test_reg(u32 val) {}
ALIGN8 void dbg_snapshot_print_notifier_call(const char *name) {}

ALIGN8 u32 dbg_snapshot_get_debug_test_next(void) { return 0; }
ALIGN8 void dbg_snapshot_set_debug_test_case(u32 val) {}
ALIGN8 void dbg_snapshot_set_debug_test_next(u32 val) {}
ALIGN8 void dbg_snapshot_set_debug_test_run(u32 val) {}
ALIGN8 void dbg_snapshot_set_debug_test_panic(void) {}
ALIGN8 void dbg_snapshot_set_debug_test_wdt(void) {}
ALIGN8 void dbg_snapshot_set_debug_test_wtsr(void) {}
ALIGN8 void dbg_snapshot_set_debug_test_smpl(void) {}
ALIGN8 void dbg_snapshot_set_debug_test_curr(void) {}

ALIGN8 struct dbg_snapshot_soc_operations dss_soc_ops = {
    .err_parse = NULL,
    .dump_cpu_reg = NULL,
};
