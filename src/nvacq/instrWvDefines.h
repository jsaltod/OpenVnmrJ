/*
 * Copyright (C) 2015  University of Oregon
 *
 * You may distribute under the terms of either the GNU General Public
 * License or the Apache License, as specified in the LICENSE file.
 *
 * For more information, see the LICENSE file.
 */
/*
 */
/* #define _POSIX_SOURCE /* defined when source is wanting to be POSIX-compliant */
/* #define _SYSV_SOURCE /* defined when source is System V */
/* #ifdef __STDC__ /* used to determine if using an ANSI compiler */


#ifndef INCinstrWvDefinesh
#define INCinstrWvDefinesh

/* FIFO WINDVIEW EVENTS */
#define EVENT_FIFO_WRDBUF	1000
#define EVENT_FIFO_AMFULL	1
#define EVENT_FIFO_AMMT		2
#define EVENT_FIFOSTART		3
#define EVENT_FIFO_STOP		4
#define EVENT_FIFO_UNDERFLOW	5
#define EVENT_FIFOSTRTEMPTY	6
#define EVENT_FIFOSTRTHALT	7
/* #define EVENT_NETBLERROR	8 */
#define EVENT_BASEISR_START	8
/* #define EVENT_FORPERROR		9 */
#define EVENT_BASEISR_END	9
#define EVENT_FIFOSTARTONSYNC	10
#define EVENT_FIFORESET		11
#define EVENT_FIFO_NETBAP	12
#define EVENT_APTIMEOUT		13
#define EVENT_FIFO_TAGITRP	14
#define EVENT_APFIFO		15
#define EVENT_FIFO_WT4STOP	16
#define EVENT_FIFO_WT4STOPITR	17
#define EVENT_FIFO_NOSTUFF	18
#define EVENT_FIFO_CLRNOSTUFF   19
#define EVENT_FIFO_OVERFLOW     20
#define EVENT_FIFO_SW1_ITR      21
#define EVENT_FIFO_SW2_ITR      22
#define EVENT_FIFO_SW3_ITR      23
#define EVENT_FIFO_SW4_ITR      24
#define EVENT_FIFO_FAILURE      25
#define EVENT_FIFO_WARNING      26

/* STM WINDVIEW EVENTS */
#define EVENT_STM_ALLOC_BLKS		2000
#define EVENT_STM_CT_COMPLETE		40
#define EVENT_STM_IMMEDIATE		41
#define EVENT_STM_NP_INCOMPLETE		42
#define EVENT_STM_MAX_SUM		43
#define EVENT_STM_ALLOC_BLK		44
#define EVENT_STM_RESET			45
#define EVENT_STM_PSEUDO_CT		46
#define EVENT_ADM_OVERFLOW		47
#define EVENT_ADM_OVRFLW_CLR		48
#define EVENT_STM_MUTEX_TAKE		701
#define EVENT_STM_MUTEX_GIVE		702

/* ADC WINDVIEW EVENTS */
#define EVENT_ADC_OVERFLOW		50
#define EVENT_RCV_OVERFLOW		51
#define EVENT_ADC_RESET			52
#define EVENT_ADC_OVEFLW_CLR		53



/* namebufs  WINDVIEW EVENTS */
#define EVENT_MBUF_TBL			3000
#define EVENT_NAMECLBUF_FREELIST	4000
#define EVENT_NAMECLBUF_HASHLIST	5000
#define EVENT_NAMEBUF_MAKEENTRY		60
#define EVENT_NAMEBUF_FREE		61
#define EVENT_NAMEBUF_FINDENTRY_PEND	62
#define EVENT_NAMEBUF_MAKEENTRY_PEND	63

/* rngXBlkLib  WINDVIEW EVENTS */
#define EVENT_RNGX_PUTBLOCK		96
#define EVENT_RNGX_PUTFREED		97
#define EVENT_RNGX_GETBLOCK		98
#define EVENT_RNGX_GETFREED		99

