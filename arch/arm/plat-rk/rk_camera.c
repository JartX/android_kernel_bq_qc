#include <plat/rk_camera.h> 

#ifndef PMEM_CAM_SIZE
#ifdef CONFIG_VIDEO_RK29 
/*---------------- Camera Sensor Fixed Macro Begin  ------------------------*/
// Below Macro is fixed, programer don't change it!!!!!!
#define _CONS(a,b) a##b
#define CONS(a,b) _CONS(a,b)

#define __STR(x) #x
#define _STR(x) __STR(x)
#define STR(x) _STR(x)

#if (CONFIG_SENSOR_IIC_ADDR_0 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_0  CONS(CONFIG_SENSOR_0,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_0
    #define SENSOR_CIF_BUSID_0             CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_0)
    #else
    #define SENSOR_CIF_BUSID_0             RK29_CAM_PLATFORM_DEV_ID
    #endif
    
    #if !(PMEM_SENSOR_FULL_RESOLUTION_0)
    #undef PMEM_SENSOR_FULL_RESOLUTION_0
    #define PMEM_SENSOR_FULL_RESOLUTION_0  RK_CAM_SUPPORT_RESOLUTION
    #endif
    
    #if(SENSOR_CIF_BUSID_0 == RK_CAM_PLATFORM_DEV_ID_0)
    #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_0
    #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 0
    #else
    #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_0
    #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 0
    #endif
#else
#define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 0x00
#define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 0x00
#endif
 
#if (CONFIG_SENSOR_IIC_ADDR_1 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_1  CONS(CONFIG_SENSOR_1,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_1
    #define SENSOR_CIF_BUSID_1             CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_1)
    #else
    #define SENSOR_CIF_BUSID_1             RK29_CAM_PLATFORM_DEV_ID
    #endif
    
    #if !(PMEM_SENSOR_FULL_RESOLUTION_1)
    #undef PMEM_SENSOR_FULL_RESOLUTION_1
    #define PMEM_SENSOR_FULL_RESOLUTION_1  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_1 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_1)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_1
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_1)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_1
	   #endif
    #endif
#endif

#ifdef CONFIG_SENSOR_IIC_ADDR_01
#if (CONFIG_SENSOR_IIC_ADDR_01 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_01  CONS(CONFIG_SENSOR_01,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_01
    #define SENSOR_CIF_BUSID_01             CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_01)
    #else
    #define SENSOR_CIF_BUSID_01             RK29_CAM_PLATFORM_DEV_ID
    #endif
    
    #if !(PMEM_SENSOR_FULL_RESOLUTION_01)
    #undef PMEM_SENSOR_FULL_RESOLUTION_01
    #define PMEM_SENSOR_FULL_RESOLUTION_01  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_01 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_01)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_01
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_01)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_01
	   #endif
    #endif
#endif
#endif

#ifdef CONFIG_SENSOR_IIC_ADDR_02
#if (CONFIG_SENSOR_IIC_ADDR_02 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_02  CONS(CONFIG_SENSOR_02,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_02
    #define SENSOR_CIF_BUSID_02             CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_02)
    #else
    #define SENSOR_CIF_BUSID_02             RK29_CAM_PLATFORM_DEV_ID
    #endif
    
    #if !(PMEM_SENSOR_FULL_RESOLUTION_02)
    #undef PMEM_SENSOR_FULL_RESOLUTION_02
    #define PMEM_SENSOR_FULL_RESOLUTION_02  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_02 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_02)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_02
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_02)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_02
	   #endif
    #endif
#endif
#endif

#ifdef CONFIG_SENSOR_IIC_ADDR_03
#if (CONFIG_SENSOR_IIC_ADDR_03 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_03  CONS(CONFIG_SENSOR_03,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_03
    #define SENSOR_CIF_BUSID_03             CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_03)
    #else
    #define SENSOR_CIF_BUSID_03             RK29_CAM_PLATFORM_DEV_ID
    #endif
    
    #if !(PMEM_SENSOR_FULL_RESOLUTION_03)
    #undef PMEM_SENSOR_FULL_RESOLUTION_03
    #define PMEM_SENSOR_FULL_RESOLUTION_03  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_03 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_03)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_03
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_03)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_03
	   #endif
    #endif
#endif
#endif

#ifdef CONFIG_SENSOR_IIC_ADDR_04
#if (CONFIG_SENSOR_IIC_ADDR_04 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_04  CONS(CONFIG_SENSOR_04,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_04
    #define SENSOR_CIF_BUSID_04             CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_04)
    #else
    #define SENSOR_CIF_BUSID_04             RK29_CAM_PLATFORM_DEV_ID
    #endif

    #if !(PMEM_SENSOR_FULL_RESOLUTION_04)
    #undef PMEM_SENSOR_FULL_RESOLUTION_04
    #define PMEM_SENSOR_FULL_RESOLUTION_04  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_04 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_04)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_04
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_04)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_04
	   #endif
    #endif
#endif
#endif


#ifdef CONFIG_SENSOR_IIC_ADDR_11
#if (CONFIG_SENSOR_IIC_ADDR_11 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_11  CONS(CONFIG_SENSOR_11,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_11
    #define SENSOR_CIF_BUSID_11             CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_11)
    #else
    #define SENSOR_CIF_BUSID_11             RK29_CAM_PLATFORM_DEV_ID
    #endif
    
    #if !(PMEM_SENSOR_FULL_RESOLUTION_11)
    #undef PMEM_SENSOR_FULL_RESOLUTION_11
    #define PMEM_SENSOR_FULL_RESOLUTION_11  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_11 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_11)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_11
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_11)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_11
	   #endif
    #endif
#endif
#endif


#ifdef CONFIG_SENSOR_IIC_ADDR_12
#if (CONFIG_SENSOR_IIC_ADDR_12 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_12  CONS(CONFIG_SENSOR_12,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_12
    #define SENSOR_CIF_BUSID_12             CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_12)
    #else
    #define SENSOR_CIF_BUSID_12             RK29_CAM_PLATFORM_DEV_ID
    #endif
    
    #if !(PMEM_SENSOR_FULL_RESOLUTION_12)
    #undef PMEM_SENSOR_FULL_RESOLUTION_12
    #define PMEM_SENSOR_FULL_RESOLUTION_12  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_12 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_12)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_12
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_12)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_12
	   #endif
    #endif
#endif
#endif

#ifdef CONFIG_SENSOR_IIC_ADDR_13
#if (CONFIG_SENSOR_IIC_ADDR_13 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_13  CONS(CONFIG_SENSOR_13,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_13
    #define SENSOR_CIF_BUSID_13             CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_13)
    #else
    #define SENSOR_CIF_BUSID_13             RK29_CAM_PLATFORM_DEV_ID
    #endif
    
    #if !(PMEM_SENSOR_FULL_RESOLUTION_13)
    #undef PMEM_SENSOR_FULL_RESOLUTION_13
    #define PMEM_SENSOR_FULL_RESOLUTION_13  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_13 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_13)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_13
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_13)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_13
	   #endif
    #endif
#endif
#endif

#ifdef CONFIG_SENSOR_IIC_ADDR_14
#if (CONFIG_SENSOR_IIC_ADDR_14 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_14  CONS(CONFIG_SENSOR_14,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_14
    #define SENSOR_CIF_BUSID_14            CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_14)
    #else
    #define SENSOR_CIF_BUSID_14             RK29_CAM_PLATFORM_DEV_ID
    #endif
    
    #if !(PMEM_SENSOR_FULL_RESOLUTION_14)
    #undef PMEM_SENSOR_FULL_RESOLUTION_14
    #define PMEM_SENSOR_FULL_RESOLUTION_14  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_14 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_14)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_14
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_14)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_14
	   #endif
    #endif
#endif
#endif

#ifdef CONFIG_SENSOR_IIC_ADDR_15
#if (CONFIG_SENSOR_IIC_ADDR_15 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_15  CONS(CONFIG_SENSOR_15,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_15
    #define SENSOR_CIF_BUSID_15            CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_15)
    #else
    #define SENSOR_CIF_BUSID_15             RK29_CAM_PLATFORM_DEV_ID
    #endif

    #if !(PMEM_SENSOR_FULL_RESOLUTION_15)
    #undef PMEM_SENSOR_FULL_RESOLUTION_15
    #define PMEM_SENSOR_FULL_RESOLUTION_15  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_15 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_15)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_15
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_15)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_15
	   #endif
    #endif
#endif
#endif

#ifdef CONFIG_SENSOR_IIC_ADDR_16
#if (CONFIG_SENSOR_IIC_ADDR_16 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_16  CONS(CONFIG_SENSOR_16,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_16
    #define SENSOR_CIF_BUSID_16            CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_16)
    #else
    #define SENSOR_CIF_BUSID_16             RK29_CAM_PLATFORM_DEV_ID
    #endif

    #if !(PMEM_SENSOR_FULL_RESOLUTION_16)
    #undef PMEM_SENSOR_FULL_RESOLUTION_16
    #define PMEM_SENSOR_FULL_RESOLUTION_16  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_16 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_16)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_16
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_16)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_16
	   #endif
    #endif
#endif
#endif

#ifdef CONFIG_SENSOR_IIC_ADDR_17
#if (CONFIG_SENSOR_IIC_ADDR_17 != 0x00)
#define PMEM_SENSOR_FULL_RESOLUTION_17  CONS(CONFIG_SENSOR_17,_FULL_RESOLUTION)

    #ifdef CONFIG_SENSOR_CIF_INDEX_17
    #define SENSOR_CIF_BUSID_17            CONS(RK_CAM_PLATFORM_DEV_ID_,CONFIG_SENSOR_CIF_INDEX_17)
    #else
    #define SENSOR_CIF_BUSID_17             RK29_CAM_PLATFORM_DEV_ID
    #endif

    #if !(PMEM_SENSOR_FULL_RESOLUTION_17)
    #undef PMEM_SENSOR_FULL_RESOLUTION_17
    #define PMEM_SENSOR_FULL_RESOLUTION_17  RK_CAM_SUPPORT_RESOLUTION
    #endif
    #if (SENSOR_CIF_BUSID_17 == RK_CAM_PLATFORM_DEV_ID_0)
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 < PMEM_SENSOR_FULL_RESOLUTION_17)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_0
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_0 PMEM_SENSOR_FULL_RESOLUTION_17
	   #endif
    #else
	   #if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 < PMEM_SENSOR_FULL_RESOLUTION_17)
	   #undef PMEM_SENSOR_FULL_RESOLUTION_CIF_1
	   #define PMEM_SENSOR_FULL_RESOLUTION_CIF_1 PMEM_SENSOR_FULL_RESOLUTION_17
	   #endif
    #endif
