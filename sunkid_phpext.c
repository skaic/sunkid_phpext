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

/* $Id: $ */

//加载config.h
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_sunkid_phpext.h"

#include "Exercises/1.h"

/*{{{ sunkid_phpext_functions
 */
const zend_function_entry sunkid_phpext_functions[] = {
    PHP_FE(sunkid_hello, NULL)
    PHP_FE(sunkid_echo, NULL)
    PHP_FE(sunkid_sum, NULL)
    PHP_FE_END
};
/*}}}*/


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
