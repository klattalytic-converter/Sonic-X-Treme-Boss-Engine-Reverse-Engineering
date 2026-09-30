
void _SGL_ASCII_CG(uint param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int unaff_gbr;
  
  uVar1 = param_1 & 0x1f;
  *(byte *)(unaff_gbr + 0xb0) = *(byte *)(unaff_gbr + 0xb0) & 0x80 | (byte)uVar1;
  *(undefined **)(unaff_gbr + 0x80) = (&PTR_DAT_0600e944)[uVar1];
  FUN_0600e8c8(&PTR_DAT_0600ea44,PTR_DAT_0600e8f4,(int)DAT_0600e802);
  uVar4 = 0x30;
  puVar2 = &DAT_0600e9e4;
  puVar3 = PTR_DAT_0600e900;
  FUN_0600e864(&DAT_0600e9e4,(int *)PTR_DAT_0600e900,0x30);
  FUN_0600e864(puVar2,(int *)(puVar3 + 0x68),uVar4);
  *(undefined **)(unaff_gbr + 0x214) = PTR_DAT_0600e8f8;
  *(undefined **)(unaff_gbr + 0x1e0) = PTR_DAT_0600e900;
  *(undefined1 *)(unaff_gbr + 0xc1) = *(undefined1 *)((int)&PTR_DAT_0600e9c4 + uVar1);
  if ((param_1 & 8) != 0) {
    *(undefined2 *)(unaff_gbr + 0x1a0) = 0xc;
  }
  FUN_0600e8c8(PTR_DAT_0600e8f4,PTR_VDP2_TVMD_0600e8fc,(int)DAT_0600e802);
  puVar5 = (undefined2 *)PTR_DAT_0600e910;
  puVar3 = PTR_DAT_0600e90c;
  do {
  } while ((Onchip_CHCR0 & 3) == 1);
  do {
  } while ((Onchip_CHCR0 & 3) == 1);
  DAT_fffffe71 = 0;
  Onchip_SAR0 = &DAT_0600e938;
  Onchip_DAR0 = PTR_DAT_0600e904;
  Onchip_TCR0 = PTR_DAT_0600e908;
  Onchip_CHCR0 = (uint)DAT_0600e93e;
  Onchip_DMA0R = 9;
  do {
  } while ((Onchip_CHCR0 & 3) == 1);
  *(undefined **)(unaff_gbr + 0x1e4) = PTR_DAT_0600e910;
  *(undefined2 **)(unaff_gbr + 0x1e8) = puVar5;
  FUN_0600e804(puVar3,0x80,puVar5,0);
  FUN_0600e834(PTR_DAT_0600e914,0x18,puVar5,0);
  FUN_0600e804(PTR_PTR_0600e918,3,(short *)PTR_DAT_0600e91c,0);
  Onchip_DAR0 = PTR_DAT_0600e920;
  Onchip_SAR0 = PTR_DAT_0600e910;
  Onchip_TCR0 = (undefined *)(int)DAT_0600e93a;
  *(undefined **)(unaff_gbr + 500) = PTR_DAT_0600e920;
  *(undefined **)(unaff_gbr + 0x1f8) = Onchip_DAR0;
  do {
  } while ((Onchip_CHCR0 & 3) == 1);
  DAT_fffffe71 = 0;
  Onchip_CHCR0 = (uint)DAT_0600e940;
  Onchip_DMA0R = 9;
  *(undefined **)(unaff_gbr + 0x1fc) = PTR_DAT_0600e924;
  *(undefined **)(unaff_gbr + 0x200) = PTR_DAT_0600e928;
  *(undefined **)(unaff_gbr + 0x20c) = PTR_DAT_0600e92c;
  *(undefined **)(unaff_gbr + 0x210) = PTR_DAT_0600e930;
  *(undefined4 *)(unaff_gbr + 0x2ec) = 0;
  *(undefined4 *)(unaff_gbr + 0x2f0) = 0;
  *(undefined4 *)(unaff_gbr + 0x2f4) = 0;
  *(undefined4 *)(unaff_gbr + 0x2f8) = 0;
  puVar3 = PTR_DAT_0600e934;
  *(undefined1 *)(unaff_gbr + 0x21) = 0;
  *(undefined2 *)puVar3 = 0;
  FUN_0600eb64();
  *(ushort *)(unaff_gbr + 0xc0) = *(ushort *)(unaff_gbr + 0xc0) | DAT_0600e800;
  return;
}

