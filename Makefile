DEPLOYMENT= LedBlinker
ARCH= arm-hf-linux
HOST= debian 
IP= 10.42.0.143
MAKEFLAGS += --silent

.PHONY: all impl gds xc cp

all:
	fprime-util build

impl:
	fprime-util impl

gds:
	fprime-gds -n --dictionary build-artifacts/$(ARCH)/$(DEPLOYMENT)/dict/$(DEPLOYMENT)TopologyAppDictionary.xml --ip-client --ip-address $(IP)

xc: 
	fprime-util build $(ARCH) 

cp:
	scp -r build-artifacts/$(ARCH)/LedBlinker/ debian@$(IP)

#clean:
#	@rm -rf $(BUILD_DIR)/*
