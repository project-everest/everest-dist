
UNAME           = $(shell uname)
MARCH           ?= x86_64

ifeq ($(OS),Windows_NT)
  SO = dll
  CC ?= x86_64-w64-mingw32-gcc
  LDOPTS +=
else ifeq ($(UNAME),Darwin)
  VARIANT = -Darwin
  SO = so
else ifeq ($(UNAME),Linux)
  VARIANT = -Linux
  CFLAGS := -fPIC $(CFLAGS)
  LDOPTS := -lpthread -Xlinker -z -Xlinker noexecstack -Wl,-z,defs $(LDOPTS)
  SO = so
endif

all: kremlib/libkremlib.a evercrypt/libevercrypt.a mitls/libmitls.a

kremlib/libkremlib.a:
	$(MAKE) -C kremlib

evercrypt/libevercrypt.a: kremlib/libkremlib.a
	$(MAKE) -C evercrypt

mitls/libmitls.a: evercrypt/libevercrypt.a
	$(MAKE) -C mitls

clean:
	$(MAKE) -C kremlib clean
	$(MAKE) -C evercrypt clean
	$(MAKE) -C mitls clean

