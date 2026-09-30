
void _slMapNbg0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  int unaff_gbr;
  
  *(uint *)(unaff_gbr + 0x1fc) = param_1;
  uVar5 = 0xb;
  bVar1 = (DAT_0600bcac & *(ushort *)(unaff_gbr + 0xf0)) == 0;
  if (bVar1) {
    uVar5 = 0xc;
  }
  if ((*(ushort *)(unaff_gbr + 0xe8) & 1) == 0) {
    uVar5 = uVar5 + 2;
  }
  uVar2 = uVar5 + 6;
  uVar3 = param_1;
  if ((uVar2 & 0x10) != 0) {
    uVar3 = param_1 >> 0x10;
  }
  if ((uVar2 & 8) != 0) {
    uVar3 = uVar3 >> 8;
  }
  if ((uVar2 & 4) != 0) {
    uVar3 = uVar3 >> 4;
  }
  if ((uVar2 & 2) != 0) {
    uVar3 = uVar3 >> 2;
  }
  bVar4 = (byte)uVar3;
  if (!bVar1) {
    bVar4 = (byte)(uVar3 >> 1);
  }
  *(byte *)(unaff_gbr + 0xfd) = *(byte *)(unaff_gbr + 0xfd) & 0xf0 | bVar4 & 7;
  if ((uVar5 & 0x10) != 0) {
    param_1 = param_1 >> 0x10;
    param_2 = param_2 >> 0x10;
    param_3 = param_3 >> 0x10;
    param_4 = param_4 >> 0x10;
  }
  if ((uVar5 & 8) != 0) {
    param_1 = param_1 >> 8;
    param_2 = param_2 >> 8;
    param_3 = param_3 >> 8;
    param_4 = param_4 >> 8;
  }
  if ((uVar5 & 4) != 0) {
    param_1 = param_1 >> 4;
    param_2 = param_2 >> 4;
    param_3 = param_3 >> 4;
    param_4 = param_4 >> 4;
  }
  if ((uVar5 & 2) != 0) {
    param_1 = param_1 >> 2;
    param_2 = param_2 >> 2;
    param_3 = param_3 >> 2;
    param_4 = param_4 >> 2;
  }
  uVar7 = (ushort)param_3;
  uVar6 = (ushort)param_1;
  if (!bVar1) {
    uVar6 = (ushort)(param_1 >> 1);
    param_2 = param_2 >> 1;
    uVar7 = (ushort)(param_3 >> 1);
    param_4 = param_4 >> 1;
  }
  *(ushort *)(unaff_gbr + 0x100) = uVar6 & 0x3f | (ushort)((param_2 & 0x3f) << 8);
  *(ushort *)(unaff_gbr + 0x102) = uVar7 & 0x3f | (ushort)((param_4 & 0x3f) << 8);
  return;
}