#endif
#endif



#if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 > RK_CAM_SUPPORT_RESOLUTION)
    #error "PMEM_SENSOR_FULL_RESOLUTION_CIF_0 is larger than 5Meag"
#endif

#if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 > RK_CAM_SUPPORT_RESOLUTION)
    #error "PMEM_SENSOR_FULL_RESOLUTION_CIF_1 is larger than 5Meag"
#endif
//CIF 0
#if (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 == 0x800000)   /* ddl@rock-chips.com : It is only support 5Mega interplate to 8Mega */
#define PMEM_CAM_NECESSARY_CIF_0   0x1900000       /* 1280*720*1.5*4(preview) + 12M(capture raw) + 7M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_0    0x1400000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 == 0x500000)
#define PMEM_CAM_NECESSARY_CIF_0   0x2000000       /* 1280*720*1.5*4(preview) + 7.5M(capture raw) + 4M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_0    0x1400000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 == 0x300000)
#define PMEM_CAM_NECESSARY_CIF_0   0xe00000        /* 1280*720*1.5*4(preview) + 4.5M(capture raw) + 3M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_0    0x500000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 == 0x200000) /* 1280*720*1.5*4(preview) + 3M(capture raw) + 3M(jpeg encode output) */
#define PMEM_CAM_NECESSARY_CIF_0   0xc00000
#define PMEM_CAMIPP_NECESSARY_CIF_0    0x600000
#elif ((PMEM_SENSOR_FULL_RESOLUTION_CIF_0 == 0x100000) || (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 == 0x130000))
#define PMEM_CAM_NECESSARY_CIF_0   0x800000        /* 800*600*1.5*4(preview) + 2M(capture raw) + 2M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_0    0x400000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 == 0x30000)
#define PMEM_CAM_NECESSARY_CIF_0   0x400000        /* 640*480*1.5*4(preview) + 1M(capture raw) + 1M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_0    0x400000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_0 == 0x00)
#define PMEM_CAM_NECESSARY_CIF_0   0x00
#define PMEM_CAMIPP_NECESSARY_CIF_0    0x00
#else
#define PMEM_CAM_NECESSARY_CIF_0   0x2000000
#define PMEM_CAMIPP_NECESSARY_CIF_0    0x1400000
#endif

//CIF 1
#if (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 == 0x800000)   /* ddl@rock-chips.com : It is only support 5Mega interplate to 8Mega */
#define PMEM_CAM_NECESSARY_CIF_1   0x1900000       /* 1280*720*1.5*4(preview) + 12M(capture raw) + 7M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_1    0x1500000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 == 0x500000)
#define PMEM_CAM_NECESSARY_CIF_1	 0x1400000		 /* 1280*720*1.5*4(preview) + 7.5M(capture raw) + 4M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_1	  0x800000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 == 0x300000)
#define PMEM_CAM_NECESSARY_CIF_1	 0xe00000		 /* 1280*720*1.5*4(preview) + 4.5M(capture raw) + 3M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_1    0x500000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_1== 0x200000) /* 1280*720*1.5*4(preview) + 3M(capture raw) + 3M(jpeg encode output) */
#define PMEM_CAM_NECESSARY_CIF_1	 0xc00000
#define PMEM_CAMIPP_NECESSARY_CIF_1    0x600000
#elif ((PMEM_SENSOR_FULL_RESOLUTION_CIF_1 == 0x100000) || (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 == 0x130000))
#define PMEM_CAM_NECESSARY_CIF_1	 0x800000		 /* 800*600*1.5*4(preview) + 2M(capture raw) + 2M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_1    0x400000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 == 0x30000)
#define PMEM_CAM_NECESSARY_CIF_1	 0x400000		 /* 640*480*1.5*4(preview) + 1M(capture raw) + 1M(jpeg encode output) */
#define PMEM_CAMIPP_NECESSARY_CIF_1    0x400000
#elif (PMEM_SENSOR_FULL_RESOLUTION_CIF_1 == 0x00)
#define PMEM_CAM_NECESSARY_CIF_1   0x00
#define PMEM_CAMIPP_NECESSARY_CIF_1    0x00
#else
#define PMEM_CAM_NECESSARY_CIF_1	 0x1400000
#define PMEM_CAMIPP_NECESSARY_CIF_1    0x800000
#endif


#ifdef CONFIG_VIDEO_RKCIF_WORK_SIMUL_OFF
    #if (PMEM_CAM_NECESSARY_CIF_0 > PMEM_CAM_NECESSARY_CIF_1)
    #define PMEM_CAM_NECESSARY PMEM_CAM_NECESSARY_CIF_0
    #define PMEM_CAMIPP_NECESSARY PMEM_CAMIPP_NECESSARY_CIF_0
    #else
    #define PMEM_CAM_NECESSARY PMEM_CAM_NECESSARY_CIF_1
    #define PMEM_CAMIPP_NECESSARY PMEM_CAMIPP_NECESSARY_CIF_1
    #endif
#endif

#if (!defined(CONFIG_VIDEO_RKCIF_WORK_SIMUL_OFF) && !defined(CONFIG_VIDEO_RKCIF_WORK_SIMUL_ON))
    #if PMEM_CAM_NECESSARY_CIF_0
    #define PMEM_CAM_NECESSARY PMEM_CAM_NECESSARY_CIF_0
    #define PMEM_CAMIPP_NECESSARY PMEM_CAMIPP_NECESSARY_CIF_0  
    #else
    #define PMEM_CAM_NECESSARY PMEM_CAM_NECESSARY_CIF_1
    #define PMEM_CAMIPP_NECESSARY PMEM_CAMIPP_NECESSARY_CIF_1  
    #endif
#endif

#ifdef CONFIG_VIDEO_RK29_CAMMEM_ION
    #undef PMEM_CAM_NECESSARY
    #define PMEM_CAM_NECESSARY 0x00000000
#endif


/*---------------- Camera Sensor Fixed Macro End  ------------------------*/
#else	//#ifdef CONFIG_VIDEO_RK 
#define PMEM_CAM_NECESSARY	 0x00000000
#endif

#else   // #ifndef PMEM_CAM_SIZE

static int camera_debug;
module_param(camera_debug, int, S_IRUGO|S_IWUSR);    

#define ddprintk(level, fmt, arg...) do {			\
	if (camera_debug >= level) 					\
	    printk(KERN_WARNING"rk_cam_io: " fmt , ## arg); } while (0)

#define dprintk(format, ...) ddprintk(1, format, ## __VA_ARGS__)    

#define SENSOR_NAME_0 STR(CONFIG_SENSOR_0)			/* back camera sensor 0 */
#define SENSOR_NAME_1 STR(CONFIG_SENSOR_1)			/* front camera sensor 0 */
#define SENSOR_DEVICE_NAME_0  STR(CONS(CONFIG_SENSOR_0, _back))
#define SENSOR_DEVICE_NAME_1  STR(CONS(CONFIG_SENSOR_1, _front))
#ifdef CONFIG_SENSOR_01
#define SENSOR_NAME_01 STR(CONFIG_SENSOR_01)			/* back camera sensor 1 */
#define SENSOR_DEVICE_NAME_01  STR(CONS(CONFIG_SENSOR_01, _back_1))
#endif
#ifdef CONFIG_SENSOR_02
#define SENSOR_NAME_02 STR(CONFIG_SENSOR_02)			/* back camera sensor 2 */
#define SENSOR_DEVICE_NAME_02  STR(CONS(CONFIG_SENSOR_02, _back_2))
#endif
#ifdef CONFIG_SENSOR_03
#define SENSOR_NAME_03 STR(CONFIG_SENSOR_03)			/* back camera sensor 2 */
#define SENSOR_DEVICE_NAME_03  STR(CONS(CONFIG_SENSOR_03, _back_3))
#endif

#ifdef CONFIG_SENSOR_04
#define SENSOR_NAME_04 STR(CONFIG_SENSOR_04)			/* back camera sensor 2 */
#define SENSOR_DEVICE_NAME_04  STR(CONS(CONFIG_SENSOR_04, _back_4))
#endif

#ifdef CONFIG_SENSOR_11
#define SENSOR_NAME_11 STR(CONFIG_SENSOR_11)			/* front camera sensor 1 */
#define SENSOR_DEVICE_NAME_11  STR(CONS(CONFIG_SENSOR_11, _front_1))
#endif
#ifdef CONFIG_SENSOR_12
#define SENSOR_NAME_12 STR(CONFIG_SENSOR_12)			/* front camera sensor 2 */
#define SENSOR_DEVICE_NAME_12  STR(CONS(CONFIG_SENSOR_12, _front_2))
#endif
#ifdef CONFIG_SENSOR_13
#define SENSOR_NAME_13 STR(CONFIG_SENSOR_13)			/* front camera sensor 2 */
#define SENSOR_DEVICE_NAME_13  STR(CONS(CONFIG_SENSOR_13, _front_3))
#endif
#ifdef CONFIG_SENSOR_14
#define SENSOR_NAME_14 STR(CONFIG_SENSOR_14)			/* front camera sensor 2 */
#define SENSOR_DEVICE_NAME_14  STR(CONS(CONFIG_SENSOR_14, _front_4))
#endif
#ifdef CONFIG_SENSOR_15
#define SENSOR_NAME_15 STR(CONFIG_SENSOR_15)			/* front camera sensor 2 */
#define SENSOR_DEVICE_NAME_15  STR(CONS(CONFIG_SENSOR_15, _front_5))
#endif
#ifdef CONFIG_SENSOR_16
#define SENSOR_NAME_16 STR(CONFIG_SENSOR_16)			/* front camera sensor 2 */
#define SENSOR_DEVICE_NAME_16  STR(CONS(CONFIG_SENSOR_16, _front_6))
#endif
#ifdef CONFIG_SENSOR_17
#define SENSOR_NAME_17 STR(CONFIG_SENSOR_17)			/* front camera sensor 2 */
#define SENSOR_DEVICE_NAME_17  STR(CONS(CONFIG_SENSOR_17, _front_7))
#endif


static int rk_sensor_io_init(void);
static int rk_sensor_io_deinit(int sensor);
static int rk_sensor_ioctrl(struct device *dev,enum rk29camera_ioctrl_cmd cmd, int on);
static int rk_sensor_power(struct device *dev, int on);
static int rk_sensor_reset(struct device *dev);
static int rk_sensor_powerdown(struct device *dev, int on);
// honghaishen_test hhs_1219 
static unsigned int rk_sensor_get_pwdpin(struct device *dev, int * pin_level);

static struct rk29camera_platform_data rk_camera_platform_data = {
    .io_init = rk_sensor_io_init,
    .io_deinit = rk_sensor_io_deinit,
    .iomux = rk_sensor_iomux,
    .sensor_ioctrl = rk_sensor_ioctrl,
    .sensor_all_power = all_rk_cif_power,  // hhs_0619 
    .gpio_res = {
        {
		#ifdef CONFIG_SENSOR_0
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_0,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_0,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_0,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_0,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_0,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_0|CONFIG_SENSOR_RESETACTIVE_LEVEL_0
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_0|CONFIG_SENSOR_FLASHACTIVE_LEVEL_0|CONFIG_SENSOR_TORCHACTIVE_LEVEL_0),
            .gpio_init = 0,            
            .dev_name = SENSOR_DEVICE_NAME_0,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_0,
            #else
	      .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,            
            .dev_name = NULL,
            #endif
        }, 
        #ifdef CONFIG_SENSOR_01
        {
        #if CONFIG_SENSOR_IIC_ADDR_01
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_01,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_01,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_01,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_01,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_01,  
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_01|CONFIG_SENSOR_RESETACTIVE_LEVEL_01
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_01|CONFIG_SENSOR_FLASHACTIVE_LEVEL_01|CONFIG_SENSOR_TORCHACTIVE_LEVEL_01),
            .gpio_init = 0,            
            .dev_name = SENSOR_DEVICE_NAME_01,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_01,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,            
            .dev_name = NULL,
        #endif
        }, 
        #endif
        #ifdef CONFIG_SENSOR_02
        {
        #if CONFIG_SENSOR_IIC_ADDR_02
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_02,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_02,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_02,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_02,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_02,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_02|CONFIG_SENSOR_RESETACTIVE_LEVEL_02
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_02|CONFIG_SENSOR_FLASHACTIVE_LEVEL_02|CONFIG_SENSOR_TORCHACTIVE_LEVEL_02),
            .gpio_init = 0,            
            .dev_name = SENSOR_DEVICE_NAME_02,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_02,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,            
            .dev_name = NULL,
        #endif        
        },
        #endif

	  #ifdef CONFIG_SENSOR_03
        {
        #if CONFIG_SENSOR_IIC_ADDR_03
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_03,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_03,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_03,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_03,
             .gpio_torch = CONFIG_SENSOR_TORCH_PIN_03,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_03|CONFIG_SENSOR_RESETACTIVE_LEVEL_03
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_03|CONFIG_SENSOR_FLASHACTIVE_LEVEL_03|CONFIG_SENSOR_TORCHACTIVE_LEVEL_03),
            .gpio_init = 0,            
            .dev_name = SENSOR_DEVICE_NAME_03,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_03,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,            
            .dev_name = NULL,
        #endif        
        },
        #endif

