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
# /home/dds/OvernightTests/tmp.j3XyO86N0W/build/bin/mwc.pl -features ospl_os_host_linux=1 -features ospl_os_linux=1 -features ospl_64_bit=1 -value_template lib_modifier= -include /home/dds/INSTALLED_FOR_DDS/TAO211_0-RedHat-EL62-gcc446-inline-64bit-120927-head/bin/MakeProjectCreator/config -include /home/dds/INSTALLED_FOR_DDS/TAO211_0-RedHat-EL62-gcc446-inline-64bit-120927-head/bin/MakeProjectCreator/config/TAO -features x86_64_linux=1 -features ospl_arch_x86_64=1 -type ospljavamake HDE/x86_64.linux/examples/JustJavaScripts.mwc
#
#----------------------------------------------------------------------------


all: saj_pingpong_types saj_pingpong_ping saj_pingpong_pong

clean depend generated realclean check-syntax $(CUSTOM_TARGETS):
	@$(MAKE) -f Makefile.saj_pingpong_types $(@)
	@$(MAKE) -f Makefile.saj_pingpong_ping $(@)
	@$(MAKE) -f Makefile.saj_pingpong_pong $(@)

.PHONY: saj_pingpong_types
saj_pingpong_types:
	@$(MAKE) -f Makefile.saj_pingpong_types all

.PHONY: saj_pingpong_ping
saj_pingpong_ping: saj_pingpong_types
	@$(MAKE) -f Makefile.saj_pingpong_ping all

.PHONY: saj_pingpong_pong
saj_pingpong_pong: saj_pingpong_types
	@$(MAKE) -f Makefile.saj_pingpong_pong all

project_name_list:
	@echo saj_pingpong_ping
	@echo saj_pingpong_pong
	@echo saj_pingpong_types
