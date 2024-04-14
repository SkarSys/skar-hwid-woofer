a simpler hwid temp spoofer that changes all serial numbers. the usermode creates a file called skar.skar and writes a value to it. when the driver is mapped it finds the file and changes your serial numbers to the value in the file.
to use just build the usermode source (release) and run it, then map the driver (.sys file) using kdmapper.
