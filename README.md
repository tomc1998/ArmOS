To build, have gcc-arm-linux-gnueabi installed then run -


```
$ mkdir bin
$ mkdir obj
$ make all
```


To run on qemu, have qemu-system-arm installed then run -

```
$ qemu-system-arm -M versatilepb -cpu arm1176 -nographic -kernel bin/kernel.elf
```

