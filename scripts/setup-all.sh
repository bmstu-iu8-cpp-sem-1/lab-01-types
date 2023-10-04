#!/usr/bin/env bash

DEBIAN_PACKAGES="build-essential meson git libgtest-dev libgmock-dev gcovr python3 python3-pip"
# in fedora generic toolchain is installed using a package group
# the package group in question is "Development Tools"
# the reason behind not using it is because it's huge with a lot
# of unnecessary stuff like rpm building and signing
FEDORA_PACKAGES="meson gcc gcc-c++ git gtest gmock gcovr python3 python3-pip"
ARCH_PACKAGES="base-devel clang meson gtest git gcovr python3 python-pip"
MACPORTS_PACKAGES="meson gtest git gcovr"
BREW_PACKAGES="meson googletest git gcovr"

. ./scripts/setup.sh
install_packages || die "Failed to install packages!"

pip3 install cpplint
