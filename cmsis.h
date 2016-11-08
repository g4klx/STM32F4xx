#if !defined(CMSIS_H)
#define  CMSIS_H


//#typedef int16_t short
//#define int32_t int
//#define uint16_t unsigned short
//#define uint32_t unsigned int

/* @brief 16-bit fractional data type in 1.15 format. */
typedef int16_t q15_t;
/* @brief 32-bit fractional data type in 1.31 format. */
typedef int32_t q31_t;


// structures defined in arm_math.h from https://github.com/ARM-software/CMSIS/blob/master/CMSIS/Include/arm_math.h
/* @brief Instance structure for the Q15 FIR filter. */
typedef struct
{
  uint16_t numTaps;         // < number of filter coefficients in the filter. 
  q15_t *pState;            // < points to the state variable array. The array is of length numTaps+blockSize-1.
  q15_t *pCoeffs;           // < points to the coefficient array. The array is of length numTaps.
} arm_fir_instance_q15;

/* @brief Instance structure for the Q31 FIR filter. */
typedef struct
{
  uint16_t numTaps;         // < number of filter coefficients in the filter. 
  q31_t *pState;            // < points to the state variable array. The array is of length numTaps+blockSize-1.
  q31_t *pCoeffs;           // < points to the coefficient array. The array is of length numTaps.
} arm_fir_instance_q31;

extern "C" {
extern void arm_fir_fast_q15(
  const arm_fir_instance_q15 * S,
  q15_t * pSrc,
  q15_t * pDst,
  uint32_t blockSize);
}
#endif
