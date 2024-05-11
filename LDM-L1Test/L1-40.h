#ifndef _L1_40_H_
#define _L1_40_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  uint8_t Code;
	float Distance;

}L1_40Result;

extern const uint8_t auchCRCHi[];
extern const uint8_t auchCRCLo[];

uint8_t L1_40_DataProcess(uint8_t *buffer,L1_40Result *result);
uint8_t BCC(uint8_t* dat,uint16_t len);
uint16_t CRC16(uint8_t *Start_Byte,uint16_t Num_Bytes);

/**
 * @brief CRC16 Verify function
 * @param pchMessage Data to Verify
 * @param dwLength Stream length = Data + checksum
 * @return True or False (CRC Verify Result)
 */

#ifdef __cplusplus
}
#endif

#endif
