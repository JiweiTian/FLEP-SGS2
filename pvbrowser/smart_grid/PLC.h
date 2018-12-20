// Modbus Signal assignment of PLC
#define PLC_SHARED_MEMORY "/srv/automation/shm/modbusPLC.shm"
#define PLC_MAILBOX "/srv/automation/mbx/modbusPLC.mbx"

#define PLC_CYCLE1_BASE 0
#define PLC_CYCLE1_NUM 5
#define PLC_CYCLE1_NUM_BYTES 1

#define PLC_CYCLE2_BASE 1
#define PLC_CYCLE2_NUM 2
#define PLC_CYCLE2_NUM_BYTES 1

#define PLC_CYCLE3_BASE 2
#define PLC_CYCLE3_NUM 1
#define PLC_CYCLE3_NUM_BYTES 2

#define PLC_LIFE_COUNTER_BASE 4
#define PLC_READ_ERROR_COUNT_BASE 6
#define PLC_WRITE_ERROR_COUNT_BASE 8

#define PLC_SHARED_MEMORY_SIZE 10
