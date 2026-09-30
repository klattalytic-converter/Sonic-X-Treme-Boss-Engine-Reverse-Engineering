
void _slSndFlush(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  undefined2 *puVar3;
  char *pcVar4;
  char cVar5;
  undefined1 *extraout_r3;
  undefined *puVar6;
  int iVar7;
  int unaff_gbr;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = param_1;
  local_10 = param_4;
  local_c = param_3;
  FUN_0600e410(7);
  *(undefined2 *)PTR_DAT_0600e4b8 = 0x200;
  local_18 = 0;
  iVar7 = (int)PTR_DAT_0600e4bc - param_2;
  puVar6 = PTR_DAT_0600e4c0 + param_2;
  (*(code *)PTR__slDMAXCopy_0600e4c4)(&local_18,puVar6,iVar7,10);
  (*(code *)PTR__slDMAXCopy_0600e4c4)
            (&local_18,*(undefined4 *)PTR_PTR_0600e4cc,*(undefined4 *)PTR_PTR_0600e4d0,10,puVar6,
             iVar7);
  (*(code *)PTR_slCashPurge_0600e4c8)(local_14,(int)puVar6 - ((uint)puVar6 & 0xffff));
  puVar6 = PTR_DAT_0600e4d4;
  sVar1 = -1;
  cVar5 = -1;
  uVar2 = *(uint *)PTR_PTR_0600e4d0;
  while( true ) {
    cVar5 = cVar5 + '\x01';
    if (uVar2 < uVar2 - 0x2000) break;
    sVar1 = sVar1 * 2;
    uVar2 = uVar2 - 0x2000;
  }
  PTR_DAT_0600e4d4[1] = cVar5;
  *(short *)(puVar6 + 2) = sVar1;
  iVar7 = 8;
  puVar3 = (undefined2 *)PTR_DAT_0600e4d8;
  do {
    *puVar3 = 0;
    iVar7 = iVar7 + -1;
    puVar3 = puVar3 + 10;
  } while (iVar7 != 0);
  (*(code *)PTR_slCashPurge_0600e4c8)(local_c,PTR_DAT_0600e4dc,local_10);
  (*(code *)PTR_slDMAWait_0600e4e0)();
  pcVar4 = PTR_DAT_0600e4e8;
  *PTR_DAT_0600e4e8 = 0xd;
  PTR_DAT_0600e4ec[1] = 0;
  FUN_0600e410(6);
  FUN_0600e42c(pcVar4);
  extraout_r3[1] = 0x80;
  pcVar4[-0x40] = '\f';
  pcVar4[-0x2e] = '\0';
  pcVar4[-0x30] = '\b';
  *extraout_r3 = 0x80;
  FUN_0600e42c(pcVar4 + -0x30);
  iVar7 = 0x20;
  pcVar4 = PTR_DAT_0600e4f0;
  do {
    pcVar4[4] = -0x80;
    iVar7 = iVar7 + -1;
    if (*pcVar4 < '\0') break;
    pcVar4 = pcVar4 + 8;
  } while (iVar7 != 0);
  *(undefined **)(unaff_gbr + 0x36c) = PTR_DAT_0600e4d8;
  *(undefined **)(unaff_gbr + 0x370) = PTR_DAT_0600e4f4;
  *(undefined1 **)(unaff_gbr + 0x374) = &LAB_0600e450;
  return;
}

