/*
 * Copyright (c) 2015, Majenko Technologies
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * * Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 * 
 * * Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 * 
 * * Neither the name of Majenko Technologies nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#if !defined(BOARD_DATA_C)
#define BOARD_DATA_C

#include <inttypes.h>

/* ------------------------------------------------------------ */
/*                    Data Tables                               */
/* ------------------------------------------------------------ */
/* The following declarations define data used in pin mapping.  */
/* ------------------------------------------------------------ */

#if defined(OPT_BOARD_DATA)

/* ------------------------------------------------------------ */
/* This table is used to map from port number to the address of
** the TRIS register for the port. This is used for setting the
** pin direction.
*/
const uint32_t port_to_tris_PGM[] = {
    NOT_A_PORT,                //index value 0 is not used

#if defined(_PORTA)
    (uint32_t)&TRISA,
#else
    NOT_A_PORT,
#endif

#if defined(_PORTB)
    (uint32_t)&TRISB,
#else
    NOT_A_PORT,
#endif

#if defined(_PORTC)
    (uint32_t)&TRISC,
#else
    NOT_A_PORT,
#endif

#if defined(_PORTD)
    (uint32_t)&TRISD,
#else
    NOT_A_PORT,
#endif

#if defined(_PORTE)
    (uint32_t)&TRISE,
#else
    NOT_A_PORT,
#endif

#if defined(_PORTF)
    (uint32_t)&TRISF,
#else
    NOT_A_PORT,
#endif

#if defined(_PORTG)
    (uint32_t)&TRISG,
#else
    NOT_A_PORT,
#endif

#if defined(_PORTH)
    (uint32_t)&TRISH,
#else
    NOT_A_PORT,
#endif

#if defined(_PORTJ)
    (uint32_t)&TRISJ,
#else
    NOT_A_PORT,
#endif

#if defined(_PORTK)
    (uint32_t)&TRISK,
#else
    NOT_A_PORT,
#endif

    NOT_A_PORT,
};

/* ------------------------------------------------------------ */
/* This table is used to map the digital pin number to the port
** containing that pin.
*/
const uint8_t digital_pin_to_port_PGM[] = {
    _IOPORT_PF,         // 0    RF4
    _IOPORT_PF,         // 1    RF5
    _IOPORT_PD,         // 2    RF9
    _IOPORT_PD,         // 3    RF10
    _IOPORT_PD,         // 4    RF11
    _IOPORT_PD,         // 5    RF0
    _IOPORT_PC,         // 6    RC13
    _IOPORT_PC,         // 7    RC14
    _IOPORT_PD,         // 8    RD1
    _IOPORT_PD,         // 9    RD2
    _IOPORT_PD,         // 10   RD3
    _IOPORT_PD,         // 11   RD4
    _IOPORT_PD,         // 12   RD5
    _IOPORT_PB,         // 13   RB5 - PROG
    _IOPORT_PF,         // 14   RF0
    _IOPORT_PF,         // 15   RF1
    _IOPORT_PE,         // 16   RE0
    _IOPORT_PE,         // 17   RE1
    _IOPORT_PE,         // 18   RE2
    _IOPORT_PE,         // 19   RE3
    _IOPORT_PE,         // 20   RE4
    _IOPORT_PE,         // 21   RE5
    _IOPORT_PE,         // 22   RE6
    _IOPORT_PE,         // 23   RE7

    _IOPORT_PG,         // 24   RG6 - SCK
    _IOPORT_PG,         // 25   RG7 - SDI
    _IOPORT_PG,         // 26   RG8 - SDO
    _IOPORT_PG,         // 27   RG9 - SS
    _IOPORT_PC,         // 28   RC15
    _IOPORT_PB,         // 29   RB4 - A14
    _IOPORT_PB,         // 30   RB3 - A13
    _IOPORT_PB,         // 31   RB2 - A12
    _IOPORT_PB,         // 32   RB1 - A11
    _IOPORT_PB,         // 33   RB0 - A10
    _IOPORT_PB,         // 34   RB7 - A9
    _IOPORT_PB,         // 35   RB6 - A8
    _IOPORT_PB,         // 36   RB8 - A7
    _IOPORT_PB,         // 37   RB9 - A6
    _IOPORT_PB,         // 38   RB10 - A5
    _IOPORT_PB,         // 39   RB11 - A4
    _IOPORT_PB,         // 40   RB12 - A3
    _IOPORT_PB,         // 41   RB13 - A2
    _IOPORT_PB,         // 42   RB14 - A1
    _IOPORT_PB,         // 43   RB15 - A0
};