/* PARSER   WINDVIEW EVENTS */
#define EVENT_INTRP_UPDATE		70	/* Acode Update */
#define EVENT_INTRP_SUSPEND		71	/* Suspend Parser, i.e. shandler activity */
#define EVENT_PARSEAHEAD_SEMRESET	73
#define EVENT_PARSEAHEAD_CNTRESET	74
#define EVENT_PARSEAHEAD_ITR_INSERT	75
#define EVENT_PARSEAHEAD_WAIT4ITR	76
#define EVENT_PARSEAHEAD_SEMTAKE2SUSPEND 77
#define EVENT_PARSEAHEAD_SEMGIVE2FREE    78

/* fBufferLib  WINDVIEW EVENTS */
#define EVENT_FBUF_GET			80
#define EVENT_FBUF_PUT			81

/* PARALLEL WINDVIEW EVENTS	*/
#define EVENT_PARALLEL_INIT		90
#define EVENT_PARALLEL_START_CREATE	91
#define EVENT_PARALLEL_SELECT		92
#define EVENT_PARALLEL_LOCK		93
#define EVENT_PARALLEL_UNLOCK		94
#define EVENT_PARALLEL_SORT		95
#define EVENT_PARALLEL_CMPLT		96
#define EVENT_PARALLEL_FREE		97

#ifdef NO_MSR_CARD_IN_NIRVANA
/* AUTO WINDVIEW EVENTS */
#define EVENT_AUTO_RESET		100

#define EVENT_AUTO_SPINREG_ERR		101
#define EVENT_AUTO_LOCKED_ERR		102
#define EVENT_AUTO_VTREG_ERR		103
#define EVENT_AUTO_UNKNOWN_ERR		104

#define EVENT_AUTO_SPINMSG_SEND		110
#define EVENT_AUTO_SPINMSG_ACK		111
#define EVENT_AUTO_SPINMUX_TIMEOUT	112
#define EVENT_AUTO_SPINCMD_TIMEOUT	113

#define EVENT_AUTO_SHIMMSG_SEND		120
#define EVENT_AUTO_SHIMMSG_ACK		121
#define EVENT_AUTO_SHIMMUX_TIMEOUT	122
#define EVENT_AUTO_SHIMCMD_TIMEOUT	123

#define EVENT_AUTO_GENMSG_SEND		130
#define EVENT_AUTO_GENMSG_ACK		131
#define EVENT_AUTO_GENMUX_TIMEOUT	132
#define EVENT_AUTO_GENCMD_TIMEOUT	133

#define EVENT_AUTO_VTMSG_SEND		140
#define EVENT_AUTO_VTMSG_ACK		141
#define EVENT_AUTO_VTMUX_TIMEOUT	142
#define EVENT_AUTO_VTCMD_TIMEOUT	143
#else

#define EVENT_NEXUS_RCALLREPLY       	100
#define EVENT_NEXUS_RCALLREPLY_CMPLT 	101
#define EVENT_NEXUS_READY4SYNC       	102
#define EVENT_NEXUS_READY4SYNC_CMPLT 	103
#define EVENT_NEXUS_STATEUPDATE       	104
#define EVENT_NEXUS_STATEUPDATE_CMPLT 	105
#define EVENT_NEXUS_ACQSTATE       	106
#define EVENT_NEXUS_ACQSTATE_CMPLT 	107

#define EVENT_NEXUS_APARSE 	     	110
#define EVENT_NEXUS_APARSE_CMPLT      	111
#define EVENT_NEXUS_FFSUPDATE 	     	112
#define EVENT_NEXUS_FFSUPDATE_CMPLT 	113
#define EVENT_NEXUS_FFSCOMMIT 	     	114
#define EVENT_NEXUS_FFSCOMMIT_CMPLT 	115
#define EVENT_NEXUS_RTVARUPDATE      	116
#define EVENT_NEXUS_RTVARUPDATE_CMPLT 	117

