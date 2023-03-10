;/**
; *******************************************************************************
; * @file    startup_TMPM4GR.s
; * @brief   CMSIS Cortex-M4 Core Device Startup File for the
; *          TOSHIBA 'TMPM4GR' Device Series
; * @version V1.0.0
; *------- <<< Use Configuration Wizard in Context Menu >>> ------------------
; * 
; * DO NOT USE THIS SOFTWARE WITHOUT THE SOFTWARE LICENSE AGREEMENT.
; * 
; * Copyright(C) Toshiba Electronic Device Solutions Corporation 2020
; *******************************************************************************
; */
.syntax unified
.arch    armv7-m

.section .stack
.align 3

/*
// <h> Stack Configuration
//   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
// </h>
*/

#ifdef __STACK_SIZE
.equ    Stack_Size, __STACK_SIZE
#else
.equ    Stack_Size, 0x400
#endif
.globl    __StackTop
.globl    __StackLimit
__StackLimit:
.space    Stack_Size
.size __StackLimit, . - __StackLimit
__StackTop:
.size __StackTop, . - __StackTop

/*
// <h> Heap Configuration
//   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
// </h>
*/

.section .heap
.align 3
#ifdef __HEAP_SIZE
.equ    Heap_Size, __HEAP_SIZE
#else
.equ    Heap_Size, 0
#endif
.globl    __HeapBase
.globl    __HeapLimit
__HeapBase:
.if    Heap_Size
.space    Heap_Size
.endif
.size __HeapBase, . - __HeapBase
__HeapLimit:
.size __HeapLimit, . - __HeapLimit

    .section .vectors
    .align 2
    .globl    __Vectors
