export PATH=$PATH:/usr/local/i386elfgcc/bin

nasm "src/boot.asm" -f bin -o "Binaries/boot.bin"
nasm "src/kernel_entry.asm" -f elf -o "Binaries/kernel_entry.o"
i386-elf-gcc -ffreestanding -m32 -g -c "src/kernel.c" -o "Binaries/kernel.o"
nasm "src/zeroes.asm" -f bin -o "Binaries/zeroes.bin"
i386-elf-ld -o "Binaries/full_kernel.bin" -Ttext 0x1000 "Binaries/kernel_entry.o" "Binaries/kernel.o"  --oformat binary

cat "Binaries/boot.bin" "Binaries/full_kernel.bin" "Binaries/zeroes.bin"  > "Binaries/vOS.bin"

qemu-system-x86_64 -drive format=raw,file="Binaries/vOS.bin",index=0,if=floppy,  -m 128M