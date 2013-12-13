dnl $Id$
dnl config.m4 for extension sunkid_phpext

PHP_ARG_ENABLE(sunkid_phpext, for sunkid support,
[  --with-sunkid           Include sunkid_phpext support])

if test "$PHP_SUNKID_PHPEXT" != "no"; then
    dnl 注意：PHP_NEW_EXTENSION宏声明了这个扩展的名称，需要的源文件，此扩展的编译形式
    PHP_NEW_EXTENSION(sunkid_phpext, sunkid_phpext.c Exercises/1.c Exercises/2.c,  $ext_shared)
    dnl PHP_SUBST只是php官方对autoconf里的AC_SUBST函数的一层封装
    PHP_SUBST(SUNKID_PHPEXT_SHARED_LIBADD)
fi
