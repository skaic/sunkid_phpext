--TEST--
Check for sunkid_phpext presence
--SKIPIF--
<?php if (!extension_loaded("sunkid_phpext")) print "skip"; ?>
--FILE--
<?php
sunkid_hello();
sunkid_echo("Hello sk\n");
echo sunkid_sum(1,2);
?>
--EXPECT--
Hello Kitty!
Hello sk
3
