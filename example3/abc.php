<?php

// copy this in /usr/lib64/php/modules
include("example.php");

$size = 10;
$array = new_intArray($size);
for ($i=0; $i<$size; $i++) {
	$val = $i;
	intArray_setitem($array, $i, $val);  
}
$result = arraySum($array, $size);
echo "Result = ". $result;
echo "\r\n";
echo "\r\n";
//delete_intArray($array);


?>