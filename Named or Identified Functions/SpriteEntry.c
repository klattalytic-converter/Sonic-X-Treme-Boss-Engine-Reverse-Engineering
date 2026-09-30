
int SpriteEntry(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_r2;
  int iVar3;
  int unaff_gbr;
  
  *(undefined1 *)(unaff_gbr + 0x73) = 1;
  *(short *)(unaff_gbr + 0xaa) = *(short *)(unaff_gbr + 0xaa) + 1;
  if ((uint)*(ushort *)(unaff_gbr + 0x74) < (uint)*(ushort *)(unaff_gbr + 0x88)) {
    uVar1 = *(uint *)(unaff_gbr + 0x68);
    iVar3 = *(ushort *)(unaff_gbr + 0x74) + 1;
    iVar2 = (int)*(char *)(unaff_gbr + 0xac);
    do {
      iVar2 = iVar2 + -1;
      uVar1 = uVar1 >> 1;
    } while (iVar2 != 0);
    if (((int)uVar1 < in_r2) && ((int)(in_r2 - uVar1) <= (int)*(short *)(unaff_gbr + 0x70) << 0x10))
    {
      *(short *)(unaff_gbr + 0x74) = (short)iVar3;
      return iVar3;
    }
  }
  return 0;
}

