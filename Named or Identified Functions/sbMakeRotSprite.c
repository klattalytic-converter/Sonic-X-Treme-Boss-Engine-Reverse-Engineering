
uint _sbMakeRotSprite(ushort *param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  uint in_r0;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int unaff_gbr;
  
  if ((in_r0 & 0xffff) <= (uint)(int)*(short *)(unaff_gbr + 0xa0)) {
    puVar3 = *(undefined2 **)(unaff_gbr + 0x34);
    bVar2 = *(byte *)(unaff_gbr + 0xa9);
    *puVar3 = (short)(in_r0 >> 0x10);
    bVar7 = 0x20;
    if ((bVar2 & 1) == 0) {
      bVar7 = 0x10;
    }
    *(byte *)(unaff_gbr + 0xa9) = bVar2 | bVar7;
    puVar3[0xf] = (short)in_r0;
    iVar5 = ((in_r0 & 0xffff) >> 8) * 4;
    uVar6 = *(undefined4 *)(iVar5 + *(int *)(unaff_gbr + 0x38));
    *(undefined2 **)(iVar5 + *(int *)(unaff_gbr + 0x38)) = puVar3;
    *(undefined4 *)(puVar3 + 0x10) = uVar6;
    puVar3[0xe] = param_1[1];
    uVar1 = *param_1;
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_1 + 2);
    uVar4 = *(uint *)(param_1 + 8);
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((uint)uVar1 * 8 + *(int *)(unaff_gbr + 0x3c) + 4);
    return uVar4;
  }
  return (int)*(short *)(unaff_gbr + 0xa0);
}

