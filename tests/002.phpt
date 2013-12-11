--TEST--
Check for sunkid_phpext presence
--SKIPIF--
<?php if (!extension_loaded("sunkid_phpext")) print "skip"; ?>
--FILE--
<?php
sunkid_hello();
?>
--EXPECT--
Hello Kitty!