#define EVENT_NEXUS_SENDEXCPT           120
#define EVENT_NEXUS_SENDEXCPT_CMPLT     121

#define EVENT_NEXUS_RECVEXCPT           130
#define EVENT_NEXUS_RECVEXCPT_CMPLT     131
#endif

/* MONITOR CMDS  */
#define EVENT_MONITOR_CMD_ECHO		200
#define EVENT_MONITOR_CMD_XPARSER	201
#define EVENT_MONITOR_CMD_APARSER	202
#define EVENT_MONITOR_CMD_INTERACT	203
#define EVENT_MONITOR_CMD_AUPDT		204
#define EVENT_MONITOR_CMD_HALTACQ	205
#define EVENT_MONITOR_CMD_ABORTACQ	206
#define EVENT_MONITOR_CMD_STATINTERV	207
#define EVENT_MONITOR_CMD_STARTLOCK	208
#define EVENT_MONITOR_CMD_GETINTERACT	209
#define EVENT_MONITOR_CMD_STOPINTERACT	210
#define EVENT_MONITOR_CMD_STOPACQ	211
#define EVENT_MONITOR_CMD_ACQDEBUG	212
#define EVENT_MONITOR_CMD_HEARTBEAT	213
#define EVENT_MONITOR_CMD_GETSTATBLOCK	214
#define EVENT_MONITOR_CMD_ABORTALLACQS	215
#define EVENT_MONITOR_CMD_OK2TUNE	215
#define EVENT_MONITOR_CMD_ROBO_ACK	216
#define EVENT_MONITOR_CMD_CONSOLEINFO	217
#define EVENT_MONITOR_CMD_DOWNLOAD	218
#define EVENT_MONITOR_CMD_STARTFIDSCOPE	219
#define EVENT_MONITOR_CMD_STOPFIDSCOPE	220
#define EVENT_MONITOR_CMD_GETCONSOLEDEBUG 221

/*  DMA Events */
#define EVENT_DMA_START_CHAN		250
#define EVENT_DMA_START_CHAN0		250
#define EVENT_DMA_START_CHAN1		251
#define EVENT_DMA_START_CHAN2		252
#define EVENT_DMA_START_CHAN3		253
#define EVENT_DMA_DONE_CHAN		260
#define EVENT_DMA_DONE_CHAN0		260
#define EVENT_DMA_DONE_CHAN1		261
#define EVENT_DMA_DONE_CHAN2		262
#define EVENT_DMA_DONE_CHAN3		263

/* PARSER CMDS  */
#define EVENT_PARSE_READY		300
#define EVENT_PARSE_BUSY		301
#define EVENT_PARSE_ACODE		302
#define EVENT_PARSE_STOP		303
#define EVENT_PARSE_SUSPENDED		304
#define EVENT_PARSE_RESTART		305

/* DSP Messaging  */
#define EVENT_DSP_POSTMSG		300