/* ------------------------------------------------------------ */
/* This table is used to map from digital pin number to a bit mask
** for the corresponding bit within the port.
*/
const uint16_t digital_pin_to_bit_mask_PGM[] = 
{
    _BV( 4),            // 0    RF4
    _BV( 5),            // 1    RF5
    _BV( 9),            // 2    RF9
    _BV(10),            // 3    RF10
    _BV(11),            // 4    RF11
    _BV( 0),            // 5    RF0
    _BV(13),            // 6    RC13
    _BV(14),            // 7    RC14
    _BV( 1),            // 8    RD1
    _BV( 2),            // 9    RD2
    _BV( 3),            // 10   RD3
    _BV( 4),            // 11   RD4
    _BV( 5),            // 12   RD5
    _BV( 5),            // 13   RB5 - PROG
    _BV( 0),            // 14   RF0
    _BV( 1),            // 15   RF1
    _BV( 0),            // 16   RE0
    _BV( 1),            // 17   RE1
    _BV( 2),            // 18   RE2
    _BV( 3),            // 19   RE3
    _BV( 4),            // 20   RE4
    _BV( 5),            // 21   RE5
    _BV( 6),            // 22   RE6
    _BV( 7),            // 23   RE7 - LED

    _BV( 6),            // 24   RG6 - SCK
    _BV( 7),            // 25   RG7 - SDI
    _BV( 8),            // 26   RG8 - SDO
    _BV( 9),            // 27   RG9 - SS
    _BV(15),            // 28   RC15
    _BV( 4),            // 29   RB4 - A14
    _BV( 3),            // 30   RB3 - A13
    _BV( 2),            // 31   RB2 - A12
    _BV( 1),            // 32   RB1 - A11
    _BV( 0),            // 33   RB0 - A10
    _BV( 7),            // 34   RB7 - A9
    _BV( 6),            // 35   RB6 - A8
    _BV( 8),            // 36   RB8 - A7
    _BV( 9),            // 37   RB9 - A6
    _BV(10),            // 38   RB10 - A5
    _BV(11),            // 39   RB11 - A4
    _BV(12),            // 40   RB12 - A3
    _BV(13),            // 41   RB13 - A2
    _BV(14),            // 42   RB14 - A1
    _BV(15),            // 43   RB15 - A0
};

