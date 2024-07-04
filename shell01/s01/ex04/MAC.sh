ifconfig | grep ether | sed 's/^[[:space:]]*//g' | cut -d " " -f 2
