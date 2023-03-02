# reference from mt7986.mk

KERNEL_LOADADDR := 0x48080000

define Device/wx5512-t0
  DEVICE_VENDOR := ZYXEL
  DEVICE_MODEL := wx5512-t0 (SPI-NAND,UBI)
  DEVICE_DTS := wx5512-t0
  DEVICE_DTS_DIR := $(DTS_DIR)/mediatek
  SUPPORTED_DEVICES := mediatek,mt7986b-spim-snand-wx5512-t0
  UBINIZE_OPTS := -E 5
  BLOCKSIZE := 256k
  PAGESIZE := 4096
  IMAGE_SIZE := 65536k
  KERNEL_IN_UBI := 1
  IMAGES := zyfwinfo.bin zydefault.bin sysupgrade.bin factory.bin factory_TE.bin
  IMAGE/zyfwinfo.bin := gen-zyfwinfo
  IMAGE/zydefault.bin := gen-zydefault
  IMAGE/factory.bin := append-zyubi | check-size $$$$(IMAGE_SIZE)
  IMAGE/factory_TE.bin := append-zyubi-te | check-size $$$$(IMAGE_SIZE)
  IMAGE/sysupgrade.bin := sysupgrade-zytar | append-zymetadata
endef
TARGET_DEVICES += wx5512-t0