/* ------------------------------------------------------------ */
/* This table is used to map from digital pin number to the output
** compare number, input capture number, and timer external clock
** input associated with that pin.
*/
const uint16_t digital_pin_to_timer_PGM[] =
{
    NOT_ON_TIMER,               //    0   RF02    EBIRDY3/RPF2/SDA3/RF2
    NOT_ON_TIMER,               //    1   RF08    EBIRDY2/RPF8/SCL3/RF8
    _TIMER_IC1,                 //    2   RE08    AN25/AERXD0/RPE8/RE8
    _TIMER_OC1,                 //    3   RD00    EMDIO/AEMDIO/RPD0/RTCC/INT0/RD0
    NOT_ON_TIMER,               //    4   RA03    EBIRDY1/SDA2/RA3
    _TIMER_OC2,                 //    5   RD01    RPD1/SCK1/RD1
    _TIMER_OC3,                 //    6   RD02    EBID14/ETXEN/RPD2/PMD14/RD2    
    _TIMER_IC2,                 //    7   RE09    AN26/AERXD1/RPE9/RE9  
    _TIMER_IC3,                 //    8   RA14    AETXCLK/RPA14/SCL1/RA14 
    _TIMER_OC4,                 //    9   RD03    EBID15/ETXCLK/RPD3/PMD15/RD3   
    _TIMER_IC6 | _TIMER_OC9,    //    10  RG09    EBIA2/AN11/C2INC/ERXCLK/EREFCLK/AERXCLK/AEREFCLK/RPG9/PMA2/RG9  
    _TIMER_OC7,                 //    11  RD11    EMDC/AEMDC/RPD11/RD11
    NOT_ON_TIMER,               //    12  RF00    EBID11/ETXD1/RPF0/PMD11/RF0
    NOT_ON_TIMER,               //    13  RG06    AN14/C1IND/ECOL/RPG6/SCK2/RG6                   (User LED1)
    NOT_ON_TIMER,               //    14  RB05    AN45/C1INA/RPB5/RB5                             (AN0)   
    NOT_ON_TIMER,               //    15  RB09    EBIA7/AN49/RPB9/PMA7/RB9                        (AIN1)  
    NOT_ON_TIMER,               //    16  RC02    EBIA12/AN21/RPC2/PMA12/RC2                      (AIN2)  
    NOT_ON_TIMER,               //    17  RB15    EBIA0/AN10/ERXD3/AETXD2/RPB15/OCFB/PMA0/RB15    (AIN3)  
    NOT_ON_TIMER,               //    18  RG07    EBIA4/AN13/C1INC/ECRS/RPG7/SDA4/PMA4/RG7        (AIN4 / SDA)         
    NOT_ON_TIMER,               //    19  RG08    EBIA3/AN12/C2IND/ERXDV/ECRSDV/AERXDV/AECRSDV/RPG8/SCL4/PMA3/RG8 (AIN5 / SCL)   
    NOT_ON_TIMER,               //    20  RB03    AN3/C2INA/RPB3/RB3                              (AIN6)
    NOT_ON_TIMER,               //    21  RB02    AN2/C2INB/RPB2/RB2                              (AIN7)  
    NOT_ON_TIMER,               //    22  RB04    AN4/C1INB/RB4                                   (AIN8)  
    NOT_ON_TIMER,               //    23  RB01    PGEC1/AN1/RPB1/RB1                              (AIN9)
    NOT_ON_TIMER,               //    24  RB08    EBIA10/AN48/RPB8/PMA10/RB8                      (AIN10) 
    NOT_ON_TIMER,               //    25  RB00    PGED1/AN0/RPB0/RB0                              (AIN11) 
    NOT_ON_TIMER,               //    26  RE00    EBID0/PMD0/RE0
    NOT_ON_TIMER,               //    27  RE01    EBID1/PMD1/RE1  
    NOT_ON_TIMER,               //    28  RE02    EBID2/PMD2/RE2
    NOT_ON_TIMER,               //    29  RE03    EBID3/RPE3/PMD3/RE3   
    NOT_ON_TIMER,               //    30  RE04    EBID4/AN18/PMD4/RE4  
    NOT_ON_TIMER,               //    31  RE05    EBID5/AN17/RPE5/PMD5/RE5
    NOT_ON_TIMER,               //    32  RE06    EBID6/AN16/PMD6/RE6
    NOT_ON_TIMER,               //    33  RE07    EBID7/AN15/PMD7/RE7 
    _TIMER_TCK4,                //    34  RD05    SQICS1/RPD5/RD5
    _TIMER_IC7 | _TIMER_TCK2,   //    35  RC01    EBIA6/AN22/RPC1/PMA6/RC1
    _TIMER_TCK6,                //    36  RF01    EBID10/ETXD0/RPF1/PMD10/RF1
    NOT_ON_TIMER,               //    37  RA02    EBICS0/SCL2/RA2
    _TIMER_TCK3,                //    38  RD12    EBID12/ETXD2/RPD12/PMD12/RD12
    NOT_ON_TIMER,               //    39  RD14    AN32/AETXD0/RPD14/RD14
    NOT_ON_TIMER,               //    40  RD15    AN33/AETXD1/RPD15/SCK6/RD15
    NOT_ON_TIMER,               //    41  RA09    VREF-/CVREF-/AN27/AERXD2/RA9
    NOT_ON_TIMER,               //    42  RA10    VREF+/CVREF+/AN28/AERXD3/RA10               (Pin A; VREF+)

    NOT_ON_TIMER,               //    43  RD04    SQICS0/RPD4/RD4                             (User LED2)
};

