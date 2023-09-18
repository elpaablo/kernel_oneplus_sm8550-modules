
/* Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

 
 
 
 
 
 
 


#ifndef _PHYRX_PKT_END_INFO_H_
#define _PHYRX_PKT_END_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#include "receive_rssi_info.h"
#include "rx_timing_offset_info.h"
#define NUM_OF_DWORDS_PHYRX_PKT_END_INFO 24


struct phyrx_pkt_end_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t phy_internal_nap                                        :  1,  
                      location_info_valid                                     :  1,  
                      timing_info_valid                                       :  1,  
                      rssi_info_valid                                         :  1,  
                      reserved_0a                                             :  1,  
                      frameless_frame_received                                :  1,  
                      reserved_0b                                             :  2,  
                      rssi_comb                                               :  8,  
                      reserved_0c                                             : 16;  
             uint32_t phy_timestamp_1_lower_32                                : 32;  
             uint32_t phy_timestamp_1_upper_32                                : 32;  
             uint32_t phy_timestamp_2_lower_32                                : 32;  
             uint32_t phy_timestamp_2_upper_32                                : 32;  
             struct   rx_timing_offset_info                                     rx_timing_offset_info_details;
             struct   receive_rssi_info                                         post_rssi_info_details;
             uint32_t phy_sw_status_31_0                                      : 32;  
             uint32_t phy_sw_status_63_32                                     : 32;  
#else
             uint32_t reserved_0c                                             : 16,  
                      rssi_comb                                               :  8,  
                      reserved_0b                                             :  2,  
                      frameless_frame_received                                :  1,  
                      reserved_0a                                             :  1,  
                      rssi_info_valid                                         :  1,  
                      timing_info_valid                                       :  1,  
                      location_info_valid                                     :  1,  
                      phy_internal_nap                                        :  1;  
             uint32_t phy_timestamp_1_lower_32                                : 32;  
             uint32_t phy_timestamp_1_upper_32                                : 32;  
             uint32_t phy_timestamp_2_lower_32                                : 32;  
             uint32_t phy_timestamp_2_upper_32                                : 32;  
             struct   rx_timing_offset_info                                     rx_timing_offset_info_details;
             struct   receive_rssi_info                                         post_rssi_info_details;
             uint32_t phy_sw_status_31_0                                      : 32;  
             uint32_t phy_sw_status_63_32                                     : 32;  
#endif
};


 

#define PHYRX_PKT_END_INFO_PHY_INTERNAL_NAP_OFFSET                                  0x00000000
#define PHYRX_PKT_END_INFO_PHY_INTERNAL_NAP_LSB                                     0
#define PHYRX_PKT_END_INFO_PHY_INTERNAL_NAP_MSB                                     0
#define PHYRX_PKT_END_INFO_PHY_INTERNAL_NAP_MASK                                    0x00000001


 

#define PHYRX_PKT_END_INFO_LOCATION_INFO_VALID_OFFSET                               0x00000000
#define PHYRX_PKT_END_INFO_LOCATION_INFO_VALID_LSB                                  1
#define PHYRX_PKT_END_INFO_LOCATION_INFO_VALID_MSB                                  1
#define PHYRX_PKT_END_INFO_LOCATION_INFO_VALID_MASK                                 0x00000002


 

#define PHYRX_PKT_END_INFO_TIMING_INFO_VALID_OFFSET                                 0x00000000
#define PHYRX_PKT_END_INFO_TIMING_INFO_VALID_LSB                                    2
#define PHYRX_PKT_END_INFO_TIMING_INFO_VALID_MSB                                    2
#define PHYRX_PKT_END_INFO_TIMING_INFO_VALID_MASK                                   0x00000004


 

#define PHYRX_PKT_END_INFO_RSSI_INFO_VALID_OFFSET                                   0x00000000
#define PHYRX_PKT_END_INFO_RSSI_INFO_VALID_LSB                                      3
#define PHYRX_PKT_END_INFO_RSSI_INFO_VALID_MSB                                      3
#define PHYRX_PKT_END_INFO_RSSI_INFO_VALID_MASK                                     0x00000008


 

#define PHYRX_PKT_END_INFO_RESERVED_0A_OFFSET                                       0x00000000
#define PHYRX_PKT_END_INFO_RESERVED_0A_LSB                                          4
#define PHYRX_PKT_END_INFO_RESERVED_0A_MSB                                          4
#define PHYRX_PKT_END_INFO_RESERVED_0A_MASK                                         0x00000010


 

#define PHYRX_PKT_END_INFO_FRAMELESS_FRAME_RECEIVED_OFFSET                          0x00000000
#define PHYRX_PKT_END_INFO_FRAMELESS_FRAME_RECEIVED_LSB                             5
#define PHYRX_PKT_END_INFO_FRAMELESS_FRAME_RECEIVED_MSB                             5
#define PHYRX_PKT_END_INFO_FRAMELESS_FRAME_RECEIVED_MASK                            0x00000020


 

#define PHYRX_PKT_END_INFO_RESERVED_0B_OFFSET                                       0x00000000
#define PHYRX_PKT_END_INFO_RESERVED_0B_LSB                                          6
#define PHYRX_PKT_END_INFO_RESERVED_0B_MSB                                          7
#define PHYRX_PKT_END_INFO_RESERVED_0B_MASK                                         0x000000c0


 

#define PHYRX_PKT_END_INFO_RSSI_COMB_OFFSET                                         0x00000000
#define PHYRX_PKT_END_INFO_RSSI_COMB_LSB                                            8
#define PHYRX_PKT_END_INFO_RSSI_COMB_MSB                                            15
#define PHYRX_PKT_END_INFO_RSSI_COMB_MASK                                           0x0000ff00


 

#define PHYRX_PKT_END_INFO_RESERVED_0C_OFFSET                                       0x00000000
#define PHYRX_PKT_END_INFO_RESERVED_0C_LSB                                          16
#define PHYRX_PKT_END_INFO_RESERVED_0C_MSB                                          31
#define PHYRX_PKT_END_INFO_RESERVED_0C_MASK                                         0xffff0000


 

#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_1_LOWER_32_OFFSET                          0x00000004
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_1_LOWER_32_LSB                             0
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_1_LOWER_32_MSB                             31
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_1_LOWER_32_MASK                            0xffffffff


 

#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_1_UPPER_32_OFFSET                          0x00000008
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_1_UPPER_32_LSB                             0
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_1_UPPER_32_MSB                             31
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_1_UPPER_32_MASK                            0xffffffff


 

#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_2_LOWER_32_OFFSET                          0x0000000c
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_2_LOWER_32_LSB                             0
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_2_LOWER_32_MSB                             31
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_2_LOWER_32_MASK                            0xffffffff


 

#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_2_UPPER_32_OFFSET                          0x00000010
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_2_UPPER_32_LSB                             0
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_2_UPPER_32_MSB                             31
#define PHYRX_PKT_END_INFO_PHY_TIMESTAMP_2_UPPER_32_MASK                            0xffffffff


 


 

#define PHYRX_PKT_END_INFO_RX_TIMING_OFFSET_INFO_DETAILS_RESIDUAL_PHASE_OFFSET_OFFSET 0x00000014
#define PHYRX_PKT_END_INFO_RX_TIMING_OFFSET_INFO_DETAILS_RESIDUAL_PHASE_OFFSET_LSB  0
#define PHYRX_PKT_END_INFO_RX_TIMING_OFFSET_INFO_DETAILS_RESIDUAL_PHASE_OFFSET_MSB  11
#define PHYRX_PKT_END_INFO_RX_TIMING_OFFSET_INFO_DETAILS_RESIDUAL_PHASE_OFFSET_MASK 0x00000fff


 

#define PHYRX_PKT_END_INFO_RX_TIMING_OFFSET_INFO_DETAILS_RESERVED_OFFSET            0x00000014
#define PHYRX_PKT_END_INFO_RX_TIMING_OFFSET_INFO_DETAILS_RESERVED_LSB               12
#define PHYRX_PKT_END_INFO_RX_TIMING_OFFSET_INFO_DETAILS_RESERVED_MSB               31
#define PHYRX_PKT_END_INFO_RX_TIMING_OFFSET_INFO_DETAILS_RESERVED_MASK              0xfffff000


 


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN0_OFFSET          0x00000018
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN0_LSB             0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN0_MSB             7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN0_MASK            0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN0_OFFSET          0x00000018
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN0_LSB             8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN0_MSB             15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN0_MASK            0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN0_OFFSET    0x00000018
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN0_LSB       16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN0_MSB       23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN0_MASK      0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN0_OFFSET   0x00000018
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN0_LSB      24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN0_MSB      31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN0_MASK     0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN0_OFFSET    0x0000001c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN0_LSB       0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN0_MSB       7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN0_MASK      0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN0_OFFSET 0x0000001c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN0_LSB  8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN0_MSB  15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN0_MASK 0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN0_OFFSET 0x0000001c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN0_LSB  16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN0_MSB  23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN0_MASK 0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN0_OFFSET   0x0000001c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN0_LSB      24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN0_MSB      31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN0_MASK     0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN0_OFFSET       0x00000020
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN0_LSB          0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN0_MSB          7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN0_MASK         0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN0_OFFSET       0x00000020
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN0_LSB          8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN0_MSB          15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN0_MASK         0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN0_OFFSET       0x00000020
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN0_LSB          16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN0_MSB          23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN0_MASK         0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN0_OFFSET       0x00000020
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN0_LSB          24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN0_MSB          31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN0_MASK         0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN0_OFFSET       0x00000024
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN0_LSB          0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN0_MSB          7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN0_MASK         0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN0_OFFSET       0x00000024
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN0_LSB          8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN0_MSB          15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN0_MASK         0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN0_OFFSET       0x00000024
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN0_LSB          16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN0_MSB          23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN0_MASK         0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN0_OFFSET       0x00000024
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN0_LSB          24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN0_MSB          31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN0_MASK         0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN1_OFFSET          0x00000028
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN1_LSB             0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN1_MSB             7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN1_MASK            0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN1_OFFSET          0x00000028
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN1_LSB             8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN1_MSB             15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN1_MASK            0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN1_OFFSET    0x00000028
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN1_LSB       16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN1_MSB       23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN1_MASK      0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN1_OFFSET   0x00000028
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN1_LSB      24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN1_MSB      31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN1_MASK     0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN1_OFFSET    0x0000002c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN1_LSB       0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN1_MSB       7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN1_MASK      0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN1_OFFSET 0x0000002c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN1_LSB  8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN1_MSB  15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN1_MASK 0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN1_OFFSET 0x0000002c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN1_LSB  16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN1_MSB  23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN1_MASK 0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN1_OFFSET   0x0000002c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN1_LSB      24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN1_MSB      31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN1_MASK     0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN1_OFFSET       0x00000030
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN1_LSB          0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN1_MSB          7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN1_MASK         0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN1_OFFSET       0x00000030
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN1_LSB          8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN1_MSB          15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN1_MASK         0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN1_OFFSET       0x00000030
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN1_LSB          16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN1_MSB          23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN1_MASK         0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN1_OFFSET       0x00000030
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN1_LSB          24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN1_MSB          31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN1_MASK         0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN1_OFFSET       0x00000034
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN1_LSB          0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN1_MSB          7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN1_MASK         0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN1_OFFSET       0x00000034
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN1_LSB          8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN1_MSB          15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN1_MASK         0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN1_OFFSET       0x00000034
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN1_LSB          16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN1_MSB          23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN1_MASK         0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN1_OFFSET       0x00000034
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN1_LSB          24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN1_MSB          31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN1_MASK         0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN2_OFFSET          0x00000038
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN2_LSB             0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN2_MSB             7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN2_MASK            0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN2_OFFSET          0x00000038
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN2_LSB             8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN2_MSB             15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN2_MASK            0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN2_OFFSET    0x00000038
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN2_LSB       16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN2_MSB       23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN2_MASK      0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN2_OFFSET   0x00000038
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN2_LSB      24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN2_MSB      31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN2_MASK     0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN2_OFFSET    0x0000003c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN2_LSB       0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN2_MSB       7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN2_MASK      0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN2_OFFSET 0x0000003c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN2_LSB  8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN2_MSB  15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN2_MASK 0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN2_OFFSET 0x0000003c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN2_LSB  16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN2_MSB  23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN2_MASK 0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN2_OFFSET   0x0000003c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN2_LSB      24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN2_MSB      31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN2_MASK     0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN2_OFFSET       0x00000040
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN2_LSB          0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN2_MSB          7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN2_MASK         0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN2_OFFSET       0x00000040
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN2_LSB          8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN2_MSB          15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN2_MASK         0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN2_OFFSET       0x00000040
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN2_LSB          16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN2_MSB          23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN2_MASK         0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN2_OFFSET       0x00000040
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN2_LSB          24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN2_MSB          31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN2_MASK         0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN2_OFFSET       0x00000044
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN2_LSB          0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN2_MSB          7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN2_MASK         0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN2_OFFSET       0x00000044
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN2_LSB          8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN2_MSB          15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN2_MASK         0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN2_OFFSET       0x00000044
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN2_LSB          16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN2_MSB          23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN2_MASK         0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN2_OFFSET       0x00000044
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN2_LSB          24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN2_MSB          31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN2_MASK         0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN3_OFFSET          0x00000048
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN3_LSB             0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN3_MSB             7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_PRI20_CHAIN3_MASK            0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN3_OFFSET          0x00000048
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN3_LSB             8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN3_MSB             15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT20_CHAIN3_MASK            0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN3_OFFSET    0x00000048
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN3_LSB       16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN3_MSB       23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_LOW20_CHAIN3_MASK      0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN3_OFFSET   0x00000048
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN3_LSB      24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN3_MSB      31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT40_HIGH20_CHAIN3_MASK     0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN3_OFFSET    0x0000004c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN3_LSB       0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN3_MSB       7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW20_CHAIN3_MASK      0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN3_OFFSET 0x0000004c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN3_LSB  8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN3_MSB  15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_LOW_HIGH20_CHAIN3_MASK 0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN3_OFFSET 0x0000004c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN3_LSB  16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN3_MSB  23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH_LOW20_CHAIN3_MASK 0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN3_OFFSET   0x0000004c
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN3_LSB      24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN3_MSB      31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT80_HIGH20_CHAIN3_MASK     0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN3_OFFSET       0x00000050
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN3_LSB          0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN3_MSB          7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_0_CHAIN3_MASK         0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN3_OFFSET       0x00000050
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN3_LSB          8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN3_MSB          15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_1_CHAIN3_MASK         0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN3_OFFSET       0x00000050
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN3_LSB          16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN3_MSB          23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_2_CHAIN3_MASK         0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN3_OFFSET       0x00000050
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN3_LSB          24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN3_MSB          31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_3_CHAIN3_MASK         0xff000000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN3_OFFSET       0x00000054
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN3_LSB          0
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN3_MSB          7
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_4_CHAIN3_MASK         0x000000ff


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN3_OFFSET       0x00000054
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN3_LSB          8
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN3_MSB          15
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_5_CHAIN3_MASK         0x0000ff00


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN3_OFFSET       0x00000054
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN3_LSB          16
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN3_MSB          23
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_6_CHAIN3_MASK         0x00ff0000


 

#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN3_OFFSET       0x00000054
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN3_LSB          24
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN3_MSB          31
#define PHYRX_PKT_END_INFO_POST_RSSI_INFO_DETAILS_RSSI_EXT160_7_CHAIN3_MASK         0xff000000


 

#define PHYRX_PKT_END_INFO_PHY_SW_STATUS_31_0_OFFSET                                0x00000058
#define PHYRX_PKT_END_INFO_PHY_SW_STATUS_31_0_LSB                                   0
#define PHYRX_PKT_END_INFO_PHY_SW_STATUS_31_0_MSB                                   31
#define PHYRX_PKT_END_INFO_PHY_SW_STATUS_31_0_MASK                                  0xffffffff


 

#define PHYRX_PKT_END_INFO_PHY_SW_STATUS_63_32_OFFSET                               0x0000005c
#define PHYRX_PKT_END_INFO_PHY_SW_STATUS_63_32_LSB                                  0
#define PHYRX_PKT_END_INFO_PHY_SW_STATUS_63_32_MSB                                  31
#define PHYRX_PKT_END_INFO_PHY_SW_STATUS_63_32_MASK                                 0xffffffff



#endif    