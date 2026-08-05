# Memory Maps

## Aliasing and Use After Free
The following error from running the compiled Aliasing C program:
```
aliasing_example: aliasing and use-after-free (Valgrind should report it)
	a=0x557600ca86b0 b=0x557600ca86b0 a[2]=22 b[2]=22
	after free(a): b=0x557600ca86b0 (dangling)
	reading b[2]=82251454
	wrote b[3]=1234
```
This illustrates the issues of aliases and no proper documentation of them, the demostration of use-after-free error.

## Crash Example
Running the compiled Crash Example C program produces this result:
```
crash_example: deterministic NULL dereference (segmentation fault)
	requesting n=0
Segmentation fault (core dumped)
```
Demostrating the issue of *dereferencing a NULL pointers.

## Heap Example
Execution of the Heap Exmple C program produces the following:
```
heap_example: allocations and a deliberate leak
	alice=0x5562ba7546b0 name=0x5562ba7546d0 age=30
	bob=0x5562ba7546f0 name=0x5562ba754710 age=41
```
Showing there's an issue of allocation of memory.

## Stack Example
The following output; after running Stack Example C program:
```
stack_example: recursion and stack frames
[enter] depth=0
	&local_int=0x7fff54f118b4  p_local=0x7fff54f118b4  local_int=100
	local_buf=0x7fff54f118c0  local_buf[0]=A
	&marker=0x7fff54f11904  marker=0
...
[exit] depth=0
	&local_int=0x7fff54f118b4  p_local=0x7fff54f118b4  local_int=100
	local_buf=0x7fff54f118c0  local_buf[0]=A
	&marker=0x7fff54f11904  marker=0
```
A highly detailed error record of each variable with both entry and exit.
