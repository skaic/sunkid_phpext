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
 * 练习二
 *   变量练习
 *   1. 创建变量
 *   2. 修改变量
 */ 

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"


/*{{{ function sunkid_value() {
 *      global $sunkid;
 *      if(!isset($sunkid)) {
 *          $sunkid = 0;
 *      } else { 
 *          $sunkid++;
 *      }
 *    }
 */
PHP_FUNCTION(sunkid_value) {
    zval **sunkid,*value;
    long tmp;
    //初始化一个变量
    MAKE_STD_ZVAL(value);
    //读取全局变量
    if ( zend_hash_find(
                &EG(symbol_table),
                "sunkid",
                sizeof("sunkid"),
                (void **)&sunkid)  == FAILURE || Z_TYPE_PP(sunkid) == IS_NULL) {
        //全局变量下找不到sunkid变量，或者变量类型为null时
        //设置默认值为0
        ZVAL_LONG(value,0);
    } else {
        tmp = Z_LVAL_PP(sunkid); 
        ZVAL_LONG(value,tmp+1);
    }

    //设置全局变量
    ZEND_SET_GLOBAL_VAR("sunkid",value); 
    return 1;
}
/*}}}*/
