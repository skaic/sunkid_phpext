/*
  +----------------------------------------------------------------------+
  | sunkid for php_ext                                                   |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: skaic  <i@sunkid.me>                                         |
  +----------------------------------------------------------------------+
*/

/* 
 * 练习一 
 *   函数练习
 *   1. 创建一个函数
 *   2. 接受参数
 *   3. 返回参数
 */ 

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"

/*{{{ function sunkid_hello() {
 *      echo "Hello Kitty!\n";
 *    }
 */
PHP_FUNCTION(sunkid_hello) {
    php_printf("Hello Kitty!\n");
    return 1;
}
/*}}}*/

/*{{{ function sunkid_echo($message) {
 *      echo $message;
 *    }
 */
PHP_FUNCTION(sunkid_echo) {
    zval *message;
    if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC,"z",&message) == FAILURE) {
        RETURN_NULL();
    }
    php_printf("%s",Z_STRVAL_P(message));
    return 1;
}
/*}}}*/

/*{{{ function sunkid_sum($a,$b) {
 *      return $a + $b;
 *    }
 */
PHP_FUNCTION(sunkid_sum) {
    long a,b,sum;
    //接受参数
    if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC,"l|l",&a,&b) == FAILURE) {
        RETURN_NULL();
    }
    sum = a + b;
    //返回结果
    RETURN_LONG(sum);
    return 1;
}
/*}}}*/
