# Install the pkg-config file.
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = src/glitter.pc

DISTCLEANFILES = $(pkgconfig_DATA)
EXTRA_DIST = src/glitter.pc.in autogen.sh

#SUBDIRS = src docs
#dist_doc_DATA = README.md docs
SUBDIRS = src
dist_doc_DATA = README.md
ACLOCAL_AMFLAGS = -I m4

include aminclude.am

if DX_COND_man

# You'd probably want to post-process man pages and installed the patched
# versions.
dist_man1_MANS = @DX_DOCDIR@/man/man1/glitter.h.1 @DX_DOCDIR@/man/man1/dsint.h.1 @DX_DOCDIR@/man/man1/etry.h.1 @DX_DOCDIR@/man/man1/libglitter.c.1
# TODO wildcards would be nice here
#_home_momobiblebender_src_glitter_src_.1

$(dist_man1_MANS): doxygen-doc

endif

MOSTLYCLEANFILES = $(DX_CLEANFILES)

EXTRA_DIST += $(DX_CONFIG) @DX_DOCDIR@/man @DX_DOCDIR@/html @DX_DOCDIR@/latex @DX_DOCDIR@/glitter.pdf