#ifdef CONFIG_SENSOR_04
        {
        #if CONFIG_SENSOR_IIC_ADDR_04
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_04,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_04,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_04,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_04,
             .gpio_torch = CONFIG_SENSOR_TORCH_PIN_04,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_04|CONFIG_SENSOR_RESETACTIVE_LEVEL_04
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_04|CONFIG_SENSOR_FLASHACTIVE_LEVEL_04|CONFIG_SENSOR_TORCHACTIVE_LEVEL_04),
            .gpio_init = 0,
            .dev_name = SENSOR_DEVICE_NAME_04,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_04,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,
            .dev_name = NULL,
        #endif
        },
        #endif
	{
        	#ifdef CONFIG_SENSOR_1
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_1,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_1,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_1,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_1,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_1,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_1|CONFIG_SENSOR_RESETACTIVE_LEVEL_1
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_1|CONFIG_SENSOR_FLASHACTIVE_LEVEL_1|CONFIG_SENSOR_TORCHACTIVE_LEVEL_1),
            .gpio_init = 0,
            .dev_name = SENSOR_DEVICE_NAME_1,
             .vdd_val = CONFIG_SENSOR_DVDD_VALUE_1,
            #else
	      .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,            
            .dev_name = NULL,
            #endif
        }, 

        #ifdef CONFIG_SENSOR_11
        {
        #if CONFIG_SENSOR_IIC_ADDR_11
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_11,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_11,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_11,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_11,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_11,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_11|CONFIG_SENSOR_RESETACTIVE_LEVEL_11
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_11|CONFIG_SENSOR_FLASHACTIVE_LEVEL_11|CONFIG_SENSOR_TORCHACTIVE_LEVEL_11),
            .gpio_init = 0,
            .dev_name = SENSOR_DEVICE_NAME_11,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_11,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,            
            .dev_name = NULL,
        #endif        
        }, 
        #endif
        #ifdef CONFIG_SENSOR_12
        {
        #if CONFIG_SENSOR_IIC_ADDR_12
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_12,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_12,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_12,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_12,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_12,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_12|CONFIG_SENSOR_RESETACTIVE_LEVEL_12
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_12|CONFIG_SENSOR_FLASHACTIVE_LEVEL_12|CONFIG_SENSOR_TORCHACTIVE_LEVEL_12),
            .gpio_init = 0,
            .dev_name = SENSOR_DEVICE_NAME_12,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_12,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,            
            .dev_name = NULL,
        #endif
        },
        #endif
        #ifdef CONFIG_SENSOR_13
        {
        #if CONFIG_SENSOR_IIC_ADDR_13
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_13,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_13,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_13,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_13,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_13,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_13|CONFIG_SENSOR_RESETACTIVE_LEVEL_13
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_13|CONFIG_SENSOR_FLASHACTIVE_LEVEL_13|CONFIG_SENSOR_TORCHACTIVE_LEVEL_13),
            .gpio_init = 0,
            .dev_name = SENSOR_DEVICE_NAME_13,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_13,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,            
            .dev_name = NULL,
        #endif
        },
        #endif
	  #ifdef CONFIG_SENSOR_14
        {
        #if CONFIG_SENSOR_IIC_ADDR_14
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_14,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_14,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_14,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_14,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_14,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_14|CONFIG_SENSOR_RESETACTIVE_LEVEL_14
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_14|CONFIG_SENSOR_FLASHACTIVE_LEVEL_14|CONFIG_SENSOR_TORCHACTIVE_LEVEL_14),
            .gpio_init = 0,
            .dev_name = SENSOR_DEVICE_NAME_14,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_14,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,            
            .dev_name = NULL,
        #endif
        },
        #endif
	  #ifdef CONFIG_SENSOR_15
        {
        #if CONFIG_SENSOR_IIC_ADDR_15
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_15,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_15,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_15,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_15,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_15,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_15|CONFIG_SENSOR_RESETACTIVE_LEVEL_15
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_15|CONFIG_SENSOR_FLASHACTIVE_LEVEL_15|CONFIG_SENSOR_TORCHACTIVE_LEVEL_15),
            .gpio_init = 0,
            .dev_name = SENSOR_DEVICE_NAME_15,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_15,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,
            .dev_name = NULL,
        #endif
        },
        #endif

	#ifdef CONFIG_SENSOR_16
        {
        #if CONFIG_SENSOR_IIC_ADDR_16
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_16,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_16,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_16,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_16,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_16,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_16|CONFIG_SENSOR_RESETACTIVE_LEVEL_16
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_16|CONFIG_SENSOR_FLASHACTIVE_LEVEL_16|CONFIG_SENSOR_TORCHACTIVE_LEVEL_16),
            .gpio_init = 0,
            .dev_name = SENSOR_DEVICE_NAME_16,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_16,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,
            .dev_name = NULL,
        #endif
        },
        #endif

		#ifdef CONFIG_SENSOR_17
        {
        #if CONFIG_SENSOR_IIC_ADDR_17
            .gpio_reset = CONFIG_SENSOR_RESET_PIN_17,
            .gpio_power = CONFIG_SENSOR_POWER_PIN_17,
            .gpio_powerdown = CONFIG_SENSOR_POWERDN_PIN_17,
            .gpio_flash = CONFIG_SENSOR_FALSH_PIN_17,
	   .gpio_torch = CONFIG_SENSOR_TORCH_PIN_17,
            .gpio_flag = (CONFIG_SENSOR_POWERACTIVE_LEVEL_17|CONFIG_SENSOR_RESETACTIVE_LEVEL_17
            |CONFIG_SENSOR_POWERDNACTIVE_LEVEL_17|CONFIG_SENSOR_FLASHACTIVE_LEVEL_17|CONFIG_SENSOR_TORCHACTIVE_LEVEL_17),
            .gpio_init = 0,
            .dev_name = SENSOR_DEVICE_NAME_17,
            .vdd_val = CONFIG_SENSOR_DVDD_VALUE_17,
        #else
            .gpio_reset = INVALID_GPIO,
            .gpio_power = INVALID_GPIO,
            .gpio_powerdown = INVALID_GPIO,
            .gpio_flash = INVALID_GPIO,
	   .gpio_torch = INVALID_GPIO,
            .gpio_flag = 0,
            .gpio_init = 0,
            .dev_name = NULL,
        #endif
        },
        #endif

    },
    
    #ifdef CONFIG_VIDEO_RK29_WORK_IPP
    #ifdef MEM_CAMIPP_BASE
	.meminfo = {
	    .name  = "camera_ipp_mem",
		.start = MEM_CAMIPP_BASE,
		.size   = MEM_CAMIPP_SIZE,
	},
	#endif
	#endif
    
    .info = {
    #ifdef CONFIG_SENSOR_0
        {
            .dev_name = SENSOR_DEVICE_NAME_0,
            .orientation = CONFIG_SENSOR_ORIENTATION_0,  
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00, 
        },
	 #endif
    #ifdef CONFIG_SENSOR_01
        {
            .dev_name = SENSOR_DEVICE_NAME_01,
            .orientation = CONFIG_SENSOR_ORIENTATION_01,  
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00, 
        },
	 #endif
    #ifdef CONFIG_SENSOR_02
        {
            .dev_name = SENSOR_DEVICE_NAME_02,
            .orientation = CONFIG_SENSOR_ORIENTATION_02,  
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00, 
        },
	 #endif
	     #ifdef CONFIG_SENSOR_03
        {
            .dev_name = SENSOR_DEVICE_NAME_03,
            .orientation = CONFIG_SENSOR_ORIENTATION_03,  
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00, 
        },
	 #endif
	     #ifdef CONFIG_SENSOR_04
        {
            .dev_name = SENSOR_DEVICE_NAME_04,
            .orientation = CONFIG_SENSOR_ORIENTATION_04,
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00,
        },
	 #endif

	 #ifdef CONFIG_SENSOR_1
        {
            .dev_name = SENSOR_DEVICE_NAME_1,
            .orientation = CONFIG_SENSOR_ORIENTATION_1,  
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00, 
        },
	 #endif


    #ifdef CONFIG_SENSOR_11
        {
            .dev_name = SENSOR_DEVICE_NAME_11,
            .orientation = CONFIG_SENSOR_ORIENTATION_11,  
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00, 
        },
	 #endif
    #ifdef CONFIG_SENSOR_12
        {
            .dev_name = SENSOR_DEVICE_NAME_12,
            .orientation = CONFIG_SENSOR_ORIENTATION_12,  
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00, 
        },
	 #endif
    #ifdef CONFIG_SENSOR_13
        {
            .dev_name = SENSOR_DEVICE_NAME_13,
            .orientation = CONFIG_SENSOR_ORIENTATION_13,  
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00, 
        },
	 #endif
	     #ifdef CONFIG_SENSOR_14
        {
            .dev_name = SENSOR_DEVICE_NAME_14,
            .orientation = CONFIG_SENSOR_ORIENTATION_14,  
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00, 
        },
	 #endif
	     #ifdef CONFIG_SENSOR_15
        {
            .dev_name = SENSOR_DEVICE_NAME_15,
            .orientation = CONFIG_SENSOR_ORIENTATION_15,
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00,
        },
	 #endif
	#ifdef CONFIG_SENSOR_16
        {
            .dev_name = SENSOR_DEVICE_NAME_16,
            .orientation = CONFIG_SENSOR_ORIENTATION_16,
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00,
        },
	 #endif

	#ifdef CONFIG_SENSOR_17
        {
            .dev_name = SENSOR_DEVICE_NAME_17,
            .orientation = CONFIG_SENSOR_ORIENTATION_17,
        },
     #else
	 {
	     .dev_name = NULL,
            .orientation = 0x00,
        },
	 #endif



	},
    
    .register_dev = {
        #ifdef CONFIG_SENSOR_0
        {
        #if (CONFIG_SENSOR_IIC_ADDR_0 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_0, CONFIG_SENSOR_IIC_ADDR_0>>1),
            },
            .link_info = {
                #ifdef SENSOR_CIF_BUSID_0
            	.bus_id= SENSOR_CIF_BUSID_0,
            	#else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
		// honghashen_test hhs_1219
	      .get_pwdpin = rk_sensor_get_pwdpin,
            	.power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_0 != INVALID_GPIO)
            	.reset		= rk_sensor_reset,
                #endif	  
            	.powerdown	= rk_sensor_powerdown,
            	//.board_info = &rk_i2c_cam_info_0[0],
            	
            	.i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_0,
            	.module_name	= SENSOR_NAME_0,
             .fov_v = FOV_V_0,
             .fov_h = FOV_H_0,
            },
            .device_info = {
            	.name	= "soc-camera-pdrv",
            	//.id = 0,
            	.dev	= {
            		.init_name = SENSOR_DEVICE_NAME_0,
            		//.platform_data = &rk_iclink_0,
            	}
            }
        #endif
	    },
        #endif
        #ifdef CONFIG_SENSOR_01
        {
        #if (CONFIG_SENSOR_IIC_ADDR_01 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_01, CONFIG_SENSOR_IIC_ADDR_01>>1)
            },
            .link_info = {
            	#ifdef SENSOR_CIF_BUSID_01
            	.bus_id= SENSOR_CIF_BUSID_01,
            	#else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
				// honghashen_test hhs_1219
		.get_pwdpin = rk_sensor_get_pwdpin,
            	.power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_1 != INVALID_GPIO)
            	.reset		= rk_sensor_reset,
                #endif	  
            	.powerdown	= rk_sensor_powerdown,
            	//.board_info = &rk_i2c_cam_info_0[0],
            	
            	.i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_01,
            	.module_name	= SENSOR_NAME_01,
             .fov_v = FOV_V_01,
             .fov_h = FOV_H_01,
            },
            .device_info = {
            	.name	= "soc-camera-pdrv",
            	//.id = 1,
            	.dev	= {
            		.init_name = SENSOR_DEVICE_NAME_01,
            		//.platform_data = &rk_iclink_0,
            	}
            }
        #endif
	    },
        #endif
        #ifdef CONFIG_SENSOR_02 
        {
	    #if (CONFIG_SENSOR_IIC_ADDR_02 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_02, CONFIG_SENSOR_IIC_ADDR_02>>1)
            },
            .link_info = {
            	#ifdef SENSOR_CIF_BUSID_02
            	.bus_id= SENSOR_CIF_BUSID_02,
            	#else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
				// honghashen_test hhs_1219
		.get_pwdpin = rk_sensor_get_pwdpin,
            	.power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_1 != INVALID_GPIO)
            	.reset		= rk_sensor_reset,
                #endif	  
            	.powerdown	= rk_sensor_powerdown,
            	//.board_info = &rk_i2c_cam_info_0[0],
            	
            	.i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_02,
            	.module_name	= SENSOR_NAME_02,
             .fov_v = FOV_V_02,
             .fov_h = FOV_H_02,
            },
            .device_info = {
            	.name	= "soc-camera-pdrv",
            	//.id = 1,
            	.dev	= {
            		.init_name = SENSOR_DEVICE_NAME_02,
            		//.platform_data = &rk_iclink_0,
            	}
            }
        #endif
	    },
        #endif
	        #ifdef CONFIG_SENSOR_03 
        {
	    #if (CONFIG_SENSOR_IIC_ADDR_03 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_03, CONFIG_SENSOR_IIC_ADDR_03>>1)
            },
            .link_info = {
            	#ifdef SENSOR_CIF_BUSID_03
            	.bus_id= SENSOR_CIF_BUSID_03,
            	#else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
				// honghashen_test hhs_1219
		.get_pwdpin = rk_sensor_get_pwdpin,
            	.power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_1 != INVALID_GPIO)
            	.reset		= rk_sensor_reset,
                #endif	  
            	.powerdown	= rk_sensor_powerdown,
            	//.board_info = &rk_i2c_cam_info_0[0],
            	
            	.i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_03,
            	.module_name	= SENSOR_NAME_03,
             .fov_v = FOV_V_03,
             .fov_h = FOV_H_03,
            },
            .device_info = {
            	.name	= "soc-camera-pdrv",
            	//.id = 1,
            	.dev	= {
            		.init_name = SENSOR_DEVICE_NAME_03,
            		//.platform_data = &rk_iclink_0,
            	}
            }
        #endif
	    },
        #endif

	        #ifdef CONFIG_SENSOR_04
        {
	    #if (CONFIG_SENSOR_IIC_ADDR_04 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_04, CONFIG_SENSOR_IIC_ADDR_04>>1)
            },
            .link_info = {
                #ifdef SENSOR_CIF_BUSID_04
                .bus_id= SENSOR_CIF_BUSID_04,
                #else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
				// honghashen_test hhs_1219
                .get_pwdpin = rk_sensor_get_pwdpin,
                .power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_04 != INVALID_GPIO)
                .reset		= rk_sensor_reset,
                #endif
                .powerdown	= rk_sensor_powerdown,
                //.board_info = &rk_i2c_cam_info_0[0],

                .i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_04,
                .module_name	= SENSOR_NAME_04,
                .fov_v = FOV_V_04,
                .fov_h = FOV_H_04,
            },
            .device_info = {
                .name	= "soc-camera-pdrv",
                //.id = 1,
                .dev	= {
	                .init_name = SENSOR_DEVICE_NAME_04,
	                //.platform_data = &rk_iclink_0,
                }
            }
        #endif
	    },
        #endif

	  #ifdef CONFIG_SENSOR_1
        {
	    #if (CONFIG_SENSOR_IIC_ADDR_1 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_1, CONFIG_SENSOR_IIC_ADDR_1>>1)
            },
            .link_info = {
            	#ifdef SENSOR_CIF_BUSID_1
            	.bus_id= SENSOR_CIF_BUSID_1,
            	#else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
				// honghashen_test hhs_1219
		.get_pwdpin = rk_sensor_get_pwdpin,
            	.power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_1 != INVALID_GPIO)
            	.reset		= rk_sensor_reset,
                #endif	  
            	.powerdown	= rk_sensor_powerdown,
            	//.board_info = &rk_i2c_cam_info_0[0],
            	
            	.i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_1,
            	.module_name	= SENSOR_NAME_1,
            	.fov_v = FOV_V_1,
            	.fov_h = FOV_H_1,
            },
            .device_info = {
            	.name	= "soc-camera-pdrv",
            	//.id = 1,
            	.dev	= {
            		.init_name = SENSOR_DEVICE_NAME_1,
            		//.platform_data = &rk_iclink_0,
            	}
            }
        #endif
	    },
	    #endif


        #ifdef CONFIG_SENSOR_11
        {	    
        #if (CONFIG_SENSOR_IIC_ADDR_11 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_11, CONFIG_SENSOR_IIC_ADDR_11>>1)
            },
            .link_info = {
            	#ifdef SENSOR_CIF_BUSID_11
            	.bus_id= SENSOR_CIF_BUSID_11,
            	#else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
				// honghashen_test hhs_1219
		.get_pwdpin = rk_sensor_get_pwdpin,
            	.power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_1 != INVALID_GPIO)
            	.reset		= rk_sensor_reset,
                #endif	  
            	.powerdown	= rk_sensor_powerdown,
            	//.board_info = &rk_i2c_cam_info_0[0],
            	
            	.i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_11,
            	.module_name	= SENSOR_NAME_11,
             .fov_v = FOV_V_11,
             .fov_h = FOV_H_11,
            },
            .device_info = {
            	.name	= "soc-camera-pdrv",
            	//.id = 1,
            	.dev	= {
            		.init_name = SENSOR_DEVICE_NAME_11,
            		//.platform_data = &rk_iclink_0,
            	}
            }
        #endif        
	    },
        #endif
        #ifdef CONFIG_SENSOR_12
        {	    
	    #if (CONFIG_SENSOR_IIC_ADDR_12 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_12, CONFIG_SENSOR_IIC_ADDR_12>>1)
            },
            .link_info = {
            	#ifdef SENSOR_CIF_BUSID_12
            	.bus_id= SENSOR_CIF_BUSID_12,
            	#else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
				// honghashen_test hhs_1219
		.get_pwdpin = rk_sensor_get_pwdpin,
            	.power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_1 != INVALID_GPIO)
            	.reset		= rk_sensor_reset,
                #endif	  
            	.powerdown	= rk_sensor_powerdown,
            	//.board_info = &rk_i2c_cam_info_0[0],
            	
            	.i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_12,
            	.module_name	= SENSOR_NAME_12,
             .fov_v = FOV_V_12,
             .fov_h = FOV_H_12,
            },
            .device_info = {
            	.name	= "soc-camera-pdrv",
            	//.id = 1,
            	.dev	= {
            		.init_name = SENSOR_DEVICE_NAME_12,
            		//.platform_data = &rk_iclink_0,
            	}
            }
        #endif        
	    },
        #endif

	  #ifdef CONFIG_SENSOR_13
        {	    
	    #if (CONFIG_SENSOR_IIC_ADDR_13 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_13, CONFIG_SENSOR_IIC_ADDR_13>>1)
            },
            .link_info = {
            	#ifdef SENSOR_CIF_BUSID_13
            	.bus_id= SENSOR_CIF_BUSID_13,
            	#else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
				// honghashen_test hhs_1219
		.get_pwdpin = rk_sensor_get_pwdpin,
            	.power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_1 != INVALID_GPIO)
            	.reset		= rk_sensor_reset,
                #endif	  
            	.powerdown	= rk_sensor_powerdown,
            	//.board_info = &rk_i2c_cam_info_0[0],
            	
            	.i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_13,
            	.module_name	= SENSOR_NAME_13,
             .fov_v = FOV_V_13,
             .fov_h = FOV_H_13,
            },
            .device_info = {
            	.name	= "soc-camera-pdrv",
            	//.id = 1,
            	.dev	= {
            		.init_name = SENSOR_DEVICE_NAME_13,
            		//.platform_data = &rk_iclink_0,
            	}
            }
        #endif        
	    },
        #endif

		  #ifdef CONFIG_SENSOR_14
        {	    
	    #if (CONFIG_SENSOR_IIC_ADDR_14 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_14, CONFIG_SENSOR_IIC_ADDR_14>>1)
            },
            .link_info = {
            	#ifdef SENSOR_CIF_BUSID_14
            	.bus_id= SENSOR_CIF_BUSID_14,
            	#else
                .bus_id= RK29_CAM_PLATFORM_DEV_ID,
                #endif
				// honghashen_test hhs_1219
		.get_pwdpin = rk_sensor_get_pwdpin,
            	.power		= rk_sensor_power,
                #if (CONFIG_SENSOR_RESET_PIN_1 != INVALID_GPIO)
            	.reset		= rk_sensor_reset,
                #endif	  
            	.powerdown	= rk_sensor_powerdown,
            	//.board_info = &rk_i2c_cam_info_0[0],
            	
            	.i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_14,
            	.module_name	= SENSOR_NAME_14,
            	.fov_v = FOV_V_14,
            	.fov_h = FOV_H_14,
            },
            .device_info = {
            	.name	= "soc-camera-pdrv",
            	//.id = 1,
            	.dev	= {
            		.init_name = SENSOR_DEVICE_NAME_14,
            		//.platform_data = &rk_iclink_0,
            	}
            }
        #endif        
	    },
        #endif
		  #ifdef CONFIG_SENSOR_15
        {
	    #if (CONFIG_SENSOR_IIC_ADDR_15 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_15, CONFIG_SENSOR_IIC_ADDR_15>>1)
            },
            .link_info = {
	            #ifdef SENSOR_CIF_BUSID_15
	            .bus_id= SENSOR_CIF_BUSID_15,
	            #else
	            .bus_id= RK29_CAM_PLATFORM_DEV_ID,
	            #endif
					// honghashen_test hhs_1219
	            .get_pwdpin = rk_sensor_get_pwdpin,
	            .power		= rk_sensor_power,
	            #if (CONFIG_SENSOR_RESET_PIN_15 != INVALID_GPIO)
	            .reset		= rk_sensor_reset,
	            #endif
	            .powerdown	= rk_sensor_powerdown,
	            //.board_info = &rk_i2c_cam_info_0[0],

	            .i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_15,
	            .module_name	= SENSOR_NAME_15,
	            .fov_v = FOV_V_15,
            	.fov_h = FOV_H_15,
            },
            .device_info = {
	            .name	= "soc-camera-pdrv",
	            //.id = 1,
	            .dev	= {
	            .init_name = SENSOR_DEVICE_NAME_15,
	            //.platform_data = &rk_iclink_0,
            }
            }
        #endif
	    },
        #endif

	#ifdef CONFIG_SENSOR_16
        {
	    #if (CONFIG_SENSOR_IIC_ADDR_16 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_16, CONFIG_SENSOR_IIC_ADDR_16>>1)
            },
            .link_info = {
	            #ifdef SENSOR_CIF_BUSID_16
	            .bus_id= SENSOR_CIF_BUSID_16,
	            #else
	            .bus_id= RK29_CAM_PLATFORM_DEV_ID,
	            #endif
					// honghashen_test hhs_1219
	            .get_pwdpin = rk_sensor_get_pwdpin,
	            .power		= rk_sensor_power,
	            #if (CONFIG_SENSOR_RESET_PIN_16 != INVALID_GPIO)
	            .reset		= rk_sensor_reset,
	            #endif
	            .powerdown	= rk_sensor_powerdown,
	            //.board_info = &rk_i2c_cam_info_0[0],

	            .i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_16,
	            .module_name	= SENSOR_NAME_16,
	            .fov_v = FOV_V_16,
            	.fov_h = FOV_H_16,
            },
            .device_info = {
	            .name	= "soc-camera-pdrv",
	            //.id = 1,
	            .dev	= {
	            .init_name = SENSOR_DEVICE_NAME_16,
	            //.platform_data = &rk_iclink_0,
            }
            }
        #endif
	    },
        #endif

		#ifdef CONFIG_SENSOR_17
        {
	    #if (CONFIG_SENSOR_IIC_ADDR_17 != 0x00)
            .i2c_cam_info = {
                I2C_BOARD_INFO(SENSOR_NAME_17, CONFIG_SENSOR_IIC_ADDR_17>>1)
            },
            .link_info = {
	            #ifdef SENSOR_CIF_BUSID_17
	            .bus_id= SENSOR_CIF_BUSID_17,
	            #else
	            .bus_id= RK29_CAM_PLATFORM_DEV_ID,
	            #endif
					// honghashen_test hhs_1219
	            .get_pwdpin = rk_sensor_get_pwdpin,
	            .power		= rk_sensor_power,
	            #if (CONFIG_SENSOR_RESET_PIN_17 != INVALID_GPIO)
	            .reset		= rk_sensor_reset,
	            #endif
	            .powerdown	= rk_sensor_powerdown,
	            //.board_info = &rk_i2c_cam_info_0[0],

	            .i2c_adapter_id = CONFIG_SENSOR_IIC_ADAPTER_ID_17,
	            .module_name	= SENSOR_NAME_17,
	            .fov_v = FOV_V_17,
                   .fov_h = FOV_H_17,
            },
            .device_info = {
	            .name	= "soc-camera-pdrv",
	            //.id = 1,
	            .dev	= {
	            .init_name = SENSOR_DEVICE_NAME_17,
	            //.platform_data = &rk_iclink_0,
            }
            }
        #endif
	    },
        #endif

	},
};