/* ------------------------------------------------------------ */
/* This table maps from a digital pin number to the corresponding
** analog pin number.
*/
const uint8_t digital_pin_to_analog_PGM[] = {
    NOT_ANALOG_PIN,             //    0   RF02    EBIRDY3/RPF2/SDA3/RF2
    NOT_ANALOG_PIN,             //    1   RF08    EBIRDY2/RPF8/SCL3/RF8
    NOT_ANALOG_PIN,             //    2   RE08    AN25/AERXD0/RPE8/RE8
    NOT_ANALOG_PIN,             //    3   RD00    EMDIO/AEMDIO/RPD0/RTCC/INT0/RD0
    NOT_ANALOG_PIN,             //    4   RA03    EBIRDY1/SDA2/RA3
    NOT_ANALOG_PIN,             //    5   RD01    RPD1/SCK1/RD1
    NOT_ANALOG_PIN,             //    6   RD02    EBID14/ETXEN/RPD2/PMD14/RD2    
    NOT_ANALOG_PIN,             //    7   RE09    AN26/AERXD1/RPE9/RE9  
    NOT_ANALOG_PIN,             //    8   RA14    AETXCLK/RPA14/SCL1/RA14 
    NOT_ANALOG_PIN,             //    9   RD03    EBID15/ETXCLK/RPD3/PMD15/RD3   
    NOT_ANALOG_PIN,             //    10  RG09    EBIA2/AN11/C2INC/ERXCLK/EREFCLK/AERXCLK/AEREFCLK/RPG9/PMA2/RG9  
    NOT_ANALOG_PIN,             //    11  RD11    EMDC/AEMDC/RPD11/RD11
    NOT_ANALOG_PIN,             //    12  RF00    EBID11/ETXD1/RPF0/PMD11/RF0
    NOT_ANALOG_PIN,             //    13  RG06    AN14/C1IND/ECOL/RPG6/SCK2/RG6                   (User LED1)
    _BOARD_AN0,                 //    14  RB05    AN45/C1INA/RPB5/RB5                             (AN0)   
    _BOARD_AN1,                 //    15  RB09    EBIA7/AN49/RPB9/PMA7/RB9                        (AIN1)  
    _BOARD_AN2,                 //    16  RC02    EBIA12/AN21/RPC2/PMA12/RC2                      (AIN2)  
    _BOARD_AN3,                 //    17  RB15    EBIA0/AN10/ERXD3/AETXD2/RPB15/OCFB/PMA0/RB15    (AIN3)  
    _BOARD_AN4,                 //    18  RG07    EBIA4/AN13/C1INC/ECRS/RPG7/SDA4/PMA4/RG7        (AIN4 / SDA)         
    _BOARD_AN5,                 //    19  RG08    EBIA3/AN12/C2IND/ERXDV/ECRSDV/AERXDV/AECRSDV/RPG8/SCL4/PMA3/RG8 (AIN5 / SCL)   
    _BOARD_AN6,                 //    20  RB03    AN3/C2INA/RPB3/RB3                              (AIN6)
    _BOARD_AN7,                 //    21  RB02    AN2/C2INB/RPB2/RB2                              (AIN7)  
    _BOARD_AN8,                 //    22  RB04    AN4/C1INB/RB4                                   (AIN8)  
    _BOARD_AN9,                 //    23  RB01    PGEC1/AN1/RPB1/RB1                              (AIN9)
    _BOARD_AN10,                //    24  RB08    EBIA10/AN48/RPB8/PMA10/RB8                      (AIN10) 
    _BOARD_AN11,                //    25  RB00    PGED1/AN0/RPB0/RB0                              (AIN11) 
    NOT_ANALOG_PIN,             //    26  RE00    EBID0/PMD0/RE0
    NOT_ANALOG_PIN,             //    27  RE01    EBID1/PMD1/RE1  
    NOT_ANALOG_PIN,             //    28  RE02    EBID2/PMD2/RE2
    NOT_ANALOG_PIN,             //    29  RE03    EBID3/RPE3/PMD3/RE3   
    NOT_ANALOG_PIN,             //    30  RE04    EBID4/AN18/PMD4/RE4  
    NOT_ANALOG_PIN,             //    31  RE05    EBID5/AN17/RPE5/PMD5/RE5
    NOT_ANALOG_PIN,             //    32  RE06    EBID6/AN16/PMD6/RE6
    NOT_ANALOG_PIN,             //    33  RE07    EBID7/AN15/PMD7/RE7 
    NOT_ANALOG_PIN,             //    34  RD05    SQICS1/RPD5/RD5
    NOT_ANALOG_PIN,             //    35  RC01    EBIA6/AN22/RPC1/PMA6/RC1
    NOT_ANALOG_PIN,             //    36  RF01    EBID10/ETXD0/RPF1/PMD10/RF1
    NOT_ANALOG_PIN,             //    37  RA02    EBICS0/SCL2/RA2
    NOT_ANALOG_PIN,             //    38  RD12    EBID12/ETXD2/RPD12/PMD12/RD12
    NOT_ANALOG_PIN,             //    39  RD14    AN32/AETXD0/RPD14/RD14
    NOT_ANALOG_PIN,             //    40  RD15    AN33/AETXD1/RPD15/SCK6/RD15
    NOT_ANALOG_PIN,             //    41  RA09    VREF-/CVREF-/AN27/AERXD2/RA9
    NOT_ANALOG_PIN,             //    42  RA10    VREF+/CVREF+/AN28/AERXD3/RA10               (Pin A; VREF+)

    // these are above the highest pin on the board
    // LEDs, BTNs, and POTs
    NOT_ANALOG_PIN,             //    43  RD04    SQICS0/RPD4/RD4                             (User LED2)
};


