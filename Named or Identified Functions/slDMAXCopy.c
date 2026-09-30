
undefined4 _slDMAXCopy(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int unaff_gbr;
  
  uVar1 = 0xffffffff;
  if (param_4 < 0x16) {
    Onchip_TCR0 = param_3;
    if (6 < (int)param_4) {
      uVar1 = 0xfffffffe;
      Onchip_TCR0 = param_3 >> 1;
      if (0xd < (int)param_4) {
        Onchip_TCR0 = param_3 >> 2;
        uVar1 = 0xfffffffc;
      }
    }
    Onchip_SAR0 = param_1 & uVar1;
    do {
    } while ((Onchip_CHCR0 & 3) == 1);
    DAT_fffffe71 = 0;
    Onchip_DAR0 = (undefined *)(param_2 & uVar1);
    Onchip_CHCR0 = (int)*(short *)(&DAT_0600e5d8 + param_4 * 2);
    *(undefined1 *)(unaff_gbr + 0xb9) = 0x10;
    Onchip_DMA0R = 9;
    if ((undefined *)(param_2 & uVar1) < PTR_DAT_0600e5d4) {
      Onchip_CCR = 0x11;
    }
    return 1;
  }
  return 0;
}

