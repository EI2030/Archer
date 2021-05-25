/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_0_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_0_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_10_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_10_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_13_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_13_FUNC_ALT1 0x01u
/*!
 * @brief
 * Controls open-drain mode in standard GPIO mode (EGP = 1).
 * This bit has no effect in I2C mode (EGP=0).
 * : Open-drain.
 * Simulated open-drain output (high drive disabled).
 */
#define PIO0_13_OD_OPEN_DRAIN 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_14_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_14_FUNC_ALT1 0x01u
/*!
 * @brief
 * Controls open-drain mode in standard GPIO mode (EGP = 1).
 * This bit has no effect in I2C mode (EGP=0).
 * : Open-drain.
 * Simulated open-drain output (high drive disabled).
 */
#define PIO0_14_OD_OPEN_DRAIN 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_15_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_15_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_18_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_18_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_19_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_19_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_1_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_1_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_20_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_20_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_21_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_21_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_22_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_22_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_23_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_23_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_24_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_24_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_25_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_25_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_26_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_26_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_28_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_28_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_29_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_29_FUNC_ALT1 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_2_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_2_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_30_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 1. */
#define PIO0_30_FUNC_ALT1 0x01u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_3_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_3_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_4_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_4_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_5_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_5_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_6_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_6_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_7_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_7_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_8_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_8_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO0_9_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO0_9_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_0_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_0_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_1_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_1_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_2_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_2_FUNC_ALT0 0x00u
/*!
 * @brief Select Digital mode.: Enable Digital mode. Digital input is enabled. */
#define PIO1_3_DIGIMODE_DIGITAL 0x01u
/*!
 * @brief Selects pin function.: Alternative connection 0. */
#define PIO1_3_FUNC_ALT0 0x00u

/*! @name PIO0_0 (number 54), KSI0
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSI0_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSI0_GPIO_PIN_MASK (1U << 0U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSI0_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSI0_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSI0_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_2 (number 81), KSI2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSI2_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSI2_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSI2_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSI2_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSI2_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_1 (number 7), KSI1
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSI1_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSI1_GPIO_PIN_MASK (1U << 1U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSI1_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSI1_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSI1_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_3 (number 83), KSI3
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSI3_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSI3_GPIO_PIN_MASK (1U << 3U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSI3_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSI3_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSI3_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_4 (number 86), KSI4
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSI4_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSI4_GPIO_PIN_MASK (1U << 4U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSI4_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSI4_PIN 4U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSI4_PIN_MASK (1U << 4U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_5 (number 88), KSI5
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSI5_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSI5_GPIO_PIN_MASK (1U << 5U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSI5_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSI5_PIN 5U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSI5_PIN_MASK (1U << 5U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_6 (number 89), KSI6
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSI6_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSI6_GPIO_PIN_MASK (1U << 6U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSI6_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSI6_PIN 6U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSI6_PIN_MASK (1U << 6U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_7 (number 6), KSI7
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSI7_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSI7_GPIO_PIN_MASK (1U << 7U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSI7_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSI7_PIN 7U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSI7_PIN_MASK (1U << 7U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_8 (number 26), PMIC_STBY_REQ
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_PMIC_STBY_REQ_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_PMIC_STBY_REQ_GPIO_PIN_MASK (1U << 8U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_PMIC_STBY_REQ_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_PMIC_STBY_REQ_PIN 8U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_PMIC_STBY_REQ_PIN_MASK (1U << 8U)      /*!<@brief PORT pin mask */
                                                              /* @} */

/*! @name PIO0_9 (number 55), PMIC_ON_REQ
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_PMIC_ON_REQ_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_PMIC_ON_REQ_GPIO_PIN_MASK (1U << 9U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_PMIC_ON_REQ_PORT 0U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_PMIC_ON_REQ_PIN 9U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_PMIC_ON_REQ_PIN_MASK (1U << 9U)      /*!<@brief PORT pin mask */
                                                            /* @} */

/*! @name PIO0_10 (number 21), LED
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_LED_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_LED_GPIO_PIN_MASK (1U << 10U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_LED_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_LED_PIN 10U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_LED_PIN_MASK (1U << 10U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_13 (number 71), SDA
  @{ */
