
all: kremlib/libkremlib.dll evercrypt/libevercrypt.dll mitls/libmitls.dll

kremlib/libkremlib.dll:
	$(MAKE) -C kremlib

evercrypt/libevercrypt.dll: kremlib/libkremlib.dll
	$(MAKE) -C evercrypt

mitls/libmitls.dll: evercrypt/libevercrypt.dll
	$(MAKE) -C mitls

clean:
	$(MAKE) -C kremlib clean
	$(MAKE) -C evercrypt clean
	$(MAKE) -C mitls clean

