cmd_spl/fs/ext4/built-in.o :=  arm-linux-gnueabi-ld.bfd     -r -o spl/fs/ext4/built-in.o spl/fs/ext4/ext4fs.o spl/fs/ext4/ext4_common.o spl/fs/ext4/dev.o spl/fs/ext4/ext4_write.o spl/fs/ext4/ext4_journal.o spl/fs/ext4/crc16.o 