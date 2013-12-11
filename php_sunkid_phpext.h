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

#ifndef PHP_SUNKID_PHPEXT_H
#define PHP_SUNKID_PHPEXT_H


extern zend_module_entry sunkid_phpext_module_entry;
#define phpext_sunkid_phpext_ptr &sunkid_phpext_module_entry

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(sunkid_phpext);
PHP_MSHUTDOWN_FUNCTION(sunkid_phpext);
PHP_RINIT_FUNCTION(sunkid_phpext);
PHP_RSHUTDOWN_FUNCTION(sunkid_phpext);
PHP_MINFO_FUNCTION(sunkid_phpext);

#define SUNKID_PHPEXT_VERSION    "0.1"

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
