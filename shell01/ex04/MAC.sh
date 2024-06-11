#ifconfig | grep -o -E '([0-9a-fA-F]{2}:){5}([0-9a-fA-F]{2})'

ifconfig |grep ether | tr -d ' ' 