/* ------------------------------------------------------------ */
/* This table is used to map from the analog pin number to the
** actual A/D converter channel used for that pin.
*/
const uint8_t analog_pin_to_channel_PGM[] =
{
                //*    chipKIT Pin        PIC32 Analog channel
    45,         //*    A0                       AN45
    49,         //*    A1                       AN49
    21,         //*    A2                       AN21
    10,         //*    A3                       AN10
    13,         //*    A4                       AN13
    12,         //*    A5                       AN12
    3,          //*    A6                       AN3
    2,          //*    A7                       AN2
    4,          //*    A8                       AN4
    1,          //*    A9                       AN1
    48,         //*    A10                      AN48
    0,          //*    A11                      AN00
    8,          //*    A12                      AN8
    7,          //*    A13                      AN7
};


/* ------------------------------------------------------------ */
/*                PPS Mappings                                    */
/* ------------------------------------------------------------ */


/* ------------------------------------------------------------ */
/* This table maps from a digital pin number to the corresponding
** PPS register. This register is used to select the peripheral output
** connected to the pin. The register is set to 0 to disconnedt the
** pin from any peripheral so it can be used as GPIO.
** For PIC32MX1xx/2xx series devices, the PPS output select registers
** are arranged as a contiguous series of 32 bit registers. This table
** treats these registers as an array of DWORDs an stores the index
** to the register.
*/
const uint8_t digital_pin_to_pps_out_PGM[] = {
    _PPS_OUT(_PPS_RPF4R),       //  0
    _PPS_OUT(_PPS_RPF5R),       //  1
    _PPS_OUT(_PPS_RPD9R),       //  2
    _PPS_OUT(_PPS_RPD10R),      //  3
    _PPS_OUT(_PPS_RPD11R),      //  4
    _PPS_OUT(_PPS_RPD0R),       //  5
    _PPS_OUT(_PPS_RPC13R),      //  6
    _PPS_OUT(_PPS_RPC14R),      //  7
    _PPS_OUT(_PPS_RPD1R),       //  8   - RX
    _PPS_OUT(_PPS_RPD2R),       //  9   - TX
    _PPS_OUT(_PPS_RPD3R),       //  10
    _PPS_OUT(_PPS_RPD4R),       //  11
    _PPS_OUT(_PPS_RPD5R),       //  12
    _PPS_OUT(_PPS_RPB5R),       //  13 - PROG
    NOT_PPS_PIN,                //  14
    NOT_PPS_PIN,                //  15
    NOT_PPS_PIN,                //  16
    NOT_PPS_PIN,                //  17
    NOT_PPS_PIN,                //  18
    _PPS_OUT(_PPS_RPE3R),       //  19
    _PPS_OUT(_PPS_RPE3R),       //  20
    _PPS_OUT(_PPS_RPE5R),       //  21
    NOT_PPS_PIN,                //  22
    NOT_PPS_PIN,                //  23

    _PPS_OUT(_PPS_RPG6R),       //  24 - SCK
    _PPS_OUT(_PPS_RPG7R),       //  25 - SDI
    _PPS_OUT(_PPS_RPG8R),       //  26 - SDO
    _PPS_OUT(_PPS_RPG9R),       //  27 - SS
    NOT_PPS_PIN,                //  28
    NOT_PPS_PIN,                //  29 - A14
    _PPS_OUT(_PPS_RPB3R),       //  30 - A13
    _PPS_OUT(_PPS_RPB2R),       //  31 - A12
    _PPS_OUT(_PPS_RPB1R),       //  32 - A11
    _PPS_OUT(_PPS_RPB0R),       //  33 - A10
    _PPS_OUT(_PPS_RPB7R),       //  34 - A9
    _PPS_OUT(_PPS_RPB6R),       //  35 - A8
    _PPS_OUT(_PPS_RPB8R),       //  36 - A7
    _PPS_OUT(_PPS_RPB9R),       //  37 - A6
    _PPS_OUT(_PPS_RPB10R),      //  38 - A5
    NOT_PPS_PIN,                //  39 - A4
    NOT_PPS_PIN,                //  40 - A3
    NOT_PPS_PIN,                //  41 - A2
    _PPS_OUT(_PPS_RPB14R),      //  42 - A1
    _PPS_OUT(_PPS_RPB15R),      //  43 - A0
 };

