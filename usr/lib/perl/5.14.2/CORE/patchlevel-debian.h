	,"DEBPKG:debian/arm_thread_stress_timeout - http://bugs.debian.org/501970 Raise the timeout of ext/threads/shared/t/stress.t to accommodate slower build hosts"
	,"DEBPKG:debian/cpan_definstalldirs - Provide a sensible INSTALLDIRS default for modules installed from CPAN."
	,"DEBPKG:debian/db_file_ver - http://bugs.debian.org/340047 Remove overly restrictive DB_File version check."
	,"DEBPKG:debian/doc_info - Replace generic man(1) instructions with Debian-specific information."
	,"DEBPKG:debian/enc2xs_inc - http://bugs.debian.org/290336 Tweak enc2xs to follow symlinks and ignore missing @INC directories."
	,"DEBPKG:debian/errno_ver - http://bugs.debian.org/343351 Remove Errno version check due to upgrade problems with long-running processes."
	,"DEBPKG:debian/libperl_embed_doc - http://bugs.debian.org/186778 Note that libperl-dev package is required for embedded linking"
	,"DEBPKG:fixes/respect_umask - Respect umask during installation"
	,"DEBPKG:debian/writable_site_dirs - Set umask approproately for site install directories"
	,"DEBPKG:debian/extutils_set_libperl_path - EU:MM: Set location of libperl.a to /usr/lib"
	,"DEBPKG:debian/no_packlist_perllocal - Don't install .packlist or perllocal.pod for perl or vendor"
	,"DEBPKG:debian/prefix_changes - Fiddle with *PREFIX and variables written to the makefile"
	,"DEBPKG:debian/fakeroot - Postpone LD_LIBRARY_PATH evaluation to the binary targets."
	,"DEBPKG:debian/instmodsh_doc - Debian policy doesn't install .packlist files for core or vendor."
	,"DEBPKG:debian/ld_run_path - Remove standard libs from LD_RUN_PATH as per Debian policy."
	,"DEBPKG:debian/libnet_config_path - Set location of libnet.cfg to /etc/perl/Net as /usr may not be writable."
	,"DEBPKG:debian/m68k_thread_stress - http://bugs.debian.org/517938 http://bugs.debian.org/495826 Disable some threads tests on m68k for now due to missing TLS."
	,"DEBPKG:debian/mod_paths - Tweak @INC ordering for Debian"
	,"DEBPKG:debian/module_build_man_extensions - http://bugs.debian.org/479460 Adjust Module::Build manual page extensions for the Debian Perl policy"
	,"DEBPKG:debian/prune_libs - http://bugs.debian.org/128355 Prune the list of libraries wanted to what we actually need."
	,"DEBPKG:fixes/net_smtp_docs - [rt.cpan.org #36038] http://bugs.debian.org/100195 Document the Net::SMTP 'Port' option"
	,"DEBPKG:debian/perlivp - http://bugs.debian.org/510895 Make perlivp skip include directories in /usr/local"
	,"DEBPKG:debian/cpanplus_definstalldirs - http://bugs.debian.org/533707 Configure CPANPLUS to use the site directories by default."
	,"DEBPKG:debian/cpanplus_config_path - Save local versions of CPANPLUS::Config::System into /etc/perl."
	,"DEBPKG:debian/deprecate-with-apt - http://bugs.debian.org/580034 Point users to Debian packages of deprecated core modules"
	,"DEBPKG:fixes/hurd-ccflags - [a190e64] http://bugs.debian.org/587901 [perl #92244] Make hints/gnu.sh append to $ccflags rather than overriding them"
	,"DEBPKG:debian/squelch-locale-warnings - http://bugs.debian.org/508764 Squelch locale warnings in Debian package maintainer scripts"
	,"DEBPKG:debian/skip-upstream-git-tests - Skip tests specific to the upstream Git repository"
	,"DEBPKG:fixes/extutils-cbuilder-cflags - [011e8fb] http://bugs.debian.org/624460 [perl #89478] Append CFLAGS and LDFLAGS to their Config.pm counterparts in EU::CBuilder"
	,"DEBPKG:fixes/module-build-home-directory - http://bugs.debian.org/624850 [rt.cpan.org #67893] Fix failing tilde test when run under a UID without a passwd entry"
	,"DEBPKG:debian/patchlevel - http://bugs.debian.org/567489 List packaged patches for 5.14.2-21+deb7u3 in patchlevel.h"
	,"DEBPKG:fixes/h2ph-multiarch - [e7ec705] http://bugs.debian.org/625808 [perl #90122] Make h2ph correctly search gcc include directories"
	,"DEBPKG:fixes/index-tainting - [3b36395] http://bugs.debian.org/291450 [perl #64804] RT 64804: tainting with index() of a constant"
	,"DEBPKG:fixes/document_makemaker_ccflags - http://bugs.debian.org/628522 [rt.cpan.org #68613] Document that CCFLAGS should include $Config{ccflags}"
	,"DEBPKG:fixes/sys-syslog-socket-timeout-kfreebsd.patch - http://bugs.debian.org/627821 [rt.cpan.org #69997] Use a socket timeout on GNU/kFreeBSD to catch ICMP port unreachable messages"
	,"DEBPKG:fixes/hurd-hints - http://bugs.debian.org/636609 Improve general GNU hints, needed for GNU/Hurd."
	,"DEBPKG:fixes/pod_fixes - [7698aed] http://bugs.debian.org/637816 Fix typos in several pod/perl*.pod files"
	,"DEBPKG:debian/find_html2text - http://bugs.debian.org/640479 Configure CPAN::Distribution with correct name of html2text"
	,"DEBPKG:fixes/digest_eval_hole - http://bugs.debian.org/644108 Close the eval \"require $module\" security hole in Digest->new($algorithm)"
	,"DEBPKG:fixes/hurd-ndbm - [f0d0a20] [perl #102680] http://bugs.debian.org/645989 Add GNU/Hurd hints for NDBM_File"
	,"DEBPKG:fixes/sysconf.t-posix - [8040185] [perl #102888] http://bugs.debian.org/646016 Fix hang in ext/POSIX/t/sysconf.t on GNU/Hurd"
	,"DEBPKG:fixes/hurd-largefile - [1fda587] [perl #103014] http://bugs.debian.org/645790 enable LFS on GNU/Hurd"
	,"DEBPKG:debian/hurd_test_todo_syslog - http://bugs.debian.org/650093 Disable failing GNU/Hurd tests in cpan/Sys-Syslog/t/syslog.t"
	,"DEBPKG:fixes/hurd_skip_itimer_virtual - [rt.cpan.org #72754] http://bugs.debian.org/650094 Skip interval timer tests in Time::HiRes on GNU/Hurd"
	,"DEBPKG:debian/hurd_test_skip_sigdispatch - http://bugs.debian.org/650188 Disable failing GNU/Hurd tests op/sigdispatch.t"
	,"DEBPKG:debian/hurd_test_skip_stack - http://bugs.debian.org/650175 Disable failing GNU/Hurd tests dist/threads/t/stack.t"
	,"DEBPKG:debian/hurd_test_skip_pipe - http://bugs.debian.org/650187 Disable failing GNU/Hurd tests io/pipe.t"
	,"DEBPKG:debian/hurd_test_skip_io_pipe - http://bugs.debian.org/650096 Disable failing GNU/Hurd tests dist/IO/t/io_pipe.t"
	,"DEBPKG:fixes/manpage_name_CPAN - http://bugs.debian.org/650448 [rt.cpan.org #73396] cpan/CPAN: add NAME headings in modules with POD"
	,"DEBPKG:fixes/manpage_name_CPANPLUS - http://bugs.debian.org/650450 [rt.cpan.org #73398] cpan/CPANPLUS: add NAME headings in modules with POD"
	,"DEBPKG:fixes/manpage_name_Test-Harness - http://bugs.debian.org/650451 [rt.cpan.org #73399] cpan/Test-Harness: add NAME headings in modules with POD"
	,"DEBPKG:fixes/manpage_name_Term-UI - http://bugs.debian.org/650452 [rt.cpan.org #73400] cpan/Term-UI: add NAME headings in modules with POD"
	,"DEBPKG:fixes/podlators_ae_ligature_fallback - http://bugs.debian.org/652851 Fix the ASCII fallback string for AE"
	,"DEBPKG:fixes/fsf_postal_address - [de89470] Update references to the FSF's postal address"
	,"DEBPKG:fixes/cpan_module_pod_fixes - [perl #106870] [rt.cpan.org #73447] [rt.cpan.org #73446] Fix POD formatting in Term-Cap and Pod-Parser"
	,"DEBPKG:fixes/cgi_no_shellwords_pl - Use Text::ParseWords instead of shellwords.pl"
	,"DEBPKG:fixes/path_max_fallback - [perl #109262] http://bugs.debian.org/656869 Don't use _POSIX_PATH_MAX as a fallback PATH_MAX"
	,"DEBPKG:debian/makemaker-pasthru - http://bugs.debian.org/660195 [rt.cpan.org #28632] Make EU::MM pass LD through to recursive Makefile.PL invocations"
	,"DEBPKG:fixes/propagate_tainted_errors.patch - http://bugs.debian.org/cgi-bin/bugreport.cgi?bug=663158 [perl #111654] properly propagate tainted errors"
	,"DEBPKG:debian/perl5db-x-terminal-emulator.patch - http://bugs.debian.org/668490 Invoke x-terminal-emulator rather than xterm in perl5db.pl"
	,"DEBPKG:fixes/socket_cache_propagate - http://bugs.debian.org/cgi-bin/bugreport.cgi?bug=659075 [rt.cpan.org #61577] [perl #112736] sockdomain and socktype undef on newly accepted sockets"
	,"DEBPKG:fixes/ipc_open3 - [perl #114454] http://bugs.debian.org/683894 IPC::Open3::open3(..., '-') broken"
	,"DEBPKG:fixes/string_repeat_overrun - http://bugs.debian.org/689314 [b675304] avoid calling memset with a negative count"
	,"DEBPKG:debian/cpan-missing-site-dirs - http://bugs.debian.org/688842 Fix CPAN::FirstTime defaults with nonexisting site dirs if a parent is writable"
	,"DEBPKG:fixes/kfreebsd-overrides - http://bugs.debian.org/689713 [perl #115324] [7dc6565] Remove unnecessary overrides in gnukfreebsd and gnuknetbsd hints."
	,"DEBPKG:fixes/tainted-smartmatch - [be88a5c] http://bugs.debian.org/690571 [perl #93590] $tainted ~~ [...] failing"
	,"DEBPKG:fixes/regexp-matching-starter - [6e634c5] http://bugs.debian.org/690975 [perl #101710] Regression with /i, latin1 chars."
	,"DEBPKG:fixes/regexp-matching-fold - [399fb9c] http://bugs.debian.org/690976 regexec.c: Fix \"\\x{FB01}\\x{FB00}\" =~ /ff/i"
	,"DEBPKG:fixes/regexp-matching-opposite-case - [dc91d5a] http://bugs.debian.org/690979 [perl #101970] /[[:lower:]]/i matches upper case"
	,"DEBPKG:fixes/reading-glob-copy-handle - [fd1564b] http://bugs.debian.org/629363 [perl #92258] <$fh> hangs on a glob copy"
	,"DEBPKG:fixes/smartmatch-rhs-precedence - http://bugs.debian.org/691102 [011be0b] Enforce Any ~~ Object smartmatch precedence"
	,"DEBPKG:fixes/perlcheat-update - http://bugs.debian.org/691112 [ab0ae0a] Update PerlCheat to 5.14"
	,"DEBPKG:fixes/cgi-cr-escaping - http://bugs.debian.org/693420 CR escaping for P3P and Set-Cookie headers"
	,"DEBPKG:fixes/maketext-code-execution - [1735f6f] http://bugs.debian.org/695224 Fix misparsing of maketext strings."
	,"DEBPKG:fixes/storable-security-warning - [664f237] http://bugs.debian.org/695223 add a note about security concerns in Storable"
	,"DEBPKG:fixes/digest-sha-doublefree - [rt.cpan.org #82655] http://bugs.debian.org/698172 [a8c6ff7] Fix a double-free bug in Digest::SHA"
	,"DEBPKG:fixes/64bitint-signedness-wraparound - http://bugs.debian.org/698320 [94e529c] Avoid wraparound when casting unsigned size_t to signed ssize_t."
	,"DEBPKG:fixes/stdin-sigchld - http://bugs.debian.org/700171 [perl #116621] [be48bbe] add a couple missing LEAVEs in perlio_async_run()"
	,"DEBPKG:fixes/hsplit-rehash - [d59e31f] http://bugs.debian.org/702296 Prevent premature hsplit() calls, and only trigger REHASH after hsplit()"
	,"DEBPKG:fixes/encode-memleak - http://bugs.debian.org/702416 [5814803] Encode: Fixed a memory leak that occurred in the UTF-8 encoding."
	,"DEBPKG:fixes/threads_shared_elements_crash - [perl #119089] http://bugs.debian.org/718438 threads::shared should not crash if shared elements outlive their aggregate."
	,"DEBPKG:fixes/perlbug-patchlist - [3541c11] http://bugs.debian.org/710842 [perl #118433] Make perlbug look up the list of local patches at run time"
	,"DEBPKG:fixes/digest_sha_double_free - [ee8c6f4] [rt.cpan.org #86295] http://bugs.debian.org/711206 maint-5.18: Digest-SHA crash fix in 5.85"
	,"DEBPKG:fixes/pl_eval_start_use_after_free - [eae139f] [perl #115992] PL_eval_start use-after-free"
	,"DEBPKG:fixes/regcomp_fix_segv - [ebb390a] [perl #115994] fix segv in regcomp.c:S_join_exact()"
	,"DEBPKG:fixes/list_util_off_by_two - [623a911] fix off-by-two error in List::Util"
	,"DEBPKG:fixes/sdbm_off_by_one - [7f5f08b] [perl #111586] sdbm.c: fix off-by-one access to global \".dir\""
	,"DEBPKG:fixes/socket_unpack_sockaddr_un_heap_buffer_overflow - [e508642] [perl #111594] Socket::unpack_sockaddr_un heap-buffer-overflow"
	,"DEBPKG:fixes/data_dump_infinite_recurse - [19be3be] don't recurse infinitely in Data::Dumper"
	,"DEBPKG:debian/kfreebsd-softupdates - https://bugs.debian.org/796798 =?UTF-8?q?kFreeBSD=2010=20(possibly=20only=20with=20softupdates?= =?UTF-8?q?=20enabled)=20may=20defer=0Acalculating=20the=20mtime=20for=20m?="
	,"DEBPKG:fixes/CVE-2016-2381_duplicate_env - remove duplicate environment variables from environ"