__Vectors:
    .long   __StackTop                  /* Top of Stack          */
    .long   Reset_Handler              /* Reset Handler         */
    .long   NMI_Handler                /* NMI Handler           */
    .long   HardFault_Handler          /* Hard Fault Handler    */
    .long   MemManage_Handler          /* MPU Fault Handler     */
    .long   BusFault_Handler           /* Bus Fault Handler     */
    .long   UsageFault_Handler         /* Usage Fault Handler   */
    .long   0                          /* Reserved              */
    .long   0                          /* Reserved              */
    .long   0                          /* Reserved              */
    .long   0                          /* Reserved              */
    .long   SVC_Handler                /* SVCall Handler        */
    .long   DebugMon_Handler           /* Debug Monitor Handler */
    .long   0                          /* Reserved              */
    .long   PendSV_Handler             /* PendSV Handler        */
    .long   SysTick_Handler            /* SysTick Handler       */

    /* External interrupts */
    .long     INT00_IRQHandler          // 0:	Interrupt pin 00a/00b
    .long     INT01_IRQHandler          // 1:	Interrupt pin 01a/00b
    .long     INT02_IRQHandler          // 2:	Interrupt pin 02a/00b
    .long     INT03_IRQHandler          // 3:	Interrupt pin 03a/03b
    .long     INT04_IRQHandler          // 4:	Interrupt pin 04a/04b
    .long     INT05_IRQHandler          // 5:	Interrupt pin 05a/05b
    .long     INT06_IRQHandler          // 6:	Interrupt pin 06a/06b
    .long     INT07_IRQHandler          // 7:	Interrupt pin 07a/07b
    .long     INT08_IRQHandler          // 8:	Interrupt pin 08a/08b
    .long     INT09_IRQHandler          // 9:	Interrupt pin 09a/09b
    .long     INT10_IRQHandler          // 10:	Interrupt pin 10a/10b
    .long     INT11_IRQHandler          // 11:	Interrupt pin 11a/11b
    .long     INT12_IRQHandler          // 12:	Interrupt pin 12a/12b
    .long     INT13_IRQHandler          // 13:	Interrupt pin 13a/13b
    .long     INT14_IRQHandler          // 14:	Interrupt pin 14a/14b
    .long     INT15_IRQHandler          // 15:	Interrupt pin 15a/15b
    .long     INTRTC_IRQHandler         // 16:	Real time clock(XHz) interrupt
    .long     INTCEC0RX_IRQHandler      // 17:	CEC reception interrupt (channel 0)
    .long     INTCEC0TX_IRQHandler      // 18:	CEC transmission interrupt (channel 0)
    .long     INTISDA_IRQHandler        // 19:	Interval Sensing Detector interrupt (Unit A)
    .long     INTISDB_IRQHandler        // 20:	Interval Sensing Detector interrupt (Unit B)
    .long     INTISDC_IRQHandler        // 21:	Interval Sensing Detector interrupt (Unit C)
    .long     INTRMC0_IRQHandler        // 22:	Remote control reception interrupt 0
    .long     INTRMC1_IRQHandler        // 23:	Remote control reception interrupt 1
    .long     INTLTTMR0_IRQHandler      // 24:	Long Term Timer Interrupt(channel 0)
    .long     INTHDMAATC_IRQHandler     // 25:	HDMA complete of transfer(Unit A)
    .long     INTHDMAAERR_IRQHandler    // 26:	HDMA transfer error(Unit A)
    .long     INTHDMABTC_IRQHandler     // 27:	HDMA end of transfer(Unit B)
    .long     INTHDMABERR_IRQHandler    // 28:	HDMA transfer error(Unit B)
    .long     INTMDMAATC_IRQHandler     // 29:	MDMA complete of transfer(Unit A)
    .long     INTT32A00_A_CT_IRQHandler // 30:	T32A00 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A00_B_C01_CPC_IRQHandler// 31:	T32A00 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A01_A_CT_IRQHandler // 32:	T32A01 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A01_B_C01_CPC_IRQHandler// 33:	T32A01 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A02_A_CT_IRQHandler // 34:	T32A02 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A02_B_C01_CPC_IRQHandler// 35:	T32A02 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A03_A_CT_IRQHandler // 36:	T32A03 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A03_B_C01_CPC_IRQHandler// 37:	T32A03 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A04_A_CT_IRQHandler // 38:	T32A04 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A04_B_C01_CPC_IRQHandler// 39:	T32A04 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A05_A_CT_IRQHandler // 40:	T32A05 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A05_B_C01_CPC_IRQHandler// 41:	T32A05 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A06_A_CT_IRQHandler // 42:	T32A06 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A06_B_C01_CPC_IRQHandler// 43:	T32A06 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A07_A_CT_IRQHandler // 44:	T32A07 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A07_B_C01_CPC_IRQHandler// 45:	T32A07 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A08_A_CT_IRQHandler // 46:	T32A08 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A08_B_C01_CPC_IRQHandler// 47:	T32A08 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A09_A_CT_IRQHandler // 48:	T32A09 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A09_B_C01_CPC_IRQHandler// 49:	T32A09 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A10_A_CT_IRQHandler // 50:	T32A10 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A10_B_C01_CPC_IRQHandler// 51:	T32A10 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A11_A_CT_IRQHandler // 52:	T32A11 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A11_B_C01_CPC_IRQHandler// 53:	T32A11 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A12_A_CT_IRQHandler // 54:	T32A12 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A12_B_C01_CPC_IRQHandler// 55:	T32A12 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTT32A13_A_CT_IRQHandler // 56:	T32A13 TimerA all interrupt /TimerC match, overflow, and underflow
    .long     INTT32A13_B_C01_CPC_IRQHandler// 57:	T32A13 TimerB all interrupt /TimerC capture C0_C1, pulse count interrupt
    .long     INTEMG0_IRQHandler        // 58:	PMD0 EMG interrupt
    .long     INTOVV0_IRQHandler        // 59:	PMD0 OVV interrupt
    .long     INTPWM0_IRQHandler        // 60:	PMD0 interrupt
    .long     INTT0RX_IRQHandler        // 61:	TSPI/SIO reception (channel 0) interrupt
    .long     INTT0TX_IRQHandler        // 62:	TSPI/SIO transmit (channel 0) interrupt
    .long     INTT0ERR_IRQHandler       // 63:	TSPI/SIO error (channel 0) interrupt
    .long     INTT1RX_IRQHandler        // 64:	TSPI/SIO reception (channel 1) interrupt
    .long     INTT1TX_IRQHandler        // 65:	TSPI/SIO transmit (channel 1) interrupt
    .long     INTT1ERR_IRQHandler       // 66:	TSPI/SIO error (channel 1) interrupt
    .long     INTT2RX_IRQHandler        // 67:	TSPI/SIO reception (channel 2) interrupt
    .long     INTT2TX_IRQHandler        // 68:	TSPI/SIO transmit (channel 2) interrupt
    .long     INTT2ERR_IRQHandler       // 69:	TSPI/SIO error (channel 2) interrupt
    .long     INTT3RX_IRQHandler        // 70:	TSPI/SIO reception (channel 3) interrupt
    .long     INTT3TX_IRQHandler        // 71:	TSPI/SIO transmit (channel 3) interrupt
    .long     INTT3ERR_IRQHandler       // 72:	TSPI/SIO error (channel 3) interrupt
    .long     INTT4RX_IRQHandler        // 73:	TSPI/SIO reception (channel 4) interrupt
    .long     INTT4TX_IRQHandler        // 74:	TSPI/SIO transmit (channel 4) interrupt
    .long     INTT4ERR_IRQHandler       // 75:	TSPI/SIO error (channel 4) interrupt
    .long     INTT5RX_IRQHandler        // 76:	TSPI/SIO reception (channel 5) interrupt
    .long     INTT5TX_IRQHandler        // 77:	TSPI/SIO transmit (channel 5) interrupt
    .long     INTT5ERR_IRQHandler       // 78:	TSPI/SIO error (channel 5) interrupt
    .long     INTT6RX_IRQHandler        // 79:	TSPI/SIO reception (channel 6) interrupt
    .long     INTT6TX_IRQHandler        // 80:	TSPI/SIO transmit (channel 6) interrupt
    .long     INTT6ERR_IRQHandler       // 81:	TSPI/SIO error (channel 6) interrupt
    .long     INTT7RX_IRQHandler        // 82:	TSPI/SIO reception (channel 7) interrupt
    .long     INTT7TX_IRQHandler        // 83:	TSPI/SIO transmit (channel 7) interrupt
    .long     INTT7ERR_IRQHandler       // 84:	TSPI/SIO error (channel 7) interrupt
    .long     INTT8RX_IRQHandler        // 85:	TSPI/SIO reception (channel 8) interrupt
    .long     INTT8TX_IRQHandler        // 86:	TSPI/SIO transmit (channel 8) interrupt
    .long     INTT8ERR_IRQHandler       // 87:	TSPI/SIO error (channel 8) interrupt
    .long     INTSMI0_IRQHandler        // 88:	Serial Memory Interface interrupt
    .long     INTUART0RX_IRQHandler     // 89:	UART reception (channel 0) interrupt
    .long     INTUART0TX_IRQHandler     // 90:	UART transmit (channel 0) interrupt
    .long     INTUART0ERR_IRQHandler    // 91:	UART error (channel 0) interrupt
    .long     INTUART1RX_IRQHandler     // 92:	UART reception (channel 1) interrupt
    .long     INTUART1TX_IRQHandler     // 93:	UART transmit (channel 1) interrupt
    .long     INTUART1ERR_IRQHandler    // 94:	UART error (channel 1) interrupt
    .long     INTUART2RX_IRQHandler     // 95:	UART reception (channel 2) interrupt
    .long     INTUART2TX_IRQHandler     // 96:	UART transmit (channel 2) interrupt
    .long     INTUART2ERR_IRQHandler    // 97:	UART error (channel 2) interrupt
    .long     INTUART3RX_IRQHandler     // 98:	UART reception (channel 3) interrupt
    .long     INTUART3TX_IRQHandler     // 99:	UART transmit (channel 3) interrupt
    .long     INTUART3ERR_IRQHandler    // 100:	UART error (channel 3) interrupt
    .long     INTUART4RX_IRQHandler     // 101:	UART reception (channel 4) interrupt
    .long     INTUART4TX_IRQHandler     // 102:	UART transmit (channel 4) interrupt
    .long     INTUART4ERR_IRQHandler    // 103:	UART error (channel 4) interrupt
    .long     INTUART5RX_IRQHandler     // 104:	UART reception (channel 5) interrupt
    .long     INTUART5TX_IRQHandler     // 105:	UART transmit (channel 5) interrupt
    .long     INTUART5ERR_IRQHandler    // 106:	UART error (channel 5) interrupt
    .long     INTFUART0_IRQHandler      // 107:	FUART interrupt(channel 0)
    .long     INTFUART1_IRQHandler      // 108:	FUART interrupt(channel 1)
    .long     INTI2C0NST_IRQHandler     // 109:	I2C0 interrupt / EI2C0 status interrupt
    .long     INTI2C0ATX_IRQHandler     // 110:	I2C0 arbitration lost detection interrupt / EI2C0 transmit buffer empty interrupt
    .long     INTI2C0BRX_IRQHandler     // 111:	I2C0 bus free detection interrupt / EI2C0receive buffer empty interrupt
    .long     INTI2C0NA_IRQHandler      // 112:	I2C0 NACK detection interrupt
    .long     INTI2C1NST_IRQHandler     // 113:	I2C1 interrupt / EI2C0 status interrupt
    .long     INTI2C1ATX_IRQHandler     // 114:	I2C1 arbitration lost detection interrupt / EI2C0 transmit buffer empty interrupt
    .long     INTI2C1BRX_IRQHandler     // 115:	I2C1 bus free detection interrupt / EI2C0receive buffer empty interrupt
    .long     INTI2C1NA_IRQHandler      // 116:	I2C1 NACK detection interrupt
    .long     INTI2C2NST_IRQHandler     // 117:	I2C2 interrupt / EI2C0 status interrupt
    .long     INTI2C2ATX_IRQHandler     // 118:	I2C2 arbitration lost detection interrupt / EI2C0 transmit buffer empty interrupt
    .long     INTI2C2BRX_IRQHandler     // 119:	I2C2 bus free detection interrupt / EI2C0receive buffer empty interrupt
    .long     INTI2C2NA_IRQHandler      // 120:	I2C2 NACK detection interrupt
    .long     INTI2C3NST_IRQHandler     // 121:	I2C3 interrupt / EI2C0 status interrupt
    .long     INTI2C3ATX_IRQHandler     // 122:	I2C3 arbitration lost detection interrupt / EI2C0 transmit buffer empty interrupt
    .long     INTI2C3BRX_IRQHandler     // 123:	I2C3 bus free detection interrupt / EI2C0receive buffer empty interrupt
    .long     INTI2C3NA_IRQHandler      // 124:	I2C3 NACK detection interrupt
    .long     INTI2C4NST_IRQHandler     // 125:	I2C4 interrupt / EI2C0 status interrupt
    .long     INTI2C4ATX_IRQHandler     // 126:	I2C4 arbitration lost detection interrupt / EI2C0 transmit buffer empty interrupt
    .long     INTI2C4BRX_IRQHandler     // 127:	I2C4 bus free detection interrupt / EI2C0receive buffer empty interrupt
    .long     INTI2C4NA_IRQHandler      // 128:	I2C4 NACK detection interrupt
    .long     INTADACP0_IRQHandler      // 129:	ADC conversion monitoring function interrupt 0
    .long     INTADACP1_IRQHandler      // 130:	ADC conversion monitoring function interrupt 1
    .long     INTADATRG_IRQHandler      // 131:	ADC conversion triggered by General purpose is finished
    .long     INTADASGL_IRQHandler      // 132:	ADC conversion triggered by Single program is finished
    .long     INTADACNT_IRQHandler      // 133:	ADC conversion triggered by Continuity program is finished
    .long     INTADAHP_IRQHandler       // 134:	ADC high priority AD conversion interrupt
    .long     INTFLDRDY_IRQHandler      // 135:	Data FLASH Ready interrupt
    .long     INTFLCRDY_IRQHandler      // 136:	Code FLASH Area0/1 Ready interrupt
    .long     0                         // 137:	Reserved
    .long     0                         // 138:	Reserved
    .long     INTMDMAABERR_IRQHandler   // 139:	MDMA bus error(Unit A) interrupt
    .long     INTMDMAADERR_IRQHandler   // 140:	MDMA descriptor error(Unit A) interrupt
    .long     INTI2S0SI_IRQHandler      // 141:	I2S ch0 SI transfer end interrupt
    .long     INTI2S0SIERR_IRQHandler   // 142:	I2S ch0 SI error interrupt
    .long     INTI2S0SO_IRQHandler      // 143:	I2S ch0 SO transfer end interrupt
    .long     INTI2S0SOERR_IRQHandler   // 144:	I2S ch0 SO error interrupt
    .long     INTI2S1SI_IRQHandler      // 145:	I2S ch1 SI transfer end interrupt
    .long     INTI2S1SIERR_IRQHandler   // 146:	I2S ch1 SI error interrupt
    .long     INTI2S1SO_IRQHandler      // 147:	I2S ch1 SO transfer end interrupt
    .long     INTI2S1SOERR_IRQHandler   // 148:	I2S ch1 SO error interrupt
    .long     INTFIR0_IRQHandler        // 149:	FIR ch0 interrupt
    .long     INTTSSI0RX_IRQHandler     // 150:	TSSI ch0 receive interrupt
    .long     INTTSSI0TX_IRQHandler     // 151:	TSSI ch0 transmission interrupt
    .long     INTTSSI0ERR_IRQHandler    // 152:	TSSI ch0 error interrupt
    .long     INTTSSI1RX_IRQHandler     // 153:	TSSI ch1 receive interrupt
    .long     INTTSSI1TX_IRQHandler     // 154:	TSSI ch1 transmission interrupt
    .long     INTTSSI1ERR_IRQHandler    // 155:	TSSI ch1 error interrupt
    .long     0                         // 156:	Reserved
    .long     0                         // 157:	Reserved
    .long     0                         // 158:	Reserved
    .long     0                         // 159:	Reserved
    .long     0                         // 160:	Reserved
    .long     0                         // 161:	Reserved
    .long     0                         // 162:	Reserved
    .long     0                         // 163:	Reserved
    .long     0                         // 164:	Reserved
    .long     0                         // 165:	Reserved
    .long     0                         // 166:	Reserved
    .long     0                         // 167:	Reserved
    .long     INTT32A14_A_IRQHandler    // 168:	T32A14 TimerA all interrupt
    .long     INTT32A14_B_IRQHandler    // 169:	T32A14 TimerB all interrupt
    .long     INTT32A14_CT_IRQHandler   // 170:	T32A14 TimerC match, overflow, and underflow Interrupt
    .long     INTT32A15_A_IRQHandler    // 171:	T32A15 TimerA all interrupt
    .long     INTT32A15_B_IRQHandler    // 172:	T32A15 TimerB all interrupt
    .long     INTT32A15_C_IRQHandler    // 173:	T32A15 TimerC all interrupt
    .long     INTMDMAADISR_IRQHandler   // 174:	MDMAC unit A Descriptor interrupt		
	                                        
    .size    __Vectors, . - __Vectors

    .text
    .thumb
    .thumb_func
    .align    2
    .globl    Reset_Handler
    .type    Reset_Handler, %function