/* ------------------------------------------------------------ */
/* This table maps from the digital pin number to the value to be
** loaded into a PPS input select register to select that pin.
** It also maps from digital pin number to input/output pin set to 
** which the pin belongs. The set mask is in the high four bits,
** the select value is in the low four bits.
** Note: if the PIC32 device has more than four pin sets, or more than
** 16 pin mapping choices per input function, then this table will have
** to be redefined as a table of uint16_t values and the macros used to
** access the table redefined as well.
*/
const uint8_t digital_pin_to_pps_in_PGM[] = {
    _PPS_IN(_PPS_RPF4),       //  0
    _PPS_IN(_PPS_RPF5),       //  1
    _PPS_IN(_PPS_RPD9),       //  2
    _PPS_IN(_PPS_RPD10),      //  3
    _PPS_IN(_PPS_RPD11),      //  4
    _PPS_IN(_PPS_RPD0),       //  5
    _PPS_IN(_PPS_RPC13),      //  6
    _PPS_IN(_PPS_RPC14),      //  7
    _PPS_IN(_PPS_RPD1),       //  8   - RX
    _PPS_IN(_PPS_RPD2),       //  9   - TX
    _PPS_IN(_PPS_RPD3),       //  10
    _PPS_IN(_PPS_RPD4),       //  11
    _PPS_IN(_PPS_RPD5),       //  12
    _PPS_IN(_PPS_RPB5),       //  13 - PROG
    NOT_PPS_PIN,                //  14
    NOT_PPS_PIN,                //  15
    NOT_PPS_PIN,                //  16
    NOT_PPS_PIN,                //  17
    NOT_PPS_PIN,                //  18
    _PPS_IN(_PPS_RPE3),       //  19
    _PPS_IN(_PPS_RPE3),       //  20
    _PPS_IN(_PPS_RPE5),       //  21
    NOT_PPS_PIN,                //  22
    NOT_PPS_PIN,                //  23

    _PPS_IN(_PPS_RPG6),       //  24 - SCK
    _PPS_IN(_PPS_RPG7),       //  25 - SDI
    _PPS_IN(_PPS_RPG8),       //  26 - SDO
    _PPS_IN(_PPS_RPG9),       //  27 - SS
    NOT_PPS_PIN,                //  28
    NOT_PPS_PIN,                //  29 - A14
    _PPS_IN(_PPS_RPB3),       //  30 - A13
    _PPS_IN(_PPS_RPB2),       //  31 - A12
    _PPS_IN(_PPS_RPB1),       //  32 - A11
    _PPS_IN(_PPS_RPB0),       //  33 - A10
    _PPS_IN(_PPS_RPB7),       //  34 - A9
    _PPS_IN(_PPS_RPB6),       //  35 - A8
    _PPS_IN(_PPS_RPB8),       //  36 - A7
    _PPS_IN(_PPS_RPB9),       //  37 - A6
    _PPS_IN(_PPS_RPB10),      //  38 - A5
    NOT_PPS_PIN,                //  39 - A4
    NOT_PPS_PIN,                //  40 - A3
    NOT_PPS_PIN,                //  41 - A2
    _PPS_IN(_PPS_RPB14),      //  42 - A1
    _PPS_IN(_PPS_RPB15),      //  43 - A0
};

