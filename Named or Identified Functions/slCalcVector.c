
uint * _slCalcVector(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint in_sr;
  int unaff_gbr;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  puVar7 = *(uint **)(unaff_gbr + 0x1c);
  iVar8 = 3;
  do {
    uVar5 = *puVar7;
    uVar9 = *param_1;
    uVar6 = uVar5 ^ uVar9;
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
    }
    if ((int)uVar9 < 0) {
      uVar9 = -uVar9;
    }
    uVar3 = (uVar9 & 0xffff) * (uVar5 & 0xffff);
    iVar4 = (uVar9 >> 0x10) * (uVar5 & 0xffff);
    iVar2 = 0;
    uVar1 = iVar4 + (uVar9 & 0xffff) * (uVar5 >> 0x10);
    if (iVar4 != 0) {
      iVar2 = 0x10000;
    }
    uVar10 = uVar3 + uVar1 * 0x10000;
    uVar9 = iVar2 + (uint)(uVar10 < uVar3) + (uVar1 >> 0x10) + (uVar9 >> 0x10) * (uVar5 >> 0x10);
    if ((int)-(uint)((int)uVar6 < 0) < 0) {
      uVar9 = ~uVar9;
      if (uVar10 == 0) {
        uVar9 = uVar9 + 1;
      }
      else {
        uVar10 = ~uVar10 + 1;
      }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
      if ((int)uVar9 < -0x8000) {
        uVar9 = 0xffff8000;
        uVar10 = 0;
      }
      if (0x7fff < (int)uVar9) {
        uVar9 = 0x7fff;
        uVar10 = 0xffffffff;
      }
      uVar9 = uVar9 & 0xffff;
    }
    uVar6 = puVar7[1];
    uVar5 = param_1[1];
    uVar1 = uVar6 ^ uVar5;
    if ((int)uVar6 < 0) {
      uVar6 = -uVar6;
    }
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
    }
    uVar12 = (uVar5 & 0xffff) * (uVar6 & 0xffff);
    iVar4 = (uVar5 >> 0x10) * (uVar6 & 0xffff);
    iVar2 = 0;
    uVar3 = iVar4 + (uVar5 & 0xffff) * (uVar6 >> 0x10);
    if (iVar4 != 0) {
      iVar2 = 0x10000;
    }
    uVar11 = uVar12 + uVar3 * 0x10000;
    uVar5 = iVar2 + (uint)(uVar11 < uVar12) + (uVar3 >> 0x10) + (uVar5 >> 0x10) * (uVar6 >> 0x10);
    if ((int)-(uint)((int)uVar1 < 0) < 0) {
      uVar5 = ~uVar5;
      if (uVar11 == 0) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar11 = ~uVar11 + 1;
      }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
      uVar11 = uVar10 + uVar11;
      uVar9 = uVar5 + (uVar11 < uVar10) + (uVar9 & 0xffff);
      if ((int)uVar9 < -0x8000) {
        uVar9 = 0xffff8000;
        uVar11 = 0;
      }
      if (0x7fff < (int)uVar9) {
        uVar9 = 0x7fff;
        uVar11 = 0xffffffff;
      }
      uVar9 = uVar9 & 0xffff;
    }
    else {
      uVar11 = uVar10 + uVar11;
      uVar9 = uVar5 + (uVar11 < uVar10) + uVar9;
    }
    uVar6 = puVar7[2];
    uVar5 = param_1[2];
    uVar1 = uVar6 ^ uVar5;
    if ((int)uVar6 < 0) {
      uVar6 = -uVar6;
    }
    if ((int)uVar5 < 0) {
      uVar5 = -uVar5;
    }
    uVar10 = (uVar5 & 0xffff) * (uVar6 & 0xffff);
    iVar4 = (uVar5 >> 0x10) * (uVar6 & 0xffff);
    iVar2 = 0;
    uVar3 = iVar4 + (uVar5 & 0xffff) * (uVar6 >> 0x10);
    if (iVar4 != 0) {
      iVar2 = 0x10000;
    }
    uVar12 = uVar10 + uVar3 * 0x10000;
    uVar5 = iVar2 + (uint)(uVar12 < uVar10) + (uVar3 >> 0x10) + (uVar5 >> 0x10) * (uVar6 >> 0x10);
    if ((int)-(uint)((int)uVar1 < 0) < 0) {
      uVar5 = ~uVar5;
      if (uVar12 == 0) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar12 = ~uVar12 + 1;
      }
    }
    if (((byte)(in_sr >> 1) & 1) == 1) {
      uVar12 = uVar11 + uVar12;
      uVar9 = uVar5 + (uVar12 < uVar11) + (uVar9 & 0xffff);
      if ((int)uVar9 < -0x8000) {
        uVar9 = 0xffff8000;
        uVar12 = 0;
      }
      if (0x7fff < (int)uVar9) {
        uVar9 = 0x7fff;
        uVar12 = 0xffffffff;
      }
      uVar9 = uVar9 & 0xffff;
    }
    else {
      uVar12 = uVar11 + uVar12;
      uVar9 = uVar5 + (uVar12 < uVar11) + uVar9;
    }
    puVar7 = puVar7 + 4;
    *param_2 = uVar9 << 0x10 | uVar12 >> 0x10;
    param_2 = param_2 + 1;
    iVar8 = iVar8 + -1;
    in_sr = in_sr & 0xfffffffe;
  } while (iVar8 != 0);
  return puVar7;
}

