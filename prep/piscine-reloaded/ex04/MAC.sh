ifconfig -a | grep ether | sed -En "s/(.*ether )(.{2}:.{14})(  tx.*)/\2/p"
