call mingw32-make clean
call mingw32-make PLATFORM=PLATFORM_ANDROID ANDROID_ARCH=arm
call mingw32-make clean
call mingw32-make PLATFORM=PLATFORM_ANDROID ANDROID_ARCH=arm64
call mingw32-make clean
call mingw32-make PLATFORM=PLATFORM_WEB
call mingw32-make clean