#define EVENT_SET_DSP_SR		310
#define EVENT_SET_DSP_SR_CMPLT		311
#define EVENT_SET_DSP_SW1		312
#define EVENT_SET_DSP_SW1_CMPLT		313
#define EVENT_SET_DSP_SW2		314
#define EVENT_SET_DSP_SW2_CMPLT		315
#define EVENT_SET_DSP_OS1		316
#define EVENT_SET_DSP_OS1_CMPLT		317
#define EVENT_SET_DSP_OS2		318
#define EVENT_SET_DSP_OS2_CMPLT		319
#define EVENT_SET_DSP_XS1		320
#define EVENT_SET_DSP_XS1_CMPLT		321
#define EVENT_SET_DSP_XS2		322
#define EVENT_SET_DSP_XS2_CMPLT		323
#define EVENT_SET_DSP_FW1		324
#define EVENT_SET_DSP_FW1_CMPLT		325
#define EVENT_SET_DSP_FW2		326
#define EVENT_SET_DSP_FW2_CMPLT		327
#define EVENT_SET_DSP_RP		328
#define EVENT_SET_DSP_RP_CMPLT		329
#define EVENT_SET_DSP_CP		330
#define EVENT_SET_DSP_CP_CMPLT		331
#define EVENT_SET_DSP_RF		332
#define EVENT_SET_DSP_RF_CMPLT		333
#define EVENT_SET_DSP_DIMS		334
#define EVENT_SET_DSP_DIMS_CMPLT	335
#define EVENT_SET_DSP_CYCLE		336
#define EVENT_SET_DSP_CYCLE_CMPLT	337
#define EVENT_SET_DSP_XP		336
#define EVENT_SET_DSP_XP_CMPLT		337
#define EVENT_SET_DSP_IC		338
#define EVENT_SET_DSP_IC_CMPLT		339
#define EVENT_SET_DSP_ACM		340
#define EVENT_SET_DSP_ACM_CMPLT		341
#define EVENT_UNLOCK_DSP_ACM		342
#define EVENT_UNLOCK_DSP_ACM_CMPLT	343
#define EVENT_DSP_STARTEXP		344
#define EVENT_DSP_STARTEXP_CMPLT	345
#define EVENT_DSP_STOPEXP		346
#define EVENT_DSP_STOPEXP_CMPLT		347
#define EVENT_DSP_PUSHSCAN		348
#define EVENT_DSP_PUSHSCAN_CMPLT	349

#define EVENT_DSP_HOSTERR 		700
#define EVENT_DSP_MSG			800

// DSP 800 event numbers
/* taken from ddr_symbol.h
enum DDR_TO_HOST_MSGS
{
    // -------------------------------------------------------------------
    // opcode          description                  arg1    arg2    arg3
    //---------------------------------------------------------------------
800    HOST_NOINIT,     // 0  unitialized message         index   ---     ---

// DDR command acknowledgments

801    HOST_INIT,       // 1  DDR_INIT                    status  ---     ---
802    HOST_RESET,      // 2  DDR_RESET                   status  ---     ---
803    HOST_INIT_EXP,   // 3  DDR_INIT_EXP                status  ---     ---
804    HOST_START_EXP,  // 4  DDR_START                   status  ---     ---
805    HOST_STOP_EXP,   // 5  DDR_STOP                    status  ---     ---
806    HOST_RESUME_EXP, // 6  DDR_RESUME                  status  ---     ---
807    HOST_SS_REQ,     // 7  DDR_SS_REQ                  id      cs      ct

     // asynchronous messages

808    HOST_DATA,       // 8  data ready                  acm     id      cs
809    HOST_END_DATA,   // 9  data ready (last fid)       acm     id      cs
810    HOST_END_SCAN,   // 10 end of scan                 acm     ct      flags
811    HOST_END_EXP,    // 11 end of exp                  cpu     tm      tt
812    HOST_DATA_INFO,  // 12 additional data info        tt      scale   ---

    // misc. commands

813    HOST_XIN_INFO,   // 13 return xin info             X       B        N
814    HOST_ERROR,      // 14 send error message          id      [opt]   [opt]
815    HOST_TEST,       // 15 test function 1 reply       id      arg1    arg2
816    HOST_VERSION     // 16 version and checksums       rev     ddr.h   fpga
};

//=======================  ddr error codes =================================
701 DDR_ERROR_INIT          1   // "<C67> DSP not initialized"
702 DDR_ERROR_ACQ           2   // "<C67> acquisition error"
703 DDR_ERROR_SCAN_QUE1     3  //  "<C67> scan queue failure [push]"
704 DDR_ERROR_SCAN_QUE2     4  //  "<C67> scan queue failure [pop]"
705 DDR_ERROR_FID_QUE       5  //  "<C67> fid queue failure"
706 DDR_ERROR_DATA_QUE      6  //  "<C67> data queue failure"
707 DDR_ERROR_NP            7  //  "<C67> scan overrun (repetition rate too high)"
708 DDR_ERROR_LOCK          8  //  "<C67> locked buffer overwrite"
709 DDR_ERROR_DCLIP         9  //  "<C67> NMR signal clipped"
710 DDR_ERROR_MAXD          10 // "<C67> max data value exceeded in averaging"
711 DDR_ERROR_ADF_OVF       11  //  "<C67> DATA FIFO full"
712 DDR_ERROR_BADID         12  //  "<C67> fpga version incompatible with DSP os"
713 DDR_ERROR_MEM           13  //  "<C67> out of memory"
714 #define DDR_ERROR_PROC  14  //  "<C67> post-processing error"
715 #define DDR_ERROR_SS            15 "<C67> snapshot request (no buffer allocated)"
716 #define DDR_ERROR_DMQ_C67       16 "<C67> unknown MSG id"
717 #define DDR_ERROR_DMSG          17  //  "<405> C67->405 MSG queue full"
718 #define DDR_ERROR_HMSG          18  //  "<405> 405->C67 MSG queue full"
719 #define DDR_ERROR_OVF           19  "<405> DDR output fifo full"
720 #define DDR_ERROR_UNF           20  "<405> DDR output fifo empty"
721 #define DDR_ERROR_SW            21  "<405> unexpected software behavior trap"
722 #define DDR_ERROR_HPI           22  

*/

