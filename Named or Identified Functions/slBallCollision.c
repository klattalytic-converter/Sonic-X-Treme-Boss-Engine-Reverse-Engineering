
/* WARNING: Removing unreachable block (ram,0x0600e1e0) */
/* WARNING: Removing unreachable block (ram,0x0600e1e6) */

undefined4 _slBallCollision(int *param_1,int param_2,int *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_sr;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar3;
  
  lVar1 = (longlong)(param_4 + param_2) * (longlong)(param_4 + param_2);
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar9 = (uint)lVar1;
  uVar7 = *param_3 - *param_1;
  lVar1 = (longlong)(param_3[2] - param_1[2]) * (longlong)(param_3[2] - param_1[2]);
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar3 = (uint)lVar1;
  uVar8 = param_3[1] - param_1[1];
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
  }
  uVar4 = (uVar7 & 0xffff) * (uVar7 & 0xffff);
  iVar5 = (uVar7 >> 0x10) * (uVar7 & 0xffff);
  iVar2 = 0;
  uVar13 = iVar5 + (uVar7 & 0xffff) * (uVar7 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar12 = uVar4 + uVar13 * 0x10000;
  iVar2 = iVar2 + (uint)(uVar12 < uVar4) + (uVar13 >> 0x10) + (uVar7 >> 0x10) * (uVar7 >> 0x10);
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar12 = uVar3 + uVar12;
    uVar3 = iVar2 + (uint)(uVar12 < uVar3) + (uVar11 & 0xffff);
    if ((int)uVar3 < -0x8000) {
      uVar3 = 0xffff8000;
      uVar12 = 0;
    }
    if (0x7fff < (int)uVar3) {
      uVar3 = 0x7fff;
      uVar12 = 0xffffffff;
    }
    uVar11 = uVar3 & 0xffff | uVar11 & 0xffff0000;
  }
  else {
    uVar12 = uVar3 + uVar12;
    uVar11 = iVar2 + (uint)(uVar12 < uVar3) + uVar11;
  }
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
  }
  uVar7 = (uVar8 & 0xffff) * (uVar8 & 0xffff);
  iVar5 = (uVar8 >> 0x10) * (uVar8 & 0xffff);
  iVar2 = 0;
  uVar3 = iVar5 + (uVar8 & 0xffff) * (uVar8 >> 0x10);
  if (iVar5 != 0) {
    iVar2 = 0x10000;
  }
  uVar13 = uVar7 + uVar3 * 0x10000;
  iVar2 = iVar2 + (uint)(uVar13 < uVar7) + (uVar3 >> 0x10) + (uVar8 >> 0x10) * (uVar8 >> 0x10);
  if (((byte)(in_sr >> 1) & 1) == 1) {
    uVar13 = uVar12 + uVar13;
    uVar3 = iVar2 + (uint)(uVar13 < uVar12) + (uVar11 & 0xffff);
    if ((int)uVar3 < -0x8000) {
      uVar3 = 0xffff8000;
      uVar13 = 0;
    }
    if (0x7fff < (int)uVar3) {
      uVar3 = 0x7fff;
      uVar13 = 0xffffffff;
    }
    uVar11 = uVar3 & 0xffff | uVar11 & 0xffff0000;
  }
  else {
    uVar13 = uVar12 + uVar13;
    uVar11 = iVar2 + (uint)(uVar13 < uVar12) + uVar11;
  }
  uVar13 = uVar9 - uVar13;
  uVar11 = uVar10 - uVar11;
  uVar9 = uVar11 - (uVar9 < uVar13);
  if (uVar11 <= uVar10 && uVar9 <= uVar11) {
    uVar6 = (*(code *)PTR_slSquartDbl_0600e200)(uVar9,uVar13,param_3 + 3);
    return uVar6;
  }
  return 0xffffffff;
}

