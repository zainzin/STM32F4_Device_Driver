/*
 * device_driver.h
 *
 *  Created on: Apr 21, 2020
 *      Author: zainhatim
 */

#ifndef DEVICE_DRIVER_H_
#define DEVICE_DRIVER_H_

#include "stdint.h"

#define PERIPH_BASE 0x40000000U
#define AHB1PERIPH_BASE (PERIPH_BASE + 0x20000U)
#define RCC_BASE (AHB1PERIPH_BASE + 0x3800U)
#define GPIOA_BASE AHB1PERIPH_BASEU
#define GPIOB_BASE (GPIOA_BASE + 0x400U)
#define GPIOC_BASE (GPIOB_BASE + 0x400U)
#define GPIOC_BASE (GPIOB_BASE + 0x400U)
#define GPIOD_BASE (GPIOC_BASE + 0x400U)
#define GPIOE_BASE (GPIOD_BASE + 0x400U)
#define GPIOH_BASE (GPIOE_BASE + 0x800U)

#define __IO volatile

typedef struct {
	__IO uint32_t MODER;      // mode register
	__IO uint32_t OTYPER;     // output type register
	__IO uint32_t OSPEEDR;    // output speed register
	__IO uint32_t PUPDR;      // pull-up/pull-down register
	__IO uint32_t IDR;        // input data register
	__IO uint32_t ODR;        // output data register
	__IO uint32_t BSRR;       // bit set/reset register
	__IO uint32_t LCKR;       // configuration lock register
	__IO uint32_t AFR[2];     // alternate function registers
} GPIO_TypeDef;

#define GPIOA ((GPIO_TypeDef*) GPIOA_BASE)

typedef struct
{
  __IO uint32_t CR;            // clock control register
  __IO uint32_t PLLCFGR;       // PLL configuration register
  __IO uint32_t CFGR;          // clock configuration register
  __IO uint32_t CIR;           // clock interrupt register
  __IO uint32_t AHB1RSTR;      // AHB1 peripheral reset register
  __IO uint32_t AHB2RSTR;      // AHB2 peripheral reset register
  __IO uint32_t AHB3RSTR;      // AHB3 peripheral reset register
  uint32_t      RESERVED0;     // Reserved
  __IO uint32_t APB1RSTR;      // APB1 peripheral reset register
  __IO uint32_t APB2RSTR;      // APB2 peripheral reset register
  uint32_t      RESERVED1[2];  // Reserved
  __IO uint32_t AHB1ENR;       // AHB1 peripheral clock register
  __IO uint32_t AHB2ENR;       // AHB2 peripheral clock register
  __IO uint32_t AHB3ENR;       // AHB3 peripheral clock register
  uint32_t      RESERVED2;     // Reserved
  __IO uint32_t APB1ENR;       // APB1 peripheral clock enable register
  __IO uint32_t APB2ENR;       // APB2 peripheral clock enable register
  uint32_t      RESERVED3[2];  // Reserved
  __IO uint32_t AHB1LPENR;     // AHB1 peripheral clock enable in low power mode register
  __IO uint32_t AHB2LPENR;     // AHB2 peripheral clock enable in low power mode register
  __IO uint32_t AHB3LPENR;     // AHB3 peripheral clock enable in low power mode register
  uint32_t      RESERVED4;     // Reserved
  __IO uint32_t APB1LPENR;     // APB1 peripheral clock enable in low power mode register
  __IO uint32_t APB2LPENR;     // APB2 peripheral clock enable in low power mode register
  uint32_t      RESERVED5[2];  // Reserved
  __IO uint32_t BDCR;          // Backup domain control register
  __IO uint32_t CSR;           // clock control & status register
  uint32_t      RESERVED6[2];  // Reserved
  __IO uint32_t SSCGR;         // spread spectrum clock generation register
  __IO uint32_t PLLI2SCFGR;    // PLLI2S configuration register
} RCC_TypeDef;

#define RCC ((RCC_TypeDef*) RCC_BASE)



#endif /* DEVICE_DRIVER_H_ */