#define EVENT_POSTMSG_2DSP		350
#define EVENT_POSTMSG_2DSP_CMPLT	351
#define EVENT_READ_DSP_MSGS		352
#define EVENT_READ_DSP_MSGS_CMPLT	353

 

#define EVENT_FIFOBUF_INITBUF		380
#define EVENT_FIFOBUF_RCVRDY		381
#define EVENT_FIFOBUF_SNDFREE		382
#define EVENT_FIFOBUF_RCVFREE		383
#define EVENT_FIFOBUF_SNDRDY		384

#define EVENT_SYSFLAG_WAIT4DWNLKR	390
#define EVENT_SYSFLAG_WAIT4PARSER	391
#define EVENT_SYSFLAG_WAIT4SYSTEM	392
#define EVENT_SYSFLAG_SEMTAKE		393

/*  downLink Events  */
#define EVENT_DOWNLINK_DNWLD_START		400
#define EVENT_DOWNLINK_DNWLD_ACODE		401
#define EVENT_DOWNLINK_DNWLD_PATTERN		402
#define EVENT_DOWNLINK_DNWLD_TABLE		403
#define EVENT_DOWNLINK_DNWLD_MISC		404
#define EVENT_DOWNLINK_XFER_MUTEX_TAKE		409
#define EVENT_DOWNLINK_MAKE_ENTRY		410
#define EVENT_DOWNLINK_FIND_ENTRY		411
#define EVENT_DOWNLINK_XFER_CMPLT		412
#define EVENT_DOWNLINK_XFER_ERROR		413
#define EVENT_DOWNLINK_XFER_MUTEX_GIVE		414
#define EVENT_DOWNLINK_DNWLD_FINISH		420

#define EVENT_DOWNLINK_BUFNUM_QUERY		425

#define EVENT_DOWNLINK_DWNLD_WAIT4CMPLT		430
#define EVENT_DOWNLINK_DWNLD_WAIT4CMPLT_ERROR	431
#define EVENT_DOWNLINK_DWNLD_CMPLT		432

#define EVENT_DOWNLINK_WAIT4DWNLD_CNT		435
#define EVENT_DOWNLINK_WAIT4DWNLD_TIMEOUT 	436
#define EVENT_DOWNLINK_WAIT4DWNLD_CNT_CMPLT 	437

