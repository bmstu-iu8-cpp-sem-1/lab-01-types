#!/usr/bin/env bash

DEBIAN_PACKAGES="build-essential cmake git libgtest-dev libgmock-dev gcovr meson"
# in fedora generic toolchain is installed using a package group
# the package group in question is "Development Tools"
# the reason behind not using it is because it's huge with a lot
# of unnecessary stuff like rpm building and signing
FEDORA_PACKAGES="cmake gcc gcc-c++ git gtest gmock gcovr meson"
ARCH_PACKAGES="base-devel clang cmake gtest git gcovr meson"
MACPORTS_PACKAGES="cmake gtest git gcovr meson"
BREW_PACKAGES="cmake googletest git gcovr meson"

. ./scripts/setup.sh
install_packages || die "Failed to install packages!"
