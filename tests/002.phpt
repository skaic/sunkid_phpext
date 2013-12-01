--TEST--
Check for sunkid_phpext presence
--SKIPIF--
<?php if (!extension_loaded("sunkid_phpext")) print "skip"; ?>
--FILE--
<?php
var_dump(convert_i2s(108));
?>
--EXPECT--
string(3) "108"