static int sensor_power_default_cb (struct rk29camera_gpio_res *res, int on)
{
    int camera_power = res->gpio_power;
    int camera_ioflag = res->gpio_flag;
    int camera_io_init = res->gpio_init;
    int ret = 0;
    
    if (camera_power != INVALID_GPIO)  {
		if (camera_io_init & RK29_CAM_POWERACTIVE_MASK) {
            if (on) {
            	gpio_set_value(camera_power, ((camera_ioflag&RK29_CAM_POWERACTIVE_MASK)>>RK29_CAM_POWERACTIVE_BITPOS));
    			dprintk("%s..%s..PowerPin=%d ..PinLevel = %x   \n",__FUNCTION__,res->dev_name, camera_power, ((camera_ioflag&RK29_CAM_POWERACTIVE_MASK)>>RK29_CAM_POWERACTIVE_BITPOS));
    			msleep(10);
    		} else {
    			gpio_set_value(camera_power, (((~camera_ioflag)&RK29_CAM_POWERACTIVE_MASK)>>RK29_CAM_POWERACTIVE_BITPOS));
    			dprintk("%s..%s..PowerPin=%d ..PinLevel = %x   \n",__FUNCTION__,res->dev_name, camera_power, (((~camera_ioflag)&RK29_CAM_POWERACTIVE_MASK)>>RK29_CAM_POWERACTIVE_BITPOS));
    		}
		} else {
			ret = RK29_CAM_EIO_REQUESTFAIL;
			printk("%s..%s..PowerPin=%d request failed!\n",__FUNCTION__,res->dev_name,camera_power);
	    }        
    } else {
		ret = RK29_CAM_EIO_INVALID;
    } 

    return ret;
}

