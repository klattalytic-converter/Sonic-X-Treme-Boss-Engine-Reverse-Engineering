
uint _slCheckOnScreen(uint *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint in_sr;
  int unaff_gbr;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  puVar6 = *(uint **)(unaff_gbr + 0x1c);
  uVar11 = puVar6[8];
  uVar9 = *param_1;
  uVar12 = uVar11 ^ uVar9;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
  }
  uVar7 = (uVar9 & 0xffff) * (uVar11 & 0xffff);
  iVar10 = (uVar9 >> 0x10) * (uVar11 & 0xffff);
  iVar8 = 0;
  uVar13 = iVar10 + (uVar9 & 0xffff) * (uVar11 >> 0x10);
  if (iVar10 != 0) {
    iVar8 = 0x10000;
  }
  uVar14 = uVar7 + uVar13 * 0x10000;
  uVar9 = iVar8 + (uint)(uVar14 < uVar7) + (uVar13 >> 0x10) + (uVar9 >> 0x10) * (uVar11 >> 0x10);
  if ((int)-(uint)((int)uVar12 < 0) < 0) {
    uVar9 = ~uVar9;
    if (uVar14 == 0) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar14 = ~uVar14 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar14 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar14 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  uVar7 = *(uint *)(unaff_gbr + 0x68);
  uVar12 = puVar6[9];
  uVar11 = param_1[1];
  uVar13 = uVar12 ^ uVar11;
  if ((int)uVar12 < 0) {
    uVar12 = -uVar12;
  }
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  uVar15 = (uVar11 & 0xffff) * (uVar12 & 0xffff);
  iVar10 = (uVar11 >> 0x10) * (uVar12 & 0xffff);
  iVar8 = 0;
  uVar4 = iVar10 + (uVar11 & 0xffff) * (uVar12 >> 0x10);
  if (iVar10 != 0) {
    iVar8 = 0x10000;
  }
  uVar16 = uVar15 + uVar4 * 0x10000;
  uVar11 = iVar8 + (uint)(uVar16 < uVar15) + (uVar4 >> 0x10) + (uVar11 >> 0x10) * (uVar12 >> 0x10);
  if ((int)-(uint)((int)uVar13 < 0) < 0) {
    uVar11 = ~uVar11;
    if (uVar16 == 0) {
      uVar11 = uVar11 + 1;
    }
    else {
      uVar16 = ~uVar16 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar16 = uVar14 + uVar16;
    uVar9 = uVar11 + (uVar16 < uVar14) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar16 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar16 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar16 = uVar14 + uVar16;
    uVar9 = uVar11 + (uVar16 < uVar14) + uVar9;
  }
  uVar12 = puVar6[10];
  uVar11 = param_1[2];
  uVar13 = uVar12 ^ uVar11;
  if ((int)uVar12 < 0) {
    uVar12 = -uVar12;
  }
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
  }
  uVar4 = (uVar11 & 0xffff) * (uVar12 & 0xffff);
  iVar10 = (uVar11 >> 0x10) * (uVar12 & 0xffff);
  iVar8 = 0;
  uVar14 = iVar10 + (uVar11 & 0xffff) * (uVar12 >> 0x10);
  if (iVar10 != 0) {
    iVar8 = 0x10000;
  }
  uVar15 = uVar4 + uVar14 * 0x10000;
  uVar11 = iVar8 + (uint)(uVar15 < uVar4) + (uVar14 >> 0x10) + (uVar11 >> 0x10) * (uVar12 >> 0x10);
  if ((int)-(uint)((int)uVar13 < 0) < 0) {
    uVar11 = ~uVar11;
    if (uVar15 == 0) {
      uVar11 = uVar11 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar15 = uVar16 + uVar15;
    uVar9 = uVar11 + (uVar15 < uVar16) + (uVar9 & 0xffff);
    if ((int)uVar9 < -0x8000) {
      uVar9 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar9) {
      uVar9 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar9 = uVar9 & 0xffff;
  }
  else {
    uVar15 = uVar16 + uVar15;
    uVar9 = uVar11 + (uVar15 < uVar16) + uVar9;
  }
  Onchip_DVDNTH = (int)(short)(uVar7 >> 0x10);
  iVar8 = (int)*(char *)(unaff_gbr + 0xac);
  iVar10 = (uVar9 << 0x10 | uVar15 >> 0x10) + puVar6[0xb];
  uVar9 = uVar7;
  do {
    uVar11 = in_sr;
    iVar8 = iVar8 + -1;
    uVar9 = uVar9 >> 1;
    in_sr = uVar11 & 0xfffffffe;
  } while (iVar8 != 0);
  if (iVar10 < (int)uVar9) {
    return 0xffffffff;
  }
  Onchip_DVSR = iVar10;
  Onchip_DVDNTL = uVar7 << 0x10;
  uVar13 = *puVar6;
  uVar12 = *param_1;
  uVar7 = uVar13 ^ uVar12;
  if ((int)uVar13 < 0) {
    uVar13 = -uVar13;
  }
  if ((int)uVar12 < 0) {
    uVar12 = -uVar12;
  }
  uVar4 = (uVar12 & 0xffff) * (uVar13 & 0xffff);
  iVar5 = (uVar12 >> 0x10) * (uVar13 & 0xffff);
  iVar8 = 0;
  uVar14 = iVar5 + (uVar12 & 0xffff) * (uVar13 >> 0x10);
  if (iVar5 != 0) {
    iVar8 = 0x10000;
  }
  uVar15 = uVar4 + uVar14 * 0x10000;
  uVar12 = iVar8 + (uint)(uVar15 < uVar4) + (uVar14 >> 0x10) + (uVar12 >> 0x10) * (uVar13 >> 0x10);
  if ((int)-(uint)((int)uVar7 < 0) < 0) {
    uVar12 = ~uVar12;
    if (uVar15 == 0) {
      uVar12 = uVar12 + 1;
    }
    else {
      uVar15 = ~uVar15 + 1;
    }
  }
  if (((byte)(uVar11 >> 1) & 1) == 1) {
    if ((int)uVar12 < -0x8000) {
      uVar12 = 0xffff8000;
      uVar15 = 0;
    }
    if (0x7fff < (int)uVar12) {
      uVar12 = 0x7fff;
      uVar15 = 0xffffffff;
    }
    uVar12 = uVar12 & 0xffff;
  }
  uVar7 = puVar6[1];
  uVar13 = param_1[1];
  uVar14 = uVar7 ^ uVar13;
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
  }
  if ((int)uVar13 < 0) {
    uVar13 = -uVar13;
  }
  uVar16 = (uVar13 & 0xffff) * (uVar7 & 0xffff);
  iVar5 = (uVar13 >> 0x10) * (uVar7 & 0xffff);
  iVar8 = 0;
  uVar4 = iVar5 + (uVar13 & 0xffff) * (uVar7 >> 0x10);
  if (iVar5 != 0) {
    iVar8 = 0x10000;
  }
  uVar17 = uVar16 + uVar4 * 0x10000;
  uVar13 = iVar8 + (uint)(uVar17 < uVar16) + (uVar4 >> 0x10) + (uVar13 >> 0x10) * (uVar7 >> 0x10);
  if ((int)-(uint)((int)uVar14 < 0) < 0) {
    uVar13 = ~uVar13;
    if (uVar17 == 0) {
      uVar13 = uVar13 + 1;
    }
    else {
      uVar17 = ~uVar17 + 1;
    }
  }
  if (((byte)(uVar11 >> 1) & 1) == 1) {
    uVar17 = uVar15 + uVar17;
    uVar12 = uVar13 + (uVar17 < uVar15) + (uVar12 & 0xffff);
    if ((int)uVar12 < -0x8000) {
      uVar12 = 0xffff8000;
      uVar17 = 0;
    }
    if (0x7fff < (int)uVar12) {
      uVar12 = 0x7fff;
      uVar17 = 0xffffffff;
    }
    uVar12 = uVar12 & 0xffff;
  }
  else {
    uVar17 = uVar15 + uVar17;
    uVar12 = uVar13 + (uVar17 < uVar15) + uVar12;
  }
  uVar7 = puVar6[2];
  uVar13 = param_1[2];
  uVar14 = uVar7 ^ uVar13;
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
  }
  if ((int)uVar13 < 0) {
    uVar13 = -uVar13;
  }
  uVar15 = (uVar13 & 0xffff) * (uVar7 & 0xffff);
  iVar5 = (uVar13 >> 0x10) * (uVar7 & 0xffff);
  iVar8 = 0;
  uVar4 = iVar5 + (uVar13 & 0xffff) * (uVar7 >> 0x10);
  if (iVar5 != 0) {
    iVar8 = 0x10000;
  }
  uVar16 = uVar15 + uVar4 * 0x10000;
  uVar13 = iVar8 + (uint)(uVar16 < uVar15) + (uVar4 >> 0x10) + (uVar13 >> 0x10) * (uVar7 >> 0x10);
  if ((int)-(uint)((int)uVar14 < 0) < 0) {
    uVar13 = ~uVar13;
    if (uVar16 == 0) {
      uVar13 = uVar13 + 1;
    }
    else {
      uVar16 = ~uVar16 + 1;
    }
  }
  if (((byte)(uVar11 >> 1) & 1) == 1) {
    uVar16 = uVar17 + uVar16;
    uVar12 = uVar13 + (uVar16 < uVar17) + (uVar12 & 0xffff);
    if ((int)uVar12 < -0x8000) {
      uVar12 = 0xffff8000;
      uVar16 = 0;
    }
    if (0x7fff < (int)uVar12) {
      uVar12 = 0x7fff;
      uVar16 = 0xffffffff;
    }
    uVar12 = uVar12 & 0xffff;
  }
  else {
    uVar16 = uVar17 + uVar16;
    uVar12 = uVar13 + (uVar16 < uVar17) + uVar12;
  }
  if (iVar10 - uVar9 <= (uint)((int)*(short *)(unaff_gbr + 0x70) << 0x10)) {
    uVar7 = puVar6[4];
    uVar13 = *param_1;
    uVar14 = uVar7 ^ uVar13;
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
    }
    if ((int)uVar13 < 0) {
      uVar13 = -uVar13;
    }
    uVar15 = (uVar13 & 0xffff) * (uVar7 & 0xffff);
    iVar5 = (uVar13 >> 0x10) * (uVar7 & 0xffff);
    iVar8 = 0;
    uVar4 = iVar5 + (uVar13 & 0xffff) * (uVar7 >> 0x10);
    if (iVar5 != 0) {
      iVar8 = 0x10000;
    }
    uVar17 = uVar15 + uVar4 * 0x10000;
    uVar13 = iVar8 + (uint)(uVar17 < uVar15) + (uVar4 >> 0x10) + (uVar13 >> 0x10) * (uVar7 >> 0x10);
    if ((int)-(uint)((int)uVar14 < 0) < 0) {
      uVar13 = ~uVar13;
      if (uVar17 == 0) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar17 = ~uVar17 + 1;
      }
    }
    if (((byte)(uVar11 >> 1) & 1) == 1) {
      if ((int)uVar13 < -0x8000) {
        uVar13 = 0xffff8000;
        uVar17 = 0;
      }
      if (0x7fff < (int)uVar13) {
        uVar13 = 0x7fff;
        uVar17 = 0xffffffff;
      }
      uVar13 = uVar13 & 0xffff;
    }
    uVar14 = puVar6[5];
    uVar7 = param_1[1];
    uVar4 = uVar14 ^ uVar7;
    if ((int)uVar14 < 0) {
      uVar14 = -uVar14;
    }
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
    }
    uVar19 = (uVar7 & 0xffff) * (uVar14 & 0xffff);
    iVar5 = (uVar7 >> 0x10) * (uVar14 & 0xffff);
    iVar8 = 0;
    uVar15 = iVar5 + (uVar7 & 0xffff) * (uVar14 >> 0x10);
    if (iVar5 != 0) {
      iVar8 = 0x10000;
    }
    uVar18 = uVar19 + uVar15 * 0x10000;
    uVar7 = iVar8 + (uint)(uVar18 < uVar19) + (uVar15 >> 0x10) + (uVar7 >> 0x10) * (uVar14 >> 0x10);
    if ((int)-(uint)((int)uVar4 < 0) < 0) {
      uVar7 = ~uVar7;
      if (uVar18 == 0) {
        uVar7 = uVar7 + 1;
      }
      else {
        uVar18 = ~uVar18 + 1;
      }
    }
    if (((byte)(uVar11 >> 1) & 1) == 1) {
      uVar18 = uVar17 + uVar18;
      uVar13 = uVar7 + (uVar18 < uVar17) + (uVar13 & 0xffff);
      if ((int)uVar13 < -0x8000) {
        uVar13 = 0xffff8000;
        uVar18 = 0;
      }
      if (0x7fff < (int)uVar13) {
        uVar13 = 0x7fff;
        uVar18 = 0xffffffff;
      }
      uVar13 = uVar13 & 0xffff;
    }
    else {
      uVar18 = uVar17 + uVar18;
      uVar13 = uVar7 + (uVar18 < uVar17) + uVar13;
    }
    uVar14 = puVar6[6];
    uVar7 = param_1[2];
    uVar4 = uVar14 ^ uVar7;
    if ((int)uVar14 < 0) {
      uVar14 = -uVar14;
    }
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
    }
    uVar17 = (uVar7 & 0xffff) * (uVar14 & 0xffff);
    iVar5 = (uVar7 >> 0x10) * (uVar14 & 0xffff);
    iVar8 = 0;
    uVar15 = iVar5 + (uVar7 & 0xffff) * (uVar14 >> 0x10);
    if (iVar5 != 0) {
      iVar8 = 0x10000;
    }
    uVar19 = uVar17 + uVar15 * 0x10000;
    uVar7 = iVar8 + (uint)(uVar19 < uVar17) + (uVar15 >> 0x10) + (uVar7 >> 0x10) * (uVar14 >> 0x10);
    if ((int)-(uint)((int)uVar4 < 0) < 0) {
      uVar7 = ~uVar7;
      if (uVar19 == 0) {
        uVar7 = uVar7 + 1;
      }
      else {
        uVar19 = ~uVar19 + 1;
      }
    }
    if (((byte)(uVar11 >> 1) & 1) == 1) {
      uVar19 = uVar18 + uVar19;
      uVar13 = uVar7 + (uVar19 < uVar18) + (uVar13 & 0xffff);
      if ((int)uVar13 < -0x8000) {
        uVar13 = 0xffff8000;
        uVar19 = 0;
      }
      if (0x7fff < (int)uVar13) {
        uVar13 = 0x7fff;
        uVar19 = 0xffffffff;
      }
      uVar13 = uVar13 & 0xffff;
    }
    else {
      uVar19 = uVar18 + uVar19;
      uVar13 = uVar7 + (uVar19 < uVar18) + uVar13;
    }
    lVar1 = (longlong)(int)Onchip_DVDNTUL *
            (longlong)(int)((uVar12 << 0x10 | uVar16 >> 0x10) + puVar6[3]);
    lVar3 = (ulonglong)Onchip_DVDNTUL * (ulonglong)(uint)(param_2 >> 1);
    lVar2 = (longlong)(int)Onchip_DVDNTUL *
            (longlong)(int)((uVar13 << 0x10 | uVar19 >> 0x10) + puVar6[7]);
    uVar11 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
    iVar8 = ((int)((ulonglong)lVar1 >> 0x20) << 0x10 | (uint)lVar1 >> 0x10) + uVar11;
    if (((((int)*(short *)(unaff_gbr + 0x78) << 0x10 <= iVar8) &&
         ((int)(iVar8 + uVar11 * -2) <= (int)*(short *)(unaff_gbr + 0x7c) << 0x10)) &&
        (iVar8 = ((int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10) + uVar11,
        (int)*(short *)(unaff_gbr + 0x7a) << 0x10 <= iVar8)) &&
       ((int)(iVar8 + uVar11 * -2) < (int)*(short *)(unaff_gbr + 0x7e) << 0x10)) {
      return iVar10 - uVar9;
    }
  }
  return 0xfffffffe;
}