/* ------------------------------------------------------------ */
/* This table maps from an output compare number as stored in the
** digital_pin_to_timer_PGM table to the digital pin number of the
** pin that OC is connected to. This table is only required for
** devices that support peripheral pin select (PPS), i.e. PIC32MX1xx/2xx
** devices.
*/

const uint8_t output_compare_to_digital_pin_PGM[] = {
    NOT_PPS_PIN,
    PIN_OC1,                  
    PIN_OC2,            
    PIN_OC3,            
    PIN_OC4,            
    PIN_OC5,            
    PIN_OC6,            
};

/* ------------------------------------------------------------ */
/* This table maps from an external interrupt number to the digital
** pin for that interrupt.
*/

const uint8_t external_int_to_digital_pin_PGM[] = {
    NOT_PPS_PIN,        
    PIN_INT1,            
    PIN_INT2,            
    PIN_INT3,            
    PIN_INT4            
};



/* ------------------------------------------------------------ */
/*                Board Customization Functions                    */
/* ------------------------------------------------------------ */
/*                                                                */
/* The following can be used to customize the behavior of some    */
/* of the core API functions. These provide hooks that can be    */
/* used to extend or replace the default behavior of the core    */
/* functions. To use one of these functions, add the desired    */
/* code to the function skeleton below and then set the value    */
/* of the appropriate compile switch above to 1. This will        */
/* cause the hook function to be compiled into the build and    */
/* to cause the code to call the hook function to be compiled    */
/* into the appropriate core function.                            */
/*                                                                */
/* ------------------------------------------------------------ */
/***    _board_init
**
**    Parameters:
**        none
**
**    Return Value:
**        none
**
**    Errors:
**        none
**
**    Description:
**        This function is called from the core init() function.
**        This can be used to perform any board specific init
**        that needs to be done when the processor comes out of
**        reset and before the user sketch is run.
*/
#if    (OPT_BOARD_INIT != 0)

void _board_init(void) {
    
}

#endif

/* ------------------------------------------------------------ */
/***    _board_pinMode
**
**    Parameters:
**        pin        - digital pin number to configure
**        mode    - mode to which the pin should be configured
**
**    Return Value:
**        Returns 0 if not handled, !0 if handled.
**
**    Errors:
**        none
**
**    Description:
**        This function is called at the beginning of the pinMode
**        function. It can perform any special processing needed
**        when setting the pin mode. If this function returns zero,
**        control will pass through the normal pinMode code. If
**        it returns a non-zero value the normal pinMode code isn't
**        executed.
*/
#if    (OPT_BOARD_DIGITAL_IO != 0)

int    _board_pinMode(uint8_t pin, uint8_t mode) {
    
    return 0;

}

#endif