static int sensor_reset_default_cb (struct rk29camera_gpio_res *res, int on)
{
    int camera_reset = res->gpio_reset;
    int camera_ioflag = res->gpio_flag;
    int camera_io_init = res->gpio_init;  
    int ret = 0;
    
    if (camera_reset != INVALID_GPIO) {
		if (camera_io_init & RK29_CAM_RESETACTIVE_MASK) {
			if (on) {
	        	gpio_set_value(camera_reset, ((camera_ioflag&RK29_CAM_RESETACTIVE_MASK)>>RK29_CAM_RESETACTIVE_BITPOS));
	        	dprintk("%s..%s..ResetPin=%d ..PinLevel = %x \n",__FUNCTION__,res->dev_name,camera_reset, ((camera_ioflag&RK29_CAM_RESETACTIVE_MASK)>>RK29_CAM_RESETACTIVE_BITPOS));
			} else {
				gpio_set_value(camera_reset,(((~camera_ioflag)&RK29_CAM_RESETACTIVE_MASK)>>RK29_CAM_RESETACTIVE_BITPOS));
        		dprintk("%s..%s..ResetPin= %d..PinLevel = %x   \n",__FUNCTION__,res->dev_name, camera_reset, (((~camera_ioflag)&RK29_CAM_RESETACTIVE_MASK)>>RK29_CAM_RESETACTIVE_BITPOS));
	        }
		} else {
			ret = RK29_CAM_EIO_REQUESTFAIL;
			printk("%s..%s..ResetPin=%d request failed!\n",__FUNCTION__,res->dev_name,camera_reset);
		}
    } else {
		ret = RK29_CAM_EIO_INVALID;
    }

    return ret;
}

