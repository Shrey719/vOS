[BITS 16]
[ORG 0x7C00]
times 510 - ($-$$) db 0  ;; oh yeah we only get 512 bytes... well actualy 510
dw 0xAA55 ; Mark as bootable 
