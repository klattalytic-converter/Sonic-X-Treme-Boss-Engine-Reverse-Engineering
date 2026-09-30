
undefined4 _slPutPolygonS(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  int unaff_gbr;
  
  *(undefined1 *)(unaff_gbr + 0x73) = 1;
  *(short *)(unaff_gbr + 0xaa) = *(short *)(unaff_gbr + 0xaa) + 1;
  iVar5 = *(int *)(param_1 + 4);
  uVar13 = (*(uint *)(unaff_gbr + 0x74) & 0xffff) + iVar5;
  if (uVar13 <= (*(uint *)(unaff_gbr + 0x88) & 0xffff)) {
    iVar7 = *(int *)(param_1 + 0xc);
    uVar2 = (*(uint *)(unaff_gbr + 0x74) >> 0x10) + iVar7;
    if (uVar2 <= *(uint *)(unaff_gbr + 0x88) >> 0x10) {
      puVar3 = *(undefined4 **)(unaff_gbr + 0x48);
      puVar4 = *(undefined4 **)(unaff_gbr + 0x1c);
      puVar3[1] = iVar5;
      puVar3[3] = iVar7;
      *(int *)(unaff_gbr + 0x24) = *(int *)(unaff_gbr + 0x24) + iVar5 * 0x10;
      puVar12 = (uint *)(param_1 & 0xfffffffc);
      uVar8 = puVar12[2];
      uVar10 = puVar12[4];
      puVar3[2] = *puVar12 & 0xfffffffc;
      puVar3[4] = uVar8 & 0xfffffffc;
      puVar3[5] = uVar10 & 0xfffffffe;
      *puVar3 = 0x14;
      *(uint *)(unaff_gbr + 0x74) = uVar2 * 0x10000 | uVar13 & 0xffff;
      uVar6 = puVar4[1];
      uVar9 = puVar4[2];
      uVar11 = puVar4[3];
      puVar3[6] = *puVar4;
      puVar3[7] = uVar6;
      puVar3[8] = uVar9;
      puVar3[9] = uVar11;
      uVar6 = puVar4[5];
      uVar9 = puVar4[6];
      uVar11 = puVar4[7];
      puVar3[10] = puVar4[4];
      puVar3[0xb] = uVar6;
      puVar3[0xc] = uVar9;
      puVar3[0xd] = uVar11;
      uVar6 = puVar4[9];
      uVar9 = puVar4[10];
      uVar11 = puVar4[0xb];
      puVar3[0xe] = puVar4[8];
      puVar3[0xf] = uVar6;
      puVar3[0x10] = uVar9;
      puVar3[0x11] = uVar11;
      puVar3 = puVar3 + 0x12;
      *puVar3 = 0;
      puVar1 = PTR_DAT_06019fb8;
      *(undefined4 **)(unaff_gbr + 0x48) = puVar3;
      *(short *)puVar1 = (short)puVar3;
      return 1;
    }
  }
  return 0;
}

