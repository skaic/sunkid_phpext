--TEST--
Check for sunkid_phpext presence
--SKIPIF--
<?php if (!extension_loaded("sunkid_phpext")) print "skip"; ?>
--FILE--
<?php
global $sunkid;
sunkid_value();
echo $sunkid;
sunkid_value();
echo $sunkid;
sunkid_value();
echo $sunkid;
?>
--EXPECT--
012