Reset_Handler:
/*  Firstly it copies data from read only memory to RAM. There are two schemes
 *  to copy. One can copy more than one sections. Another can only copy
 *  one section.  The former scheme needs more instructions and read-only
 *  data to implement than the latter.
 *  Macro __STARTUP_COPY_MULTIPLE is used to choose between two schemes.  */

#ifdef __STARTUP_COPY_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of triplets, each of which specify:
 *    offset 0: LMA of start of a section to copy from
 *    offset 4: VMA of start of a section to copy to
 *    offset 8: size of the section to copy. Must be multiply of 4
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
    ldr    r4, =__copy_table_start__
    ldr    r5, =__copy_table_end__

.L_loop0:
    cmp    r4, r5
    bge    .L_loop0_done
    ldr    r1, [r4]
    ldr    r2, [r4, #4]
    ldr    r3, [r4, #8]

.L_loop0_0:
    subs    r3, #4
    ittt    ge
    ldrge    r0, [r1, r3]
    strge    r0, [r2, r3]
    bge    .L_loop0_0

    adds    r4, #12
    b    .L_loop0

.L_loop0_done:
#else
/*  Single section scheme.
 *
 *  The ranges of copy from/to are specified by following symbols
 *    __etext: LMA of start of the section to copy from. Usually end of text
 *    __data_start__: VMA of start of the section to copy to
 *    __data_end__: VMA of end of the section to copy to
 *
 *  All addresses must be aligned to 4 bytes boundary.
 */
    ldr    r1, =__etext
    ldr    r2, =__data_start__
    ldr    r3, =__data_end__

.L_loop1:
    cmp    r2, r3
    ittt    lt
    ldrlt    r0, [r1], #4
    strlt    r0, [r2], #4
    blt    .L_loop1
#endif /*__STARTUP_COPY_MULTIPLE */

/*  This part of work usually is done in C library startup code. Otherwise,
 *  define this macro to enable it in this startup.
 *
 *  There are two schemes too. One can clear multiple BSS sections. Another
 *  can only clear one section. The former is more size expensive than the
 *  latter.
 *
 *  Define macro __STARTUP_CLEAR_BSS_MULTIPLE to choose the former.
 *  Otherwise efine macro __STARTUP_CLEAR_BSS to choose the later.
 */
#ifdef __STARTUP_CLEAR_BSS_MULTIPLE
/*  Multiple sections scheme.
 *
 *  Between symbol address __copy_table_start__ and __copy_table_end__,
 *  there are array of tuples specifying:
 *    offset 0: Start of a BSS section
 *    offset 4: Size of this BSS section. Must be multiply of 4
 */
    ldr    r3, =__zero_table_start__
    ldr    r4, =__zero_table_end__

.L_loop2:
    cmp    r3, r4
    bge    .L_loop2_done
    ldr    r1, [r3]
    ldr    r2, [r3, #4]
    movs    r0, 0

.L_loop2_0:
    subs    r2, #4
    itt    ge
    strge    r0, [r1, r2]
    bge    .L_loop2_0

    adds    r3, #8
    b    .L_loop2
.L_loop2_done:
#elif defined (__STARTUP_CLEAR_BSS)
/*  Single BSS section scheme.
 *
 *  The BSS section is specified by following symbols
 *    __bss_start__: start of the BSS section.
 *    __bss_end__: end of the BSS section.
 *
 *  Both addresses must be aligned to 4 bytes boundary.
 */
    ldr    r1, =__bss_start__
    ldr    r2, =__bss_end__

    movs    r0, 0
.L_loop3:
    cmp    r1, r2
    itt    lt
    strlt    r0, [r1], #4
    blt    .L_loop3
#endif /* __STARTUP_CLEAR_BSS_MULTIPLE || __STARTUP_CLEAR_BSS */

#ifndef __NO_SYSTEM_INIT
    bl    SystemInit
#endif

#ifndef __START
#define __START _start
#endif
    bl    __START

    .pool
    .size    Reset_Handler, . - Reset_Handler

    .align    1
    .thumb_func
    .weak    Default_Handler
    .type    Default_Handler, %function
Default_Handler:
    b    .
    .size    Default_Handler, . - Default_Handler

/*    Macro to define default handlers. Default handler
 *    will be weak symbol and just dead loops. They can be
 *    overwritten by other handlers */
    .macro    def_irq_handler    handler_name
    .weak    \handler_name
    .set    \handler_name, Default_Handler
    .endm

    def_irq_handler     NMI_Handler
    def_irq_handler     HardFault_Handler
    def_irq_handler     MemManage_Handler
    def_irq_handler     BusFault_Handler
    def_irq_handler     UsageFault_Handler
    def_irq_handler     SVC_Handler
    def_irq_handler     DebugMon_Handler
    def_irq_handler     PendSV_Handler
    def_irq_handler     SysTick_Handler

    def_irq_handler    INT00_IRQHandler          
    def_irq_handler    INT01_IRQHandler          
    def_irq_handler    INT02_IRQHandler          
    def_irq_handler    INT03_IRQHandler          
    def_irq_handler    INT04_IRQHandler          
    def_irq_handler    INT05_IRQHandler          
    def_irq_handler    INT06_IRQHandler          
    def_irq_handler    INT07_IRQHandler          
    def_irq_handler    INT08_IRQHandler          
    def_irq_handler    INT09_IRQHandler          
    def_irq_handler    INT10_IRQHandler          
    def_irq_handler    INT11_IRQHandler          
    def_irq_handler    INT12_IRQHandler          
    def_irq_handler    INT13_IRQHandler          
    def_irq_handler    INT14_IRQHandler          
    def_irq_handler    INT15_IRQHandler          
    def_irq_handler    INTRTC_IRQHandler         
    def_irq_handler    INTCEC0RX_IRQHandler      
    def_irq_handler    INTCEC0TX_IRQHandler      
    def_irq_handler    INTISDA_IRQHandler        
    def_irq_handler    INTISDB_IRQHandler        
    def_irq_handler    INTISDC_IRQHandler        
    def_irq_handler    INTRMC0_IRQHandler        
    def_irq_handler    INTRMC1_IRQHandler        
    def_irq_handler    INTLTTMR0_IRQHandler      
    def_irq_handler    INTHDMAATC_IRQHandler     
    def_irq_handler    INTHDMAAERR_IRQHandler    
    def_irq_handler    INTHDMABTC_IRQHandler     
    def_irq_handler    INTHDMABERR_IRQHandler    
    def_irq_handler    INTMDMAATC_IRQHandler     
    def_irq_handler    INTT32A00_A_CT_IRQHandler 
    def_irq_handler    INTT32A00_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A01_A_CT_IRQHandler 
    def_irq_handler    INTT32A01_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A02_A_CT_IRQHandler 
    def_irq_handler    INTT32A02_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A03_A_CT_IRQHandler 
    def_irq_handler    INTT32A03_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A04_A_CT_IRQHandler 
    def_irq_handler    INTT32A04_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A05_A_CT_IRQHandler 
    def_irq_handler    INTT32A05_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A06_A_CT_IRQHandler 
    def_irq_handler    INTT32A06_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A07_A_CT_IRQHandler 
    def_irq_handler    INTT32A07_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A08_A_CT_IRQHandler 
    def_irq_handler    INTT32A08_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A09_A_CT_IRQHandler 
    def_irq_handler    INTT32A09_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A10_A_CT_IRQHandler 
    def_irq_handler    INTT32A10_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A11_A_CT_IRQHandler 
    def_irq_handler    INTT32A11_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A12_A_CT_IRQHandler 
    def_irq_handler    INTT32A12_B_C01_CPC_IRQHandler
    def_irq_handler    INTT32A13_A_CT_IRQHandler 
    def_irq_handler    INTT32A13_B_C01_CPC_IRQHandler
    def_irq_handler    INTEMG0_IRQHandler        
    def_irq_handler    INTOVV0_IRQHandler        
    def_irq_handler    INTPWM0_IRQHandler        
    def_irq_handler    INTT0RX_IRQHandler        
    def_irq_handler    INTT0TX_IRQHandler        
    def_irq_handler    INTT0ERR_IRQHandler       
    def_irq_handler    INTT1RX_IRQHandler        
    def_irq_handler    INTT1TX_IRQHandler        
    def_irq_handler    INTT1ERR_IRQHandler       
    def_irq_handler    INTT2RX_IRQHandler        
    def_irq_handler    INTT2TX_IRQHandler        
    def_irq_handler    INTT2ERR_IRQHandler       
    def_irq_handler    INTT3RX_IRQHandler        
    def_irq_handler    INTT3TX_IRQHandler        
    def_irq_handler    INTT3ERR_IRQHandler       
    def_irq_handler    INTT4RX_IRQHandler        
    def_irq_handler    INTT4TX_IRQHandler        
    def_irq_handler    INTT4ERR_IRQHandler       
    def_irq_handler    INTT5RX_IRQHandler        
    def_irq_handler    INTT5TX_IRQHandler        
    def_irq_handler    INTT5ERR_IRQHandler       
    def_irq_handler    INTT6RX_IRQHandler        
    def_irq_handler    INTT6TX_IRQHandler        
    def_irq_handler    INTT6ERR_IRQHandler       
    def_irq_handler    INTT7RX_IRQHandler        
    def_irq_handler    INTT7TX_IRQHandler        
    def_irq_handler    INTT7ERR_IRQHandler       
    def_irq_handler    INTT8RX_IRQHandler        
    def_irq_handler    INTT8TX_IRQHandler        
    def_irq_handler    INTT8ERR_IRQHandler       
    def_irq_handler    INTSMI0_IRQHandler        
    def_irq_handler    INTUART0RX_IRQHandler     
    def_irq_handler    INTUART0TX_IRQHandler     
    def_irq_handler    INTUART0ERR_IRQHandler    
    def_irq_handler    INTUART1RX_IRQHandler     
    def_irq_handler    INTUART1TX_IRQHandler     
    def_irq_handler    INTUART1ERR_IRQHandler    
    def_irq_handler    INTUART2RX_IRQHandler     
    def_irq_handler    INTUART2TX_IRQHandler     
    def_irq_handler    INTUART2ERR_IRQHandler    
    def_irq_handler    INTUART3RX_IRQHandler     
    def_irq_handler    INTUART3TX_IRQHandler     
    def_irq_handler    INTUART3ERR_IRQHandler    
    def_irq_handler    INTUART4RX_IRQHandler     
    def_irq_handler    INTUART4TX_IRQHandler     
    def_irq_handler    INTUART4ERR_IRQHandler    
    def_irq_handler    INTUART5RX_IRQHandler     
    def_irq_handler    INTUART5TX_IRQHandler     
    def_irq_handler    INTUART5ERR_IRQHandler    
    def_irq_handler    INTFUART0_IRQHandler      
    def_irq_handler    INTFUART1_IRQHandler      
    def_irq_handler    INTI2C0NST_IRQHandler     
    def_irq_handler    INTI2C0ATX_IRQHandler     
    def_irq_handler    INTI2C0BRX_IRQHandler     
    def_irq_handler    INTI2C0NA_IRQHandler      
    def_irq_handler    INTI2C1NST_IRQHandler     
    def_irq_handler    INTI2C1ATX_IRQHandler     
    def_irq_handler    INTI2C1BRX_IRQHandler     
    def_irq_handler    INTI2C1NA_IRQHandler      
    def_irq_handler    INTI2C2NST_IRQHandler     
    def_irq_handler    INTI2C2ATX_IRQHandler     
    def_irq_handler    INTI2C2BRX_IRQHandler     
    def_irq_handler    INTI2C2NA_IRQHandler      
    def_irq_handler    INTI2C3NST_IRQHandler     
    def_irq_handler    INTI2C3ATX_IRQHandler     
    def_irq_handler    INTI2C3BRX_IRQHandler     
    def_irq_handler    INTI2C3NA_IRQHandler      
    def_irq_handler    INTI2C4NST_IRQHandler     
    def_irq_handler    INTI2C4ATX_IRQHandler     
    def_irq_handler    INTI2C4BRX_IRQHandler     
    def_irq_handler    INTI2C4NA_IRQHandler      
    def_irq_handler    INTADACP0_IRQHandler      
    def_irq_handler    INTADACP1_IRQHandler      
    def_irq_handler    INTADATRG_IRQHandler      
    def_irq_handler    INTADASGL_IRQHandler      
    def_irq_handler    INTADACNT_IRQHandler      
    def_irq_handler    INTADAHP_IRQHandler       
    def_irq_handler    INTFLDRDY_IRQHandler      
    def_irq_handler    INTFLCRDY_IRQHandler      
    def_irq_handler    INTMDMAABERR_IRQHandler   
    def_irq_handler    INTMDMAADERR_IRQHandler   
    def_irq_handler    INTI2S0SI_IRQHandler      
    def_irq_handler    INTI2S0SIERR_IRQHandler   
    def_irq_handler    INTI2S0SO_IRQHandler      
    def_irq_handler    INTI2S0SOERR_IRQHandler   
    def_irq_handler    INTI2S1SI_IRQHandler      
    def_irq_handler    INTI2S1SIERR_IRQHandler   
    def_irq_handler    INTI2S1SO_IRQHandler      
    def_irq_handler    INTI2S1SOERR_IRQHandler   
    def_irq_handler    INTFIR0_IRQHandler        
    def_irq_handler    INTTSSI0RX_IRQHandler     
    def_irq_handler    INTTSSI0TX_IRQHandler     
    def_irq_handler    INTTSSI0ERR_IRQHandler    
    def_irq_handler    INTTSSI1RX_IRQHandler                          
    def_irq_handler    INTTSSI1TX_IRQHandler     
    def_irq_handler    INTTSSI1ERR_IRQHandler                   
    def_irq_handler    INTT32A14_A_IRQHandler    
    def_irq_handler    INTT32A14_B_IRQHandler    
    def_irq_handler    INTT32A14_CT_IRQHandler   
    def_irq_handler    INTT32A15_A_IRQHandler    
    def_irq_handler    INTT32A15_B_IRQHandler    
    def_irq_handler    INTT32A15_C_IRQHandler    
    def_irq_handler    INTMDMAADISR_IRQHandler   
	
	.end