#define BOARD_INITPINS_SDA_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_SDA_PIN 13U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_SDA_PIN_MASK (1U << 13U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_14 (number 72), SCL
  @{ */
#define BOARD_INITPINS_SCL_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_SCL_PIN 14U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_SCL_PIN_MASK (1U << 14U)      /*!<@brief PORT pin mask */
                                                     /* @} */

/*! @name PIO0_15 (number 22), MPU_RST
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_MPU_RST_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_MPU_RST_GPIO_PIN_MASK (1U << 15U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_MPU_RST_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_MPU_RST_PIN 15U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_MPU_RST_PIN_MASK (1U << 15U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PIO0_18 (number 56), KSOS0
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSOS0_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSOS0_GPIO_PIN_MASK (1U << 18U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSOS0_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSOS0_PIN 18U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSOS0_PIN_MASK (1U << 18U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_19 (number 90), KSOS1
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSOS1_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSOS1_GPIO_PIN_MASK (1U << 19U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSOS1_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSOS1_PIN 19U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSOS1_PIN_MASK (1U << 19U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_20 (number 74), KSOS2
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSOS2_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSOS2_GPIO_PIN_MASK (1U << 20U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSOS2_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSOS2_PIN 20U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSOS2_PIN_MASK (1U << 20U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_21 (number 76), KSOS3
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSOS3_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSOS3_GPIO_PIN_MASK (1U << 21U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSOS3_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSOS3_PIN 21U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSOS3_PIN_MASK (1U << 21U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_22 (number 78), KSOE
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_KSOE_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_KSOE_GPIO_PIN_MASK (1U << 22U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_KSOE_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_KSOE_PIN 22U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_KSOE_PIN_MASK (1U << 22U)      /*!<@brief PORT pin mask */
                                                      /* @} */

/*! @name PIO0_24 (number 70), SPI_SCLK
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_SPI_SCLK_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_SPI_SCLK_GPIO_PIN_MASK (1U << 24U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_SPI_SCLK_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_SPI_SCLK_PIN 24U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_SPI_SCLK_PIN_MASK (1U << 24U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PIO0_23 (number 20), SPI_CS
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_SPI_CS_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_SPI_CS_GPIO_PIN_MASK (1U << 23U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_SPI_CS_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_SPI_CS_PIN 23U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_SPI_CS_PIN_MASK (1U << 23U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_28 (number 66), LCD_EN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_LCD_EN_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_LCD_EN_GPIO_PIN_MASK (1U << 28U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_LCD_EN_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_LCD_EN_PIN 28U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_LCD_EN_PIN_MASK (1U << 28U)      /*!<@brief PORT pin mask */
                                                        /* @} */

/*! @name PIO0_25 (number 79), SPI_MOSI
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_SPI_MOSI_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_SPI_MOSI_GPIO_PIN_MASK (1U << 25U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_SPI_MOSI_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_SPI_MOSI_PIN 25U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_SPI_MOSI_PIN_MASK (1U << 25U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PIO0_26 (number 60), SPI_MISO
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_SPI_MISO_GPIO GPIO                 /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_SPI_MISO_GPIO_PIN_MASK (1U << 26U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_SPI_MISO_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_SPI_MISO_PIN 26U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_SPI_MISO_PIN_MASK (1U << 26U)      /*!<@brief PORT pin mask */
                                                          /* @} */

/*! @name PIO1_0 (number 11), USB_OTG_ID
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_USB_OTG_ID_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_USB_OTG_ID_GPIO_PIN_MASK (1U << 0U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_USB_OTG_ID_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_USB_OTG_ID_PIN 0U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_USB_OTG_ID_PIN_MASK (1U << 0U)      /*!<@brief PORT pin mask */
                                                           /* @} */

/*! @name PIO1_1 (number 59), EC_INT
  @{ */
#define BOARD_INITPINS_EC_INT_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_EC_INT_PIN 1U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_EC_INT_PIN_MASK (1U << 1U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO1_2 (number 61), PWR_EN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_PWR_EN_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_PWR_EN_GPIO_PIN_MASK (1U << 2U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_PWR_EN_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_PWR_EN_PIN 2U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_PWR_EN_PIN_MASK (1U << 2U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO1_3 (number 62), ARM_EN
  @{ */

/* Symbols to be used with GPIO driver */
#define BOARD_INITPINS_ARM_EN_GPIO GPIO                /*!<@brief GPIO peripheral base pointer */
#define BOARD_INITPINS_ARM_EN_GPIO_PIN_MASK (1U << 3U) /*!<@brief GPIO pin mask */
#define BOARD_INITPINS_ARM_EN_PORT 1U                  /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_ARM_EN_PIN 3U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_ARM_EN_PIN_MASK (1U << 3U)      /*!<@brief PORT pin mask */
                                                       /* @} */

/*! @name PIO0_29 (number 92), UART_RX
  @{ */
#define BOARD_INITPINS_UART_RX_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_UART_RX_PIN 29U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_UART_RX_PIN_MASK (1U << 29U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*! @name PIO0_30 (number 94), UART_TX
  @{ */
#define BOARD_INITPINS_UART_TX_PORT 0U                   /*!<@brief PORT peripheral base pointer */
#define BOARD_INITPINS_UART_TX_PIN 30U                   /*!<@brief PORT pin number */
#define BOARD_INITPINS_UART_TX_PIN_MASK (1U << 30U)      /*!<@brief PORT pin mask */
                                                         /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M33 (Core #0) */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
