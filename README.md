# Starter Kernel Module
My Kernel module starter files based on the starter module of the Linux Kernel Programming Book by Kaiwan N Billimoria

# Build
- To build the module:
```
make all
```

- To clean the module files generated by Makefile:
```
make clean
```

# Inserting module into the kernel
- To insert the module:
```
sudo insmod starter.ko 
```

- To remove the module:
```
sudo rmmod starter.ko 
```

# Viewing the Kernel log:
- Kernel log dump should show the printK messages of the module:
```
dmesg | grep starter
```

- You see the Klog of the module:
```
[  207.576991] starter: Starter module init
[  221.095238] starter: Starter module exit
```



