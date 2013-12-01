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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "convert.h"

/*{{{ convert_i2s(long num)
  */
PHP_FUNCTION(convert_i2s) {
    zval *znum;
    if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC,"z",&znum)) {
        RETURN_NULL();
    }
    convert_to_string(znum);
    RETURN_ZVAL(znum,TRUE,FALSE);
    return TRUE;
}
/*}}}*/