static int sensor_powerdown_default_cb (struct rk29camera_gpio_res *res, int on)
{
    int camera_powerdown = res->gpio_powerdown;
    int camera_ioflag = res->gpio_flag;
    int camera_io_init = res->gpio_init;  
    int ret = 0;    

    if (camera_powerdown != INVALID_GPIO) {
		if (camera_io_init & RK29_CAM_POWERDNACTIVE_MASK) {
			if (on) {
	        	gpio_set_value(camera_powerdown, ((camera_ioflag&RK29_CAM_POWERDNACTIVE_MASK)>>RK29_CAM_POWERDNACTIVE_BITPOS));
	        	dprintk("%s..%s..PowerDownPin=%d ..PinLevel = %x \n",__FUNCTION__,res->dev_name,camera_powerdown, ((camera_ioflag&RK29_CAM_POWERDNACTIVE_MASK)>>RK29_CAM_POWERDNACTIVE_BITPOS));
			} else {
				gpio_set_value(camera_powerdown,(((~camera_ioflag)&RK29_CAM_POWERDNACTIVE_MASK)>>RK29_CAM_POWERDNACTIVE_BITPOS));
        		dprintk("%s..%s..PowerDownPin= %d..PinLevel = %x   \n",__FUNCTION__,res->dev_name, camera_powerdown, (((~camera_ioflag)&RK29_CAM_POWERDNACTIVE_MASK)>>RK29_CAM_POWERDNACTIVE_BITPOS));
	        }
		} else {
			ret = RK29_CAM_EIO_REQUESTFAIL;
			dprintk("%s..%s..PowerDownPin=%d request failed!\n",__FUNCTION__,res->dev_name,camera_powerdown);
		}
    } else {
		ret = RK29_CAM_EIO_INVALID;
    }
    return ret;
}


static int sensor_flash_default_cb (struct rk29camera_gpio_res *res, int on)
{
    int camera_flash = res->gpio_flash;
    int camera_torch = res->gpio_torch;
    int camera_ioflag = res->gpio_flag;
    int camera_io_init = res->gpio_init;  
    int ret = 0;    

    if ((camera_flash != INVALID_GPIO) || (camera_torch != INVALID_GPIO)) {
		if (camera_io_init & RK29_CAM_FLASHACTIVE_MASK) {
            switch (on)
            {
                case Flash_Off:
                {
                    gpio_set_value(camera_torch, ((~camera_ioflag&RK29_CAM_TORCHACTIVE_MASK)>>RK29_CAM_TORCHACTIVE_BITPOS));
                    gpio_set_value(camera_flash,(((~camera_ioflag)&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS));
        		    printk("\n%s..%s..FlashPin= %d..PinLevel = %x   \n",__FUNCTION__,res->dev_name, camera_flash, (((~camera_ioflag)&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS)); 
        		    break;
                }

                case Flash_On:
                {
			gpio_set_value(camera_torch, ((~camera_ioflag&RK29_CAM_TORCHACTIVE_MASK)>>RK29_CAM_TORCHACTIVE_BITPOS));
                    gpio_set_value(camera_flash, ((camera_ioflag&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS));
	        	    printk("%s..%s..FlashPin=%d ..PinLevel = %x \n",__FUNCTION__,res->dev_name,camera_flash, ((camera_ioflag&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS));
	        	    break;
                }

                case Flash_Torch_On:
                {
                    gpio_set_value(camera_torch, ((camera_ioflag&RK29_CAM_TORCHACTIVE_MASK)>>RK29_CAM_TORCHACTIVE_BITPOS));
			gpio_set_value(camera_flash, ((camera_ioflag&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS));
	        	    printk("%s..%s..TorchPin=%d ..PinLevel = %x \n",__FUNCTION__,res->dev_name,camera_torch, ((camera_ioflag&RK29_CAM_TORCHACTIVE_MASK)>>RK29_CAM_TORCHACTIVE_BITPOS));
	        	    break;
                }
		case Flash_Torch_Off:
                {
                    gpio_set_value(camera_torch, ((~camera_ioflag&RK29_CAM_TORCHACTIVE_MASK)>>RK29_CAM_TORCHACTIVE_BITPOS));
			gpio_set_value(camera_flash,(((~camera_ioflag)&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS));
	        	    printk("%s..%s..TorchPin=%d ..PinLevel = %x \n",__FUNCTION__,res->dev_name,camera_torch, ((~camera_ioflag&RK29_CAM_TORCHACTIVE_MASK)>>RK29_CAM_TORCHACTIVE_BITPOS));
	        	    break;
                }

                default:
                {
                    printk("%s..%s..Flash command(%d) is invalidate \n",__FUNCTION__,res->dev_name,on);
                    break;
                }
            }
		} else {
			ret = RK29_CAM_EIO_REQUESTFAIL;
			printk("%s..%s..FlashPin=%d request failed!\n",__FUNCTION__,res->dev_name,camera_flash);
		}
    } else {
		ret = RK29_CAM_EIO_INVALID;
    }
    return ret;
}
static void rk29_sensor_fps_get(int idx, unsigned int *val, int w, int h)
{
    switch (idx)
    {
        case 0:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_0;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_0
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_0;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_0;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_0;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_0;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_0;
            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_0;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_0;
            }
            break;
        }
        case 1:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_1;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_1
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_1;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_1;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_1;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_1;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_1;
            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_1;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_1;
            }
            break;
        }

        #ifdef CONFIG_SENSOR_01
        case 2:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_01;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_01
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_01;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_01;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_01;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_01;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_01;
            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_01;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_01;
            }
            break;
        }
        #endif
        #ifdef CONFIG_SENSOR_02
        case 3:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_02;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_02
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_02;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_02;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_02;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_02;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_02;
            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_02;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_02;
            }
            break;
        }
        #endif

	  #ifdef CONFIG_SENSOR_03
        case 4:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_03;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_03
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_03;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_03;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_03;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_03;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_03;
                            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_03;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_03;
            }
            break;
        }
        #endif

	  #ifdef CONFIG_SENSOR_04
        case 5:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_04;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_04
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_04;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_04;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_04;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_04;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_04;
                            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_04;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_04;
            }
            break;
        }
        #endif

        #ifdef CONFIG_SENSOR_11
        case 6:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_11;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_11
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_11;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_11;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_11;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_11;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_11;
            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_11;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_11;
            }
            break;
        }
        #endif
        #ifdef CONFIG_SENSOR_12
        case 7:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_12;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_12
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_12;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_12;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_12;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_12;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_12;
            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_12;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_12;
            }
            break;
        }
        #endif
	    #ifdef CONFIG_SENSOR_13
        case 8:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_13;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_13
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_13;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_13;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_13;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_13;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_13;
                            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_14;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_13;
            }
            break;
        }
        #endif

	#ifdef CONFIG_SENSOR_14
        case 9:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_14;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_14
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_14;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_14;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_14;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_14;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_14;
                            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_14;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_14;
            }
            break;
        }
        #endif

	#ifdef CONFIG_SENSOR_15
        case 10:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_15;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_15
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_15;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_15;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_15;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_15;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_15;
                            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_15;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_15;
            }
            break;
        }
        #endif

	#ifdef CONFIG_SENSOR_16
        case 11:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_16;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_16
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_16;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_16;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_16;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_16;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_16;
                            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_16;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_16;
            }
            break;
        }
        #endif

	#ifdef CONFIG_SENSOR_17
        case 12:
        {
            if ((w==176) && (h==144)) {
                *val = CONFIG_SENSOR_QCIF_FPS_FIXED_17;
            #ifdef CONFIG_SENSOR_240X160_FPS_FIXED_17
            } else if ((w==240) && (h==160)) {
                *val = CONFIG_SENSOR_240X160_FPS_FIXED_17;
            #endif
            } else if ((w==320) && (h==240)) {
                *val = CONFIG_SENSOR_QVGA_FPS_FIXED_17;
            } else if ((w==352) && (h==288)) {
                *val = CONFIG_SENSOR_CIF_FPS_FIXED_17;
            } else if ((w==640) && (h==480)) {
                *val = CONFIG_SENSOR_VGA_FPS_FIXED_17;
            } else if ((w==720) && (h==480)) {
                *val = CONFIG_SENSOR_480P_FPS_FIXED_17;
                            } else if ((w==800) && (h==600)) {
                *val = CONFIG_SENSOR_SVGA_FPS_FIXED_17;
            } else if ((w==1280) && (h==720)) {
                *val = CONFIG_SENSOR_720P_FPS_FIXED_17;
            }
            break;
        }
        #endif

        default:
            printk(KERN_ERR"rk_cam_io: sensor-%d have not been define in board file!",idx);
    }
}

