#
# Makefile.am for snapper/client/snapper
#

AM_CPPFLAGS = -I$(top_srcdir) $(DBUS_CFLAGS)

bin_PROGRAMS = snapper

snapper_SOURCES =					\
	snapper.cc					\
	cmd.h						\
	cmd-list-configs.cc				\
	cmd-create-config.cc				\
	cmd-delete-config.cc				\
	cmd-get-config.cc				\
	cmd-set-config.cc				\
	cmd-list.cc					\
	cmd-create.cc					\
	cmd-modify.cc					\
	cmd-delete.cc					\
	cmd-mount.cc					\
	cmd-umount.cc					\
	cmd-status.cc					\
	cmd-diff.cc					\
	cmd-xadiff.cc					\
	cmd-undochange.cc				\
	cmd-rollback.cc					\
	cmd-setup-quota.cc				\
	cmd-cleanup.cc					\
	cmd-debug.cc					\
	../cleanup.cc		../cleanup.h		\
	../misc.cc		../misc.h		\
	MyFiles.cc		MyFiles.h		\
	GlobalOptions.cc	GlobalOptions.h

snapper_LDADD = 			\
	../proxy/libproxy.la		\
	../proxy/libclient.la		\
	../../snapper/libsnapper.la	\
	../utils/libutils.la		\
	../../dbus/libdbus.la		\
	$(JSON_C_LIBS)