/* ------------------------------------------------------------ */
/***    _board_getPinMode
**
**    Parameters:
**        pin        - digital pin number
**        mode    - pointer to variable to receive mode value
**
**    Return Value:
**        Returns 0 if not handled, !0 if handled.
**
**    Errors:
**        none
**
**    Description:
**        This function is called at the beginning of the getPinMode
**        function. It can perform any special processing needed
**        when getting the pin mode. If this function returns zero,
**        control will pass through the normal getPinMode code. If
**        it returns a non-zero value the normal getPinMode code isn't
**        executed.
*/
#if    (OPT_BOARD_DIGITAL_IO != 0)

int    _board_getPinMode(uint8_t pin, uint8_t * mode) {
    
    return 0;

}

#endif

/* ------------------------------------------------------------ */
/***    _board_digitalWrite
**
**    Parameters:
**        pin        - digital pin number
**        val        - value to write to the pin
**
**    Return Value:
**        Returns 0 if not handled, !0 if handled.
**
**    Errors:
**        none
**
**    Description:
**        This function is called at the beginning of the digitalWrite
**        function. It can perform any special processing needed
**        in writing to the pin. If this function returns zero,
**        control will pass through the normal digitalWrite code. If
**        it returns a non-zero value the normal digitalWrite code isn't
**        executed.
*/
#if    (OPT_BOARD_DIGITAL_IO != 0)

int    _board_digitalWrite(uint8_t pin, uint8_t val) {
    
    return 0;

}

#endif

/* ------------------------------------------------------------ */
/***    _board_digitalRead
**
**    Parameters:
**        pin        - digital pin number
**        val        - pointer to variable to receive pin value
**
**    Return Value:
**        Returns 0 if not handled, !0 if handled.
**
**    Errors:
**        none
**
**    Description:
**        This function is called at the beginning of the digitalRead
**        function. It can perform any special processing needed
**        in reading from the pin. If this function returns zero,
**        control will pass through the normal digitalRead code. If
**        it returns a non-zero value the normal digitalRead code isn't
**        executed.
*/
#if    (OPT_BOARD_DIGITAL_IO != 0)

int    _board_digitalRead(uint8_t pin, uint8_t * val) {
    
    return 0;

}

#endif

/* ------------------------------------------------------------ */
/***    _board_analogRead
**
**    Parameters:
**        pin        - analog channel number
**        val        - pointer to variable to receive analog value
**
**    Return Value:
**        Returns 0 if not handled, !0 if handled.
**
**    Errors:
**        none
**
**    Description:
**        This function is called at the beginning of the analogRead
**        function. It can perform any special processing needed
**        in reading from the pin. If this function returns zero,
**        control will pass through the normal analogRead code. If
**        it returns a non-zero value the normal analogRead code isn't
**        executed.
*/
#if (OPT_BOARD_ANALOG_READ != 0)

int    _board_analogRead(uint8_t pin, int * val) {

    return 0;

}

#endif

/* ------------------------------------------------------------ */
/***    _board_analogReference
**
**    Parameters:
**
**    Return Value:
**        Returns 0 if not handled, !0 if handled.
**
**    Errors:
**        none
**
**    Description:
**        This function is called at the beginning of the analogReference
**        function. It can perform any special processing needed
**        to set the reference voltage. If this function returns zero,
**        control will pass through the normal analogReference code. If
**        it returns a non-zero value the normal analogReference code isn't
**        executed.
*/
#if (OPT_BOARD_ANALOG_READ != 0)

int    _board_analogReference(uint8_t mode) {

    return 0;

}

#endif

/* ------------------------------------------------------------ */
/***    _board_analogWrite
**
**    Parameters:
**        pin        - pin number
**        val        - analog value to write
**
**    Return Value:
**        Returns 0 if not handled, !0 if handled.
**
**    Errors:
**        none
**
**    Description:
**        This function is called at the beginning of the analogWrite
**        function. It can perform any special processing needed
**        in writing to the pin. If this function returns zero,
**        control will pass through the normal analogWrite code. If
**        it returns a non-zero value the normal analogWrite code isn't
**        executed.
*/
#if (OPT_BOARD_ANALOG_WRITE != 0)

int    _board_analogWrite(uint8_t pin, int val) {

    return 0;

}

#endif

#endif // OPT_BOARD_DATA

/* ------------------------------------------------------------ */

#endif    // BOARD_DATA_C

/************************************************************************/
