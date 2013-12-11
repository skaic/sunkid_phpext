dnl $Id$
dnl config.m4 for extension sunkid_phpext

PHP_ARG_ENABLE(sunkid_phpext, for sunkid support,
[  --with-sunkid           Include sunkid_phpext support])

if test "$PHP_SUNKID_PHPEXT" != "no"; then
  PHP_NEW_EXTENSION(sunkid_phpext, sunkid_phpext.c Exercises/1.c,  $ext_shared)
  PHP_SUBST(COUNTER_SHARED_LIBADD)
fi