static int rk_sensor_io_init(void)
{
    int ret = 0, i,j;
    unsigned int camera_reset = INVALID_GPIO, camera_power = INVALID_GPIO;
	unsigned int camera_powerdown = INVALID_GPIO, camera_flash = INVALID_GPIO;
	unsigned int camera_ioflag, camera_torch = INVALID_GPIO;
	static bool is_init = false;
	struct rk29camera_platform_data* plat_data = &rk_camera_platform_data;

    if(is_init) {		
		return 0;
	} else {
		is_init = true;
		#if defined(CONFIG_MALATA_D1012)||defined(CONFIG_MALATA_D1014) || defined(CONFIG_MALATA_D7022)
		gpio_request(RK30_PIN1_PA6, "camera power");
		gpio_direction_output(RK30_PIN1_PA6,0);
		#endif
		#if defined(CONFIG_MALATA_D1015)
		gpio_request(RK30_PIN2_PD4, "camera power");
		gpio_direction_output(RK30_PIN2_PD4,0);
		#endif
	}
    
    if (sensor_ioctl_cb.sensor_power_cb == NULL)
        sensor_ioctl_cb.sensor_power_cb = sensor_power_default_cb;
    if (sensor_ioctl_cb.sensor_reset_cb == NULL)
        sensor_ioctl_cb.sensor_reset_cb = sensor_reset_default_cb;
    if (sensor_ioctl_cb.sensor_powerdown_cb == NULL)
        sensor_ioctl_cb.sensor_powerdown_cb = sensor_powerdown_default_cb;
    if (sensor_ioctl_cb.sensor_flash_cb == NULL)
        sensor_ioctl_cb.sensor_flash_cb = sensor_flash_default_cb;
    
	for(i = 0;i < RK_CAM_NUM; i++){
        if (plat_data->gpio_res[i].dev_name == NULL)
            continue;
		camera_reset = plat_data->gpio_res[i].gpio_reset;
		camera_power = plat_data->gpio_res[i].gpio_power;
		camera_powerdown = plat_data->gpio_res[i].gpio_powerdown;
		camera_flash = plat_data->gpio_res[i].gpio_flash;
		camera_torch = plat_data->gpio_res[i].gpio_torch;
		camera_ioflag = plat_data->gpio_res[i].gpio_flag;
		plat_data->gpio_res[i].gpio_init = 0;

        if (camera_power != INVALID_GPIO) {
            ret = gpio_request(camera_power, "camera power");
            if (ret) {
                for (j=0; j<i; j++) {
                    if (camera_power == plat_data->gpio_res[j].gpio_power)
                        break;
                }
                if (i==j) {
                    printk(KERN_ERR"rk_cam_io: %s..%s..power pin(%d) init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_power);
                    goto sensor_io_init_erro;
                }
            }

            if (rk_camera_platform_data.iomux(camera_power) < 0) {
                printk(KERN_ERR "rk_cam_io: %s..%s..power pin(%d) iomux init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_power);
              //  goto sensor_io_init_erro;
            }
            
			plat_data->gpio_res[i].gpio_init |= RK29_CAM_POWERACTIVE_MASK;
            gpio_set_value(camera_reset, (((~camera_ioflag)&RK29_CAM_POWERACTIVE_MASK)>>RK29_CAM_POWERACTIVE_BITPOS));
            gpio_direction_output(camera_power, (((~camera_ioflag)&RK29_CAM_POWERACTIVE_MASK)>>RK29_CAM_POWERACTIVE_BITPOS));

			dprintk("%s....power pin(%d) init success(0x%x)  \n",__FUNCTION__,camera_power,(((~camera_ioflag)&RK29_CAM_POWERACTIVE_MASK)>>RK29_CAM_POWERACTIVE_BITPOS));

        }

        if (camera_reset != INVALID_GPIO) {
            ret = gpio_request(camera_reset, "camera reset");
            if (ret) {
                for (j=0; j<i; j++) {
                    if (camera_reset == plat_data->gpio_res[j].gpio_reset) {                        
                        break;
                    }
                }
                if (i==j) {
                    printk(KERN_ERR"rk_cam_io: %s..%s..reset pin(%d) init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_reset);
                    goto sensor_io_init_erro;
                }
                
                printk("%s..%s..reset pin(%d) init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_reset);
                //goto sensor_io_init_erro;
            }

            if (rk_camera_platform_data.iomux(camera_reset) < 0) {
                printk(KERN_ERR"rk_cam_io: %s..%s..reset pin(%d) iomux init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_reset);
                goto sensor_io_init_erro;
            }
            
			plat_data->gpio_res[i].gpio_init |= RK29_CAM_RESETACTIVE_MASK;
            gpio_set_value(camera_reset, ((camera_ioflag&RK29_CAM_RESETACTIVE_MASK)>>RK29_CAM_RESETACTIVE_BITPOS));
            gpio_direction_output(camera_reset, ((camera_ioflag&RK29_CAM_RESETACTIVE_MASK)>>RK29_CAM_RESETACTIVE_BITPOS));

			dprintk("%s....reset pin(%d) init success(0x%x)\n",__FUNCTION__,camera_reset,((camera_ioflag&RK29_CAM_RESETACTIVE_MASK)>>RK29_CAM_RESETACTIVE_BITPOS));

        }

		if (camera_powerdown != INVALID_GPIO) {
            ret = gpio_request(camera_powerdown, "camera powerdown");
            if (ret) {
                for (j=0; j<i; j++) {
                    if (camera_powerdown == plat_data->gpio_res[j].gpio_powerdown) {                        
                        break;
                    }
                }
                if (i==j) {
                    printk(KERN_ERR"rk_cam_io: %s..%s..powerdown pin(%d) init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_powerdown);
                    goto sensor_io_init_erro;
                }
                printk("%s..%s..powerdown pin(%d) init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_powerdown);
               // goto sensor_io_init_erro;
            }

            if (rk_camera_platform_data.iomux(camera_powerdown) < 0) {
                printk(KERN_ERR "rk_cam_io: %s..%s..powerdown pin(%d) iomux init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_powerdown);
                goto sensor_io_init_erro;
            }
            
			plat_data->gpio_res[i].gpio_init |= RK29_CAM_POWERDNACTIVE_MASK;
            gpio_set_value(camera_powerdown, ((camera_ioflag&RK29_CAM_POWERDNACTIVE_MASK)>>RK29_CAM_POWERDNACTIVE_BITPOS));
            gpio_direction_output(camera_powerdown, ((camera_ioflag&RK29_CAM_POWERDNACTIVE_MASK)>>RK29_CAM_POWERDNACTIVE_BITPOS));

			dprintk("%s....powerdown pin(%d) init success(0x%x) \n",__FUNCTION__,camera_powerdown,((camera_ioflag&RK29_CAM_POWERDNACTIVE_BITPOS)>>RK29_CAM_POWERDNACTIVE_BITPOS));

        }

		if (camera_flash != INVALID_GPIO) {
            ret = gpio_request(camera_flash, "camera flash");
            if (ret) {
                for (j=0; j<i; j++) {
                    if (camera_flash == plat_data->gpio_res[j].gpio_flash) {                        
                        break;
                    }
                }
                if (i==j) {
                    printk(KERN_ERR"rk_cam_io: %s..%s..flash pin(%d) init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_flash);
                    goto sensor_io_init_erro;
                }
                printk("%s..%s..flash pin(%d) init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_flash);
				//goto sensor_io_init_erro;
            }

	if (camera_torch != INVALID_GPIO) {
		ret = gpio_request(camera_torch, "camera torch");
		if (ret) {
			for (j=0; j<i; j++) {
				if (camera_torch == plat_data->gpio_res[j].gpio_torch) {			
					break;
				}
			}
			if (i==j) {
				printk(KERN_ERR"rk_cam_io: %s..%s..torch pin(%d) init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_torch);
				goto sensor_io_init_erro;
			}
			printk("%s..%s..torch pin(%d) init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_torch);
			//goto sensor_io_init_erro;
		}
	}
            if (rk_camera_platform_data.iomux(camera_flash) < 0) {
                printk(KERN_ERR "rk_cam_io: %s..%s..flash pin(%d) iomux init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_flash);                
            }
            if (rk_camera_platform_data.iomux(camera_torch) < 0) {
                printk(KERN_ERR "rk_cam_io: %s..%s..torch pin(%d) iomux init failed\n",__FUNCTION__,plat_data->gpio_res[i].dev_name,camera_torch);      
            }
            
			plat_data->gpio_res[i].gpio_init |= RK29_CAM_FLASHACTIVE_MASK;
			plat_data->gpio_res[i].gpio_init |= RK29_CAM_TORCHACTIVE_MASK;
            gpio_set_value(camera_flash, ((~camera_ioflag&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS));    /* falsh off */
            gpio_direction_output(camera_flash, ((~camera_ioflag&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS));
            gpio_set_value(camera_torch, ((~camera_ioflag&RK29_CAM_TORCHACTIVE_MASK)>>RK29_CAM_TORCHACTIVE_BITPOS));    /* torch*/
            gpio_direction_output(camera_torch, ((~camera_ioflag&RK29_CAM_TORCHACTIVE_MASK)>>RK29_CAM_TORCHACTIVE_BITPOS));

	   dprintk("%s....flash pin(%d) init success(0x%x) \n",__FUNCTION__,camera_flash,((camera_ioflag&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS));
	   dprintk("%s....torch pin(%d) init success(0x%x) \n",__FUNCTION__,camera_torch,((camera_ioflag&RK29_CAM_FLASHACTIVE_MASK)>>RK29_CAM_FLASHACTIVE_BITPOS));

        }  

        
        for (j=0; j<10; j++) {
            memset(&plat_data->info[i].fival[j],0x00,sizeof(struct v4l2_frmivalenum));

            if (j==0) {
                plat_data->info[i].fival[j].width = 176;
                plat_data->info[i].fival[j].height = 144;
            } else if (j==1) {
                plat_data->info[i].fival[j].width = 320;
                plat_data->info[i].fival[j].height = 240;
            } else if (j==2) {
                plat_data->info[i].fival[j].width = 352;
                plat_data->info[i].fival[j].height = 288;
            } else if (j==3) {
                plat_data->info[i].fival[j].width = 640;
                plat_data->info[i].fival[j].height = 480;
            } else if (j==4) {
                plat_data->info[i].fival[j].width = 720;
                plat_data->info[i].fival[j].height = 480;
            } else if (j==5) {
                plat_data->info[i].fival[j].width = 1280;
                plat_data->info[i].fival[j].height = 720;
            } else if (j==6) {
                plat_data->info[i].fival[j].width = 240;
                plat_data->info[i].fival[j].height = 160;
            } else if (j==7) {
                plat_data->info[i].fival[j].width = 800;
                plat_data->info[i].fival[j].height = 600;
            }
            if (plat_data->info[i].fival[j].width && plat_data->info[i].fival[j].height) {
                rk29_sensor_fps_get(i,&plat_data->info[i].fival[j].discrete.denominator,
                    plat_data->info[i].fival[j].width,plat_data->info[i].fival[j].height);
                plat_data->info[i].fival[j].discrete.numerator= 1000;
                plat_data->info[i].fival[j].index = 0;
                plat_data->info[i].fival[j].pixel_format = V4L2_PIX_FMT_NV12;
                plat_data->info[i].fival[j].type = V4L2_FRMIVAL_TYPE_DISCRETE;
            }
        }
        
	continue;
sensor_io_init_erro:
		rk_sensor_io_deinit(i);
	}
	return 0;
}

static int rk_sensor_io_deinit(int sensor)
{
    unsigned int camera_reset = INVALID_GPIO, camera_power = INVALID_GPIO;
	unsigned int camera_powerdown = INVALID_GPIO, camera_flash = INVALID_GPIO;
	unsigned int camera_torch = INVALID_GPIO;
	struct rk29camera_platform_data* plat_data = &rk_camera_platform_data;
    
    camera_reset = plat_data->gpio_res[sensor].gpio_reset;
    camera_power = plat_data->gpio_res[sensor].gpio_power;
	camera_powerdown = plat_data->gpio_res[sensor].gpio_powerdown;
    camera_flash = plat_data->gpio_res[sensor].gpio_flash;
    camera_torch = plat_data->gpio_res[sensor].gpio_torch;

	if (plat_data->gpio_res[sensor].gpio_init & RK29_CAM_POWERACTIVE_MASK) {
	    if (camera_power != INVALID_GPIO) {
	        gpio_direction_input(camera_power);
	        gpio_free(camera_power);
	    }
	}

	if (plat_data->gpio_res[sensor].gpio_init & RK29_CAM_RESETACTIVE_MASK) {
	    if (camera_reset != INVALID_GPIO)  {
	        gpio_direction_input(camera_reset);
	        gpio_free(camera_reset);
	    }
	}

	if (plat_data->gpio_res[sensor].gpio_init & RK29_CAM_POWERDNACTIVE_MASK) {
	    if (camera_powerdown != INVALID_GPIO)  {
	        gpio_direction_input(camera_powerdown);
	        gpio_free(camera_powerdown);
	    }
	}

	if (plat_data->gpio_res[sensor].gpio_init & RK29_CAM_FLASHACTIVE_MASK) {
	    if (camera_flash != INVALID_GPIO)  {
	        gpio_direction_input(camera_flash);
	        gpio_free(camera_flash);
	    }
	    if (camera_torch != INVALID_GPIO)  {
	        gpio_direction_input(camera_torch);
	        gpio_free(camera_torch);
	    }
	}
	plat_data->gpio_res[sensor].gpio_init = 0;
	
    return 0;
}
static int rk_sensor_ioctrl(struct device *dev,enum rk29camera_ioctrl_cmd cmd, int on)
{
    struct rk29camera_gpio_res *res = NULL;    
	int ret = RK29_CAM_IO_SUCCESS,i = 0;
	struct rk29camera_platform_data* plat_data = &rk_camera_platform_data;
	//for test reg
	for(i = 0;i < RK_CAM_NUM;i++){
		if(plat_data->gpio_res[i].dev_name &&  (strcmp(plat_data->gpio_res[i].dev_name, dev_name(dev)) == 0)) {
			res = (struct rk29camera_gpio_res *)&plat_data->gpio_res[i];
			break;
	    } 
    } 
    
    if (res == NULL) {
        printk(KERN_ERR "rk_cam_io: %s is not regisiterd in rk29_camera_platform_data!!\n",dev_name(dev));
        ret = RK29_CAM_EIO_INVALID;
        goto rk_sensor_ioctrl_end;
    }
	
	switch (cmd)
 	{
 		case Cam_Power:
		{
			if (sensor_ioctl_cb.sensor_power_cb) {
				if(res->vdd_val == VDD_15V)
				ret = sensor_ioctl_cb.sensor_power_cb(res, on,VDD_15V);
				else
				ret = sensor_ioctl_cb.sensor_power_cb(res, on,VDD_18V);	
			} else {
                printk(KERN_ERR "sensor_ioctl_cb.sensor_power_cb is NULL");
                WARN_ON(1);
			}
			break;
		}
		case Cam_Reset:
		{
			if (sensor_ioctl_cb.sensor_reset_cb) {
                ret = sensor_ioctl_cb.sensor_reset_cb(res, on);
			} else {
                printk(KERN_ERR "sensor_ioctl_cb.sensor_reset_cb is NULL");
                WARN_ON(1);
			}
			break;
		}

		case Cam_PowerDown:
		{
			if (sensor_ioctl_cb.sensor_powerdown_cb) {
                ret = sensor_ioctl_cb.sensor_powerdown_cb(res, on);
			} else {
                printk(KERN_ERR "sensor_ioctl_cb.sensor_powerdown_cb is NULL");
                WARN_ON(1);
			}
			break;
		}

		case Cam_Flash:
		{
			if (sensor_ioctl_cb.sensor_flash_cb) {
                ret = sensor_ioctl_cb.sensor_flash_cb(res, on);
			} else {
                printk(KERN_ERR "sensor_ioctl_cb.sensor_flash_cb is NULL!");
                WARN_ON(1);
			}
			break;
		}
		default:
		{
			printk("%s cmd(0x%x) is unknown!\n",__FUNCTION__, cmd);
			break;
		}
 	}
rk_sensor_ioctrl_end:
    return ret;
}
// honghaishen_test  hhs_1219 start 
static unsigned int rk_sensor_get_pwdpin(struct device *dev, int * pin_level)
{
	struct rk29camera_gpio_res *res = NULL;    
	int ret = RK29_CAM_IO_SUCCESS,i = 0;
	int camera_ioflag =0;
	*pin_level=0;

	struct rk29camera_platform_data* plat_data = &rk_camera_platform_data;
	//for test reg
	for(i = 0;i < RK_CAM_NUM;i++){
		if(plat_data->gpio_res[i].dev_name &&  (strcmp(plat_data->gpio_res[i].dev_name, dev_name(dev)) == 0)) {
			res = (struct rk29camera_gpio_res *)&plat_data->gpio_res[i];
			break;
	    } 
    }
	
	if(res==NULL)
		return 0;
	camera_ioflag= res->gpio_flag;
	*pin_level = ((camera_ioflag&RK29_CAM_POWERDNACTIVE_MASK)>>RK29_CAM_POWERDNACTIVE_BITPOS);
	return  res->gpio_powerdown;

}
// honghaishen_test hhs_1219 end
static int rk_sensor_power(struct device *dev, int on )
{
    if (!on)                        /* ddl@rock-chips.com : Ensure sensor enter standby or power off */
        rk_sensor_powerdown(dev,1);
	rk_sensor_ioctrl(dev,Cam_Power,on);
    return 0;
}
#if (CONFIG_SENSOR_RESET_PIN_0 != INVALID_GPIO) || (CONFIG_SENSOR_RESET_PIN_1 != INVALID_GPIO)
static int rk_sensor_reset(struct device *dev)
{
	rk_sensor_ioctrl(dev,Cam_Reset,1);
	msleep(2);
	rk_sensor_ioctrl(dev,Cam_Reset,0);
	return 0;
}
#endif
static int rk_sensor_powerdown(struct device *dev, int on)
{
	return rk_sensor_ioctrl(dev,Cam_PowerDown,on);
}
#if ((defined PMEM_CAM_NECESSARY)&&(defined CONFIG_VIDEO_RK29_CAMMEM_PMEM))
static struct android_pmem_platform_data android_pmem_cam_pdata = {
	.name		= "pmem_cam",
	.start		= PMEM_CAM_BASE,
	.size		= PMEM_CAM_SIZE,
	.no_allocator	= 1,
	.cached		= 1,
};

static struct platform_device android_pmem_cam_device = {
	.name		= "android_pmem",
	.id		= 1,
	.dev		= {
		.platform_data = &android_pmem_cam_pdata,
	},
};
#endif
#ifdef CONFIG_RK_CONFIG
int camera_set_platform_param(int id, int i2c, int gpio)
{
        int i;
        char *dev_name[] = {
                SENSOR_DEVICE_NAME_0, 
                SENSOR_DEVICE_NAME_01, 
                SENSOR_DEVICE_NAME_02, 
                SENSOR_DEVICE_NAME_1, 
                SENSOR_DEVICE_NAME_11, 
                SENSOR_DEVICE_NAME_12
        };
        char *module_name[] = {
                SENSOR_NAME_0,
                SENSOR_NAME_01,
                SENSOR_NAME_02,
                SENSOR_NAME_1,
                SENSOR_NAME_11,
                SENSOR_NAME_12
        };

        if(id < 0 || id >= 6)
                return -EINVAL;
        for(i = 0; i < 6; i++){
                if(i == id){
                        printk("%s: id = %d, i2c = %d, gpio = %d\n", __func__, id, i2c, gpio);
                }
                if(rk_camera_platform_data.gpio_res[i].dev_name &&
                   strcmp(rk_camera_platform_data.gpio_res[i].dev_name, dev_name[id]) == 0)
                        rk_camera_platform_data.gpio_res[i].gpio_powerdown = gpio;
                if(rk_camera_platform_data.register_dev[i].link_info.module_name &&
                   strcmp(rk_camera_platform_data.register_dev[i].link_info.module_name, module_name[id]) == 0)
                        rk_camera_platform_data.register_dev[i].link_info.i2c_adapter_id = i2c;
        }

        return 0;
}
#else
int camera_set_platform_param(int id, int i2c, int gpio)
{
        return 0;
}
#endif
#endif


