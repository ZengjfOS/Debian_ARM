TARGETS = mountkernfs.sh hostname.sh udev mountdevsubfs.sh urandom mountall.sh mountall-bootclean.sh hwclock.sh networking checkroot.sh mountnfs.sh mountnfs-bootclean.sh bootmisc.sh kmod checkfs.sh mtab.sh checkroot-bootclean.sh procps udev-mtab
INTERACTIVE = udev checkroot.sh checkfs.sh
udev: mountkernfs.sh
mountdevsubfs.sh: mountkernfs.sh udev
urandom: mountall.sh mountall-bootclean.sh hwclock.sh
mountall.sh: checkfs.sh checkroot-bootclean.sh
mountall-bootclean.sh: mountall.sh
hwclock.sh: mountdevsubfs.sh
networking: mountkernfs.sh mountall.sh mountall-bootclean.sh urandom
checkroot.sh: hwclock.sh mountdevsubfs.sh hostname.sh
mountnfs.sh: mountall.sh mountall-bootclean.sh networking
mountnfs-bootclean.sh: mountall.sh mountall-bootclean.sh mountnfs.sh
bootmisc.sh: mountall.sh mountall-bootclean.sh mountnfs.sh mountnfs-bootclean.sh udev checkroot-bootclean.sh
kmod: checkroot.sh
checkfs.sh: checkroot.sh mtab.sh
mtab.sh: checkroot.sh
checkroot-bootclean.sh: checkroot.sh
procps: mountkernfs.sh mountall.sh mountall-bootclean.sh udev
udev-mtab: udev mountall.sh mountall-bootclean.sh
