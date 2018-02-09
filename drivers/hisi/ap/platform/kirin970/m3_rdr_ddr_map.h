#ifndef __M3_RDR_DDR_MAP_H__
#define __M3_RDR_DDR_MAP_H__ 
#if defined(__KERNEL__)
#if defined(CONFIG_HISI_LPMCU_BB)
extern char *g_lpmcu_rdr_ddr_addr;
#define M3_RDR_SYS_CONTEXT_BASE_ADDR g_lpmcu_rdr_ddr_addr
#else
#define M3_RDR_SYS_CONTEXT_BASE_ADDR (0)
#endif
#elif defined(__CMSIS_RTOS)
extern unsigned int g_lpmcu_rdr_ddr_addr;
#define M3_RDR_SYS_CONTEXT_BASE_ADDR g_lpmcu_rdr_ddr_addr
#elif defined(FASTBOOT_MNTN)
extern unsigned long long g_lpmcu_rdr_ddr_addr;
#define M3_RDR_SYS_CONTEXT_BASE_ADDR g_lpmcu_rdr_ddr_addr
#else
#define M3_RDR_SYS_CONTEXT_BASE_ADDR (0)
#endif
#define M3_RDR_SYS_CONTEXT_SIZE (0x40000)
#define M3_RDR_SYS_CONTEXT_RDR_MEM_MAP_INDEX_ADDR (M3_RDR_SYS_CONTEXT_BASE_ADDR)
#define M3_RDR_SYS_CONTEXT_RDR_MEM_MAP_INDEX_SIZE (0x80)
#define M3_RDR_SYS_CONTEXT_EXC_SPECIAL_ADDR (M3_RDR_SYS_CONTEXT_RDR_MEM_MAP_INDEX_ADDR + M3_RDR_SYS_CONTEXT_RDR_MEM_MAP_INDEX_SIZE)
#define M3_RDR_SYS_CONTEXT_EXC_SPECIAL_SIZE (0x80)
#define M3_RDR_SYS_CONTEXT_HEAD_ADDR (M3_RDR_SYS_CONTEXT_EXC_SPECIAL_ADDR + M3_RDR_SYS_CONTEXT_EXC_SPECIAL_SIZE)
#define M3_RDR_SYS_CONTEXT_HEAD_SIZE (0x100)
#define M3_RDR_SYS_CONTEXT_M3_COREREG_ADDR (M3_RDR_SYS_CONTEXT_HEAD_ADDR + M3_RDR_SYS_CONTEXT_HEAD_SIZE)
#define M3_RDR_SYS_CONTEXT_M3_COREREG_SIZE (0x200)
#define M3_RDR_SYS_CONTEXT_M3_NVICREG_ADDR (M3_RDR_SYS_CONTEXT_M3_COREREG_ADDR + M3_RDR_SYS_CONTEXT_M3_COREREG_SIZE)
#define M3_RDR_SYS_CONTEXT_M3_NVICREG_SIZE (0xF00*4)
#define M3_RDR_SYS_CONTEXT_M3_LOG_ADDR (M3_RDR_SYS_CONTEXT_M3_NVICREG_ADDR+M3_RDR_SYS_CONTEXT_M3_NVICREG_SIZE)
#define M3_RDR_SYS_CONTEXT_M3_LOG_SIZE (0x1000)
#define M3_RDR_SYS_CONTEXT_M3_PRIVATE_DATA_ADDR (M3_RDR_SYS_CONTEXT_M3_LOG_ADDR+M3_RDR_SYS_CONTEXT_M3_LOG_SIZE)
#define M3_RDR_SYS_CONTEXT_M3_PRIVATE_DATA_SIZE (0x400)
#define M3_RDR_SYS_CONTEXT_PERI_IPREG_ADDR (M3_RDR_SYS_CONTEXT_M3_PRIVATE_DATA_ADDR + M3_RDR_SYS_CONTEXT_M3_PRIVATE_DATA_SIZE)
#define M3_RDR_SYS_CONTEXT_PERI_IPREG_SIZE (0x400)
#define M3_RDR_SYS_CONTEXT_RUNTIME_VAR_RESERVED_ADDR (M3_RDR_SYS_CONTEXT_PERI_IPREG_ADDR + M3_RDR_SYS_CONTEXT_PERI_IPREG_SIZE)
#define M3_RDR_SYS_CONTEXT_RUNTIME_VAR_RESERVED_SIZE (0x100)
#define M3_RDR_SYS_CONTEXT_LPMCU_STAT_ADDR (M3_RDR_SYS_CONTEXT_RUNTIME_VAR_RESERVED_ADDR+M3_RDR_SYS_CONTEXT_RUNTIME_VAR_RESERVED_SIZE)
#define M3_RDR_SYS_CONTEXT_LPMCU_STAT_SIZE (0x1000)
#define M3_RDR_SYS_CONTEXT_KERNEL_STAT_ADDR (M3_RDR_SYS_CONTEXT_LPMCU_STAT_ADDR+M3_RDR_SYS_CONTEXT_LPMCU_STAT_SIZE)
#define M3_RDR_SYS_CONTEXT_KERNEL_STAT_SIZE (0x200)
#define M3_RDR_SYS_CONTEXT_EXPOSE_STORAGE_ADDR (M3_RDR_SYS_CONTEXT_KERNEL_STAT_ADDR+M3_RDR_SYS_CONTEXT_KERNEL_STAT_SIZE)
#define M3_RDR_SYS_CONTEXT_EXPOSE_STORAGE_SIZE (0xC00)
#define M3_RDR_SYS_CONTEXT_NOC_REG_ADDR (M3_RDR_SYS_CONTEXT_EXPOSE_STORAGE_ADDR+M3_RDR_SYS_CONTEXT_EXPOSE_STORAGE_SIZE)
#define M3_RDR_SYS_CONTEXT_NOC_REG_SIZE (0x200)
#define M3_RDR_SYS_CONTEXT_RUNTIME_VAR_ADDR (M3_RDR_SYS_CONTEXT_NOC_REG_ADDR+M3_RDR_SYS_CONTEXT_NOC_REG_SIZE)
#define M3_RDR_SYS_CONTEXT_RUNTIME_VAR_SIZE (0x400)
#define M3_RDR_SYS_CONTEXT_MODEM_DATA_ADDR (M3_RDR_SYS_CONTEXT_RUNTIME_VAR_ADDR+M3_RDR_SYS_CONTEXT_RUNTIME_VAR_SIZE)
#define M3_RDR_SYS_CONTEXT_MODEM_DATA_SIZE (0x400)
#define M3_RDR_CRG_PERI_ADDR (M3_RDR_SYS_CONTEXT_MODEM_DATA_ADDR + M3_RDR_SYS_CONTEXT_MODEM_DATA_SIZE)
#define M3_RDR_CRG_PERI_SIZE (0x1000)
#define M3_RDR_SCTRL_ADDR (M3_RDR_CRG_PERI_ADDR + M3_RDR_CRG_PERI_SIZE)
#define M3_RDR_SCTRL_SIZE (0x1000)
#define M3_RDR_PMCTRL_ADDR (M3_RDR_SCTRL_ADDR + M3_RDR_SCTRL_SIZE)
#define M3_RDR_PMCTRL_SIZE (0x1000)
#define M3_RDR_PCTRL_ADDR (M3_RDR_PMCTRL_ADDR + M3_RDR_PMCTRL_SIZE)
#define M3_RDR_PCTRL_SIZE (0x1000)
#define M3_RDR_SYS_CONTEXT_IOMCU_REG_ADDR (M3_RDR_PCTRL_ADDR+M3_RDR_PCTRL_SIZE)
#define M3_RDR_SYS_CONTEXT_IOMCU_REG_SIZE (0x100)
#define M3_RDR_DDR_REG_ADDR (M3_RDR_SYS_CONTEXT_IOMCU_REG_ADDR + M3_RDR_SYS_CONTEXT_IOMCU_REG_SIZE)
#define M3_RDR_DDR_REG_SIZE (0xC00)
#define M3_RDR_PMU_REG_ADDR (M3_RDR_DDR_REG_ADDR + M3_RDR_DDR_REG_SIZE)
#define M3_RDR_PMU_REG_SIZE (0x40)
#define M3_RDR_DDR_MNTN_ADDR (M3_RDR_PMU_REG_ADDR + M3_RDR_PMU_REG_SIZE)
#define M3_RDR_DDR_MNTN_SIZE (5*1024)
#define M3_RDR_LITTLE_CLUSTER_PROFILE_ADDR (M3_RDR_DDR_MNTN_ADDR + M3_RDR_DDR_MNTN_SIZE)
#define M3_RDR_LITTLE_CLUSTER_PROFILE_SIZE (0X200)
#define M3_RDR_BIG_CLUSTER_PROFILE_ADDR (M3_RDR_LITTLE_CLUSTER_PROFILE_ADDR + M3_RDR_LITTLE_CLUSTER_PROFILE_SIZE)
#define M3_RDR_BIG_CLUSTER_PROFILE_SIZE (0X200)
#define M3_RDR_GPU_BASE_PROFILE_ADDR (M3_RDR_BIG_CLUSTER_PROFILE_ADDR + M3_RDR_BIG_CLUSTER_PROFILE_SIZE)
#define M3_RDR_GPU_BASE_PROFILE_SIZE (0X200)
#define M3_RDR_GIC_REG_ADDR (M3_RDR_GPU_BASE_PROFILE_ADDR + M3_RDR_GPU_BASE_PROFILE_SIZE)
#define M3_RDR_GIC_REG_SIZE (0x7000)
#define M3_RDR_SYS_CONTEXT_RESERVED_ADDR (M3_RDR_GIC_REG_ADDR + M3_RDR_GIC_REG_SIZE)
#if ( (M3_RDR_SYS_CONTEXT_RESERVED_ADDR) > (M3_RDR_SYS_CONTEXT_BASE_ADDR+0x20000))
#error "rdr space overflow! please reorganize the rdr space"
#endif
#define M3_RDR_SYS_CONTEXT_M3_IMAGE_ADDR (M3_RDR_SYS_CONTEXT_BASE_ADDR+0x20000)
#define M3_RDR_SYS_CONTEXT_M3_IMAGE_SIZE (0x20000)
#endif