#define EVENT_DOWNLINK_SYNCDELETE		440
#define EVENT_DOWNLINK_SYNCDELETE_SEMTAKE 	441
#define EVENT_DOWNLINK_SYNCDELETE_SEMTIMEOUT 	442
#define EVENT_DOWNLINK_SYNCDELETE_FAIL 		443
#define EVENT_DOWNLINK_SYNCDELETE_CMPLT 	444

#define EVENT_DOWNLINK_DELETE_BYNAME 		450
#define EVENT_DOWNLINK_DELETE_SEMGIVE		460
#define EVENT_DOWNLINK_DELETE_BYROOTNAME 	470
#define EVENT_DOWNLINK_DELETE_ALL		480

/* Shandler Commands  */
#define EVENT_SHDLR_WDISR 			500
#define EVENT_SHDLR_AA 				501
#define EVENT_SHDLR_SETUPCMPLT 			502
#define EVENT_SHDLR_EXPCMPLT 			503
#define EVENT_SHDLR_LOCKAUTO 			504
#define EVENT_SHDLR_SHIMAUTO 			505
#define EVENT_SHDLR_AUTOGAIN 			506
#define EVENT_SHDLR_SETVT 			507
#define EVENT_SHDLR_WAIT4VT 			508
#define EVENT_SHDLR_SETSPIN 			509
#define EVENT_SHDLR_CHECKSPIN 			510
#define EVENT_SHDLR_GETSAMP 			511
#define EVENT_SHDLR_LOADSAMP 			512
#define EVENT_SHDLR_SYNC_PARSER			513
#define EVENT_SHDLR_NOISECMPLT			514

/* Phandler Commands  */
#define EVENT_PHDLR_WDISR 			550
#define EVENT_PHDLR_PANIC 			551
#define EVENT_PHDLR_WARNMSG 			552
#define EVENT_PHDLR_SOFTERROR 			553
#define EVENT_PHDLR_EXPABORTED 			554
#define EVENT_PHDLR_HARDERROR 			555
#define EVENT_PHDLR_EXPHALTED 			556
#define EVENT_PHDLR_STOPCMPLT 			557
#define EVENT_PHDLR_LOSTCONN 			558
#define EVENT_PHDLR_ALLOCERROR 			559
#define EVENT_PHDLR_WATCHDOG 			560



/*   X Parser Commands (Handler Entries)  */
#define EVENT_XPARSER_LOCKHDLR		601
#define EVENT_XPARSER_SHIMHDLR		602
#define EVENT_XPARSER_SPINHDLR		603
#define EVENT_XPARSER_STATHDLR		604
#define EVENT_XPARSER_AUTSHMHDLR	605
#define EVENT_XPARSER_RCVGAINHDLR	606
#define EVENT_XPARSER_FIXACODEHDLR	607
#define EVENT_XPARSER_SETATTNHDLR	608
#define EVENT_XPARSER_TUNEHDLR		609
#define EVENT_XPARSER_LKFREQHDLR	610
#define EVENT_XPARSER_SETVTHDLR		611
#define EVENT_XPARSER_SHIMSETHDLR	612
#define EVENT_XPARSER_NVRAMHDLR		613
#define EVENT_XPARSER_SYNCHDLR		614

/*   A_updt commands    */
#define EVENT_AUPDATE_FIXAPREG		651
#define EVENT_AUPDATE_FIXACODE		652
#define EVENT_AUPDATE_FIXACODES		653
#define EVENT_AUPDATE_FIXRTVARS		654
#define EVENT_AUPDATE_CHGTABLE		655
#define EVENT_AUPDATE_CHGRTVAR		656
#define EVENT_AUPDATE_CHGACODE		657


/* MRIUSERBYTE */
#define EVENT_MRISUERBYTE_CNTDWN        2000
#define EVENT_SHANDLER_PRIOR_RAISED     2100  
#define EVENT_SHANDLER_PRIOR_LOWER      2101  
#define EVENT_PARSER_PRIOR_RAISED       2102
#define EVENT_PARSER_PRIOR_LOWER        2103


#endif
