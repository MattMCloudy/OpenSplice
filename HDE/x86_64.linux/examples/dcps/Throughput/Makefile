# -*-Makefile-*-
#----------------------------------------------------------------------------
#       Make Workspace
#
# $Id$
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/dds/OvernightTests/tmp.j3XyO86N0W/build/bin/mwc.pl -features ospl_os_host_linux=1 -features ospl_os_linux=1 -features ospl_64_bit=1 -value_template lib_modifier= -include /home/dds/INSTALLED_FOR_DDS/TAO211_0-RedHat-EL62-gcc446-inline-64bit-120927-head/bin/MakeProjectCreator/config -include /home/dds/INSTALLED_FOR_DDS/TAO211_0-RedHat-EL62-gcc446-inline-64bit-120927-head/bin/MakeProjectCreator/config/TAO -features x86_64_linux=1 -features ospl_arch_x86_64=1 -type make HDE/x86_64.linux/examples/examples_simple.mwc
#
#----------------------------------------------------------------------------


all: SA_Cxx_Throughput_Types SA_Cxx_Throughput_Impl SA_Cxx_Throughput_Publisher SA_Cxx_Throughput_Subscriber ISO_Cxx_Throughput_Types ISO_Cxx_Throughput_Impl ISO_Cxx_Throughput_Pub ISO_Cxx_Throughput_Sub

clean depend generated realclean check-syntax $(CUSTOM_TARGETS):
	@cd cpp && $(MAKE) -f Makefile.SA_Cxx_Throughput_Types $(@)
	@cd cpp && $(MAKE) -f Makefile.SA_Cxx_Throughput_Impl $(@)
	@cd cpp && $(MAKE) -f Makefile.SA_Cxx_Throughput_Publisher $(@)
	@cd cpp && $(MAKE) -f Makefile.SA_Cxx_Throughput_Subscriber $(@)
	@cd isocpp && $(MAKE) -f Makefile.ISO_Cxx_Throughput_Types $(@)
	@cd isocpp && $(MAKE) -f Makefile.ISO_Cxx_Throughput_Impl $(@)
	@cd isocpp && $(MAKE) -f Makefile.ISO_Cxx_Throughput_Pub $(@)
	@cd isocpp && $(MAKE) -f Makefile.ISO_Cxx_Throughput_Sub $(@)

.PHONY: SA_Cxx_Throughput_Types
SA_Cxx_Throughput_Types:
	@cd cpp && $(MAKE) -f Makefile.SA_Cxx_Throughput_Types all

.PHONY: SA_Cxx_Throughput_Impl
SA_Cxx_Throughput_Impl: SA_Cxx_Throughput_Types
	@cd cpp && $(MAKE) -f Makefile.SA_Cxx_Throughput_Impl all

.PHONY: SA_Cxx_Throughput_Publisher
SA_Cxx_Throughput_Publisher: SA_Cxx_Throughput_Impl
	@cd cpp && $(MAKE) -f Makefile.SA_Cxx_Throughput_Publisher all

.PHONY: SA_Cxx_Throughput_Subscriber
SA_Cxx_Throughput_Subscriber: SA_Cxx_Throughput_Impl
	@cd cpp && $(MAKE) -f Makefile.SA_Cxx_Throughput_Subscriber all

.PHONY: ISO_Cxx_Throughput_Types
ISO_Cxx_Throughput_Types:
	@cd isocpp && $(MAKE) -f Makefile.ISO_Cxx_Throughput_Types all

.PHONY: ISO_Cxx_Throughput_Impl
ISO_Cxx_Throughput_Impl: ISO_Cxx_Throughput_Types
	@cd isocpp && $(MAKE) -f Makefile.ISO_Cxx_Throughput_Impl all

.PHONY: ISO_Cxx_Throughput_Pub
ISO_Cxx_Throughput_Pub: ISO_Cxx_Throughput_Impl
	@cd isocpp && $(MAKE) -f Makefile.ISO_Cxx_Throughput_Pub all

.PHONY: ISO_Cxx_Throughput_Sub
ISO_Cxx_Throughput_Sub: ISO_Cxx_Throughput_Impl
	@cd isocpp && $(MAKE) -f Makefile.ISO_Cxx_Throughput_Sub all

project_name_list:
	@echo SA_Cxx_Throughput_Impl
	@echo SA_Cxx_Throughput_Publisher
	@echo SA_Cxx_Throughput_Subscriber
	@echo SA_Cxx_Throughput_Types
	@echo ISO_Cxx_Throughput_Impl
	@echo ISO_Cxx_Throughput_Pub
	@echo ISO_Cxx_Throughput_Sub
	@echo ISO_Cxx_Throughput_Types
