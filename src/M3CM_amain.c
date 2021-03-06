/* >>>------------------------------------------------------------
 *
 * File: M3CM_amain.c
 *
 * <<<------------------------------------------------------------ */


/* PRQA S 1011, 3108, 3408 EOF */

#include "misra.h"
#include "m3cmex.h"

extern int16_t rule_0805b(void);                                      /* expect: 1513 1594 1594 */

int32_t amain( void )                                                 /* expect: 1503 */
{
    int16_t err;

    err = dir_0401();
    err += dir_0402();
    err += dir_0403();
    err += dir_0404();
    err += dir_0405();
    err += dir_0406();
    err += dir_0407();
    err += dir_0408();
    err += dir_0409();
    err += dir_0410();
    err += dir_0411();
    err += dir_0412();
    err += dir_0413();
    err += dir_0414();
    err += rule_0101();
    err += rule_0102();
    err += rule_0103();
    err += rule_0202();
    err += rule_0203();
    err += rule_0204();
    err += rule_0205();
    err += rule_0206();
    err += rule_0207();
    err += rule_0301();
    err += rule_0302();
    err += rule_0401();
    err += rule_0402();
    err += rule_0503();
    err += rule_0506();
    err += rule_0507();
    err += rule_0508();
    err += rule_0509();
    err += rule_0601();
    err += rule_0602();
    err += rule_0701();
    err += rule_0702();
    err += rule_0703();
    err += rule_0704();
    err += rule_0801();
    err += rule_0802();
    err += rule_0803();
    err += rule_0804();
    err += rule_0805();
    err += rule_0806();
    err += rule_0807();
    err += rule_0809();
    err += rule_0810();
    err += rule_0811();
    err += rule_0813();
    err += rule_0814();
    err += rule_0901();
    err += rule_0902();
    err += rule_0903();
    err += rule_0904();
    err += rule_0905();
    err += rule_1001_Boolean();
    err += rule_1001_character();
    err += rule_1001_enum();
    err += rule_1001_floating();
    err += rule_1001_signed();
    err += rule_1001_unsigned();
    err += rule_1002();
    err += rule_1003_from_Boolean();
    err += rule_1003_from_character();
    err += rule_1003_from_enum();
    err += rule_1003_from_floating();
    err += rule_1003_from_signed();
    err += rule_1003_from_unsigned();
    err += rule_1003_narrow_floating();
    err += rule_1003_narrow_signed();
    err += rule_1003_narrow_unsigned();
    err += rule_1003_switch();
    err += rule_1004();
    err += rule_1005();
    err += rule_1006();
    err += rule_1007();
    err += rule_1008();
    err += rule_1101();
    err += rule_1102();
    err += rule_1103();
    err += rule_1104();
    err += rule_1105();
    err += rule_1106();
    err += rule_1107();
    err += rule_1108();
    err += rule_1201();
    err += rule_1202();
    err += rule_1203();
    err += rule_1204();
    err += rule_1205();
    err += rule_1301();
    err += rule_1302();
    err += rule_1303();
    err += rule_1304();
    err += rule_1305();
    err += rule_1306();
    err += rule_1401();
    err += rule_1402();
    err += rule_1403();
    err += rule_1404();
    err += rule_1501();
    err += rule_1502();
    err += rule_1504();
    err += rule_1506();
    err += rule_1507();
    err += rule_1601();
    err += rule_1602();
    err += rule_1603();
    err += rule_1604();
    err += rule_1605();
    err += rule_1606();
    err += rule_1607();
    err += rule_1701();
    err += rule_1702();
    err += rule_1703();
    err += rule_1704();
    err += rule_1705();
    err += rule_1706();
    err += rule_1707();
    err += rule_1708();
    err += rule_1801();
    err += rule_1802();
    err += rule_1803();
    err += rule_1804();
    err += rule_1805();
    err += rule_1806();
    err += rule_1807();
    err += rule_1808();
    err += rule_1901();
    err += rule_1902();
    err += rule_2001();
    err += rule_2002();
    err += rule_2003();
    err += rule_2004();
    err += rule_2005();
    err += rule_2006();
    err += rule_2007();
    err += rule_2008();
    err += rule_2009();
    err += rule_2010();
    err += rule_2011();
    err += rule_2012();
    err += rule_2013();
    err += rule_2014();
    err += rule_2101();
    err += rule_2102();
    err += rule_2103();
    err += rule_2104();
    err += rule_2105();
    err += rule_2106();
    err += rule_2107();
    err += rule_2108();
    err += rule_2109();
    err += rule_2110();
    err += rule_2111();
    err += rule_2112();
    err += rule_2113();
    err += rule_2114();
    err += rule_2115();
    err += rule_2116();
    err += rule_2117();
    err += rule_2118();
    err += rule_2119();
    err += rule_2120();
    err += rule_2201();
    err += rule_2202();
    err += rule_2203();
    err += rule_2204();
    err += rule_2205();
    err += rule_2206();
    err += rule_2207();
    err += rule_2208();
    err += rule_2209();
    err += rule_2210();

    return err;
}

extern int16_t rule_0806(void)                                        /* expect: 1509 1593 1593 */
{
    return 2;
}


