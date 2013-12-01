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

/* $Id: header 321634 2012-01-01 13:15:04Z felipe $ */

//加载config.h，如果配置了的话
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_sunkid_phpext.h"

#include "convert.h"

/*{{{ sunkid_phpext_functions
 */
const zend_function_entry sunkid_phpext_functions[] = {
    PHP_FE(convert_i2s, NULL)
    PHP_FE_END
};
/*}}}*/


/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(sunkid_phpext) {
    return SUCCESS;
};
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(sunkid_phpext) {
    return SUCCESS;
};
/* }}} */

/* {{{ PHP_RINIT_FUNCTION
 */
PHP_RINIT_FUNCTION(sunkid_phpext) {
    return SUCCESS;
};
/* }}} */

/* {{{ PHP_RSHUTDOWN_FUNCTION
 */
PHP_RSHUTDOWN_FUNCTION(sunkid_phpext) {
    return SUCCESS;
};
/* }}} */

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(sunkid_phpext) {
    //php_info_print_table_start();
    //php_info_print_table_header(2, "sunkid_phpext support", "enabled");
    //php_info_print_table_end();
};
/* }}} */

/*{{{ module entry
 */
zend_module_entry  sunkid_phpext_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    "sunkid_phpext",
    sunkid_phpext_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    SUNKID_PHPEXT_VERSION, /* Replace with version number for your extension */
#endif
    STANDARD_MODULE_PROPERTIES
};
/*}}}*/

#ifdef COMPILE_DL_SUNKID_PHPEXT
ZEND_GET_MODULE(sunkid_phpext)
#endif
