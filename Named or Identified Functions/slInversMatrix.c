
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _slInversMatrix(void)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int unaff_gbr;
  
  puVar2 = *(uint **)(unaff_gbr + 0x1c);
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar6 = uVar3;
  if ((int)uVar3 < 0) {
    uVar6 = -uVar3;
  }
  uVar5 = puVar2[8];
  uVar8 = uVar4;
  if ((int)uVar4 < 0) {
    uVar8 = -uVar4;
  }
  uVar7 = uVar6;
  if (uVar6 < uVar8) {
    uVar7 = uVar8;
  }
  uVar9 = uVar5;
  if ((int)uVar5 < 0) {
    uVar9 = -uVar5;
  }
  if (uVar7 < uVar9) {
    uVar6 = puVar2[0xb];
    uVar5 = puVar2[10];
    puVar2[0xb] = puVar2[3];
    puVar2[3] = uVar6;
    puVar2[10] = puVar2[2];
    puVar2[2] = uVar5;
    puVar2[9] = puVar2[1];
    cVar10 = '\x02';
    uVar5 = uVar3;
  }
  else {
    cVar10 = '\0';
    if (uVar6 < uVar8) {
      uVar4 = puVar2[7];
      uVar6 = puVar2[6];
      puVar2[7] = puVar2[3];
      puVar2[3] = uVar4;
      puVar2[6] = puVar2[2];
      puVar2[2] = uVar6;
      puVar2[5] = puVar2[1];
      cVar10 = '\x01';
      uVar4 = uVar3;
    }
  }
  puVar2[5] = puVar2[5] - Onchip_DVDNTUL;
  puVar2[9] = puVar2[9] - Onchip_DVDNTUL;
  puVar2[1] = -Onchip_DVDNTUL;
  puVar2[6] = puVar2[6] - Onchip_DVDNTUL;
  puVar2[10] = puVar2[10] - Onchip_DVDNTUL;
  puVar2[2] = -Onchip_DVDNTUL;
  uVar6 = Onchip_DVDNTUL;
  puVar2[7] = puVar2[7] -
              ((uint)((longlong)(int)Onchip_DVDNTUL * (longlong)(int)uVar4) >> 8 |
              (int)((ulonglong)((longlong)(int)Onchip_DVDNTUL * (longlong)(int)uVar4) >> 0x20) <<
              0x18);
  lVar1 = (longlong)(int)uVar6 * (longlong)(int)uVar5;
  puVar2[0xb] = puVar2[0xb] - ((uint)lVar1 >> 8 | (int)((ulonglong)lVar1 >> 0x20) << 0x18);
  puVar2[3] = uVar6 * -0x100;
  puVar2[4] = Onchip_DVDNTUL;
  puVar2[8] = Onchip_DVDNTUL;
  uVar3 = puVar2[5];
  uVar4 = puVar2[9];
  uVar6 = uVar3;
  if ((int)uVar3 < 0) {
    uVar6 = -uVar3;
  }
  uVar5 = uVar4;
  if ((int)uVar4 < 0) {
    uVar5 = -uVar4;
  }
  if (uVar6 < uVar5) {
    uVar8 = puVar2[0xb];
    uVar4 = puVar2[10];
    puVar2[0xb] = puVar2[7];
    puVar2[7] = uVar8;
    puVar2[10] = puVar2[6];
    puVar2[6] = uVar4;
    puVar2[8] = puVar2[4];
    uVar4 = uVar3;
  }
  uVar3 = Onchip_DVDNTUL;
  *puVar2 = Onchip_DVDNTUL;
  *puVar2 = uVar3 - Onchip_DVDNTUL;
  puVar2[8] = puVar2[8] - Onchip_DVDNTUL;
  puVar2[4] = -Onchip_DVDNTUL;
  puVar2[2] = puVar2[2] - Onchip_DVDNTUL;
  puVar2[10] = puVar2[10] - Onchip_DVDNTUL;
  puVar2[6] = -Onchip_DVDNTUL;
  uVar3 = Onchip_DVDNTUL;
  puVar2[3] = puVar2[3] -
              ((uint)((longlong)(int)Onchip_DVDNTUL * (longlong)(int)puVar2[1]) >> 8 |
              (int)((ulonglong)((longlong)(int)Onchip_DVDNTUL * (longlong)(int)puVar2[1]) >> 0x20)
              << 0x18);
  lVar1 = (longlong)(int)uVar3 * (longlong)(int)uVar4;
  puVar2[0xb] = puVar2[0xb] - ((uint)lVar1 >> 8 | (int)((ulonglong)lVar1 >> 0x20) << 0x18);
  puVar2[7] = uVar3 * -0x100;
  puVar2[1] = Onchip_DVDNTUL;
  puVar2[9] = Onchip_DVDNTUL;
  Onchip_DVSR = puVar2[10];
  puVar2[5] = Onchip_DVDNTUL;
  *puVar2 = *puVar2 - Onchip_DVDNTUL;
  puVar2[4] = puVar2[4] - Onchip_DVDNTUL;
  puVar2[8] = -Onchip_DVDNTUL;
  puVar2[1] = puVar2[1] - Onchip_DVDNTUL;
  puVar2[5] = puVar2[5] - Onchip_DVDNTUL;
  puVar2[9] = -Onchip_DVDNTUL;
  uVar4 = Onchip_DVDNTUL;
  lVar1 = (longlong)(int)Onchip_DVDNTUL;
  puVar2[3] = puVar2[3] -
              ((uint)((longlong)(int)Onchip_DVDNTUL * (longlong)(int)puVar2[2]) >> 8 |
              (int)((ulonglong)((longlong)(int)Onchip_DVDNTUL * (longlong)(int)puVar2[2]) >> 0x20)
              << 0x18);
  puVar2[7] = puVar2[7] -
              ((uint)(lVar1 * (int)puVar2[6]) >> 8 |
              (int)((ulonglong)(lVar1 * (int)puVar2[6]) >> 0x20) << 0x18);
  puVar2[0xb] = uVar4 * -0x100;
  puVar2[2] = Onchip_DVDNTUL;
  _Onchip_DVDNTH = 0x100000000;
  puVar2[6] = Onchip_DVDNTUL;
  uVar4 = Onchip_DVDNTUL;
  uVar3 = Onchip_DVDNTUL;
  if (uVar6 < uVar5) {
    uVar6 = puVar2[2];
    uVar5 = puVar2[6];
    uVar3 = puVar2[9];
    puVar2[2] = puVar2[1];
    puVar2[1] = uVar6;
    puVar2[6] = puVar2[5];
    puVar2[5] = uVar5;
    puVar2[9] = uVar4;
  }
  if (cVar10 != '\0') {
    if (cVar10 == '\x01') {
      uVar6 = puVar2[1];
      uVar5 = puVar2[5];
      uVar4 = puVar2[9];
      puVar2[1] = *puVar2;
      puVar2[5] = puVar2[4];
      puVar2[9] = puVar2[8];
    }
    else {
      uVar6 = puVar2[2];
      uVar5 = puVar2[6];
      puVar2[2] = *puVar2;
      puVar2[6] = puVar2[4];
      uVar4 = uVar3;
      uVar3 = puVar2[8];
    }
    *puVar2 = uVar6;
    puVar2[4] = uVar5;
    puVar2[8] = uVar4;
  }
  puVar2[10] = uVar3;
  return;
}

