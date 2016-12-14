# `tsc_decrypt`

`tsc_decrypt` is a dead simple utility for decrypting `.tsc` files from Cave
Story, written in C++.

## supported operating systems

- Linux

## building

```sh
$ mkdir bld
$ cd bld
$ cmake ..
$ make
```

## using

```
$ ./tsc_decrypt [file]
```

The decrypted contents of the file is printed to stdout.
