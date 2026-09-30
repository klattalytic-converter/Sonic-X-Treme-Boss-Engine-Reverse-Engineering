
/* WARNING: Instruction at (ram,0x0600be84) overlaps instruction at (ram,0x0600be82)
    */

undefined4 _slScrAutoDisp(byte param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  uint *puVar20;
  int unaff_gbr;
  char acStack_8074 [32856];
  
  iVar12 = -(int)DAT_0600bd40;
  pcVar19 = &stack0xffffffe4 + iVar12;
  pcVar16 = &stack0x00000008 + iVar12;
  *(undefined4 *)(&stack0x00000004 + iVar12) = 0xffffffff;
  puVar15 = (undefined4 *)(&stack0x00000004 + iVar12);
  iVar5 = 4;
  do {
    puVar15[-1] = DAT_0600c074;
    iVar5 = iVar5 + -1;
    puVar15 = puVar15 + -2;
    *puVar15 = DAT_0600c074;
  } while (iVar5 != 0);
  if ((param_1 & 1) != 0) {
    iVar5 = (int)*(char *)((int)&PTR_DAT_0600c08c + ((int)*(short *)(unaff_gbr + 0x158) & 3U));
    iVar7 = (int)*(char *)((int)&PTR_DAT_0600c090 +
                          ((uint)(int)*(short *)(unaff_gbr + 0xe8) >> 4 & 7));
    uVar9 = 0;
    uVar11 = (uint)(char)(&DAT_0600c07c)[*(uint *)(unaff_gbr + 0x1fc) >> 0x11 & 3];
    if ((*(ushort *)(unaff_gbr + 0x15a) & 1) != 0) {
      FUN_0600c05a();
    }
    if ((*(ushort *)(unaff_gbr + 0xe8) & 2) == 0) {
      FUN_0600bfee(iVar5,iVar7,(char)uVar9,(char)uVar11);
    }
    else {
      FUN_0600c026(iVar5,iVar7,uVar9,uVar11);
    }
  }
  if ((param_1 & 2) != 0) {
    iVar5 = (int)*(char *)((int)&PTR_DAT_0600c08c +
                          ((uint)(int)*(short *)(unaff_gbr + 0x158) >> 8 & 3));
    iVar7 = (int)*(char *)((int)&PTR_DAT_0600c090 +
                          ((uint)(int)*(short *)(unaff_gbr + 0xe8) >> 0xc & 7));
    uVar9 = 1;
    uVar11 = (uint)(char)(&DAT_0600c07c)[*(uint *)(unaff_gbr + 0x200) >> 0x11 & 3];
    if (((uint)(int)*(short *)(unaff_gbr + 0x15a) >> 8 & 1) != 0) {
      FUN_0600c05a();
    }
    if (((uint)(int)*(short *)(unaff_gbr + 0xe8) >> 8 & 2) == 0) {
      FUN_0600bfee(iVar5,iVar7,(char)uVar9,(char)uVar11);
    }
    else {
      FUN_0600c026(iVar5,iVar7,uVar9,uVar11);
    }
  }
  if ((param_1 & 4) != 0) {
    FUN_0600bfee(1,(int)*(char *)((int)&PTR_DAT_0600c090 +
                                 ((uint)(int)*(short *)(unaff_gbr + 0xea) >> 1 & 1)),'\x02',
                 (&DAT_0600c07c)[*(uint *)(unaff_gbr + 0x204) >> 0x11 & 3]);
  }
  if ((param_1 & 8) != 0) {
    FUN_0600bfee(1,(int)*(char *)((int)&PTR_DAT_0600c090 +
                                 ((uint)(int)*(short *)(unaff_gbr + 0xea) >> 5 & 1)),'\x03',
                 (&DAT_0600c07c)[*(uint *)(unaff_gbr + 0x208) >> 0x11 & 3]);
  }
  *pcVar16 = -1;
  pcVar17 = pcVar16;
LAB_0600be24:
  uVar11 = (uint)pcVar17[2];
  uVar10 = 0xf;
  if ((*(byte *)(unaff_gbr + 0xb0) & 8) == 0) {
    uVar10 = 0xff;
  }
  while (uVar4 = (uint)*pcVar17, uVar4 != 0xffffffff) {
    if ((uVar4 & 0x80) == 0) {
      if ((pcVar16[uVar4 + 3] == 0) && ((pcVar17[1] == '\x04' || (pcVar17[1] == '\x05')))) {
        uVar4 = 0xff;
        if (((int)*(char *)(unaff_gbr + 0xb0) & 8U) != 0) {
          uVar4 = 0xf;
        }
      }
      else {
        uVar4 = (uint)(char)(&DAT_0600c098)
                            [(int)pcVar16[uVar4 + 3] + ((int)*(char *)(unaff_gbr + 0xb0) & 8U)];
      }
      uVar10 = uVar10 & uVar4;
    }
    else if (uVar4 == 0xfffffffc) {
      uVar10 = uVar10 & 3;
    }
    else if (uVar4 == 0xfffffffb) {
      uVar4 = 7;
      if ((*(ushort *)(unaff_gbr + 0x15a) & 1) != 0) {
        uVar4 = 6;
      }
      uVar10 = uVar10 & uVar4;
    }
    uVar4 = 1;
    iVar5 = 0;
    do {
      if ((uVar4 & uVar11) != 0) {
        uVar10 = uVar10 & (int)(char)(&stack0x00000004)[iVar5 + iVar12];
      }
      uVar4 = uVar4 << 1;
      bVar3 = iVar5 != 3;
      iVar5 = iVar5 + 1;
    } while (bVar3);
    pcVar18 = pcVar17;
    if (uVar10 != 0) goto code_r0x0600beb4;
    do {
      pcVar17 = pcVar18 + -4;
      if (pcVar18 == pcVar16) {
        return 0xffffffff;
      }
      bVar2 = (&DAT_0600c07c)[pcVar18[-1]];
      uVar10 = (uint)*(char *)((int)&PTR_DAT_0600c0a7 + pcVar18[-1] + 1);
      if ((*(byte *)(unaff_gbr + 0xb0) & 8) != 0) {
        uVar10 = uVar10 & 0xf;
      }
      uVar11 = (uint)pcVar18[-2];
      uVar4 = 1;
      iVar5 = 0;
      do {
        if ((uVar4 & uVar11) != 0) {
          (&stack0x00000004)[iVar5 + iVar12] = (&stack0x00000004)[iVar5 + iVar12] | bVar2;
        }
        uVar4 = uVar4 << 1;
        bVar3 = iVar5 != 3;
        iVar5 = iVar5 + 1;
      } while (bVar3);
      pcVar18 = pcVar17;
    } while (uVar10 == 0);
  }
  iVar12 = 8;
  puVar20 = DAT_0600c078;
  do {
    cVar1 = *pcVar19;
    pcVar16 = pcVar19 + 1;
    pcVar17 = pcVar19 + 2;
    pcVar18 = pcVar19 + 3;
    pcVar19 = pcVar19 + 4;
    *(short *)puVar20 =
         (((short)cVar1 << 4 | (short)*pcVar16) << 4 | (short)*pcVar17) << 4 | (short)*pcVar18;
    iVar12 = iVar12 + -1;
    puVar20 = (uint *)((int)puVar20 + 2);
  } while (iVar12 != 0);
  cVar1 = *(char *)(unaff_gbr + 0xce);
  uVar11 = 1;
  puVar20 = DAT_0600c078;
  do {
    uVar10 = uVar11 & (int)cVar1;
    uVar11 = uVar11 << 1;
    if (uVar10 != 0) {
      uVar4 = *puVar20;
      uVar8 = puVar20[1];
      uVar13 = 0xf;
      iVar12 = 8;
      uVar10 = 0xe;
      do {
        if ((uVar4 & uVar13) == uVar10) {
          if ((uVar8 & uVar13) != uVar10) {
            uVar4 = uVar4 | uVar13;
          }
        }
        else if ((uVar8 & uVar13) == uVar10) {
          uVar8 = uVar8 | uVar13;
        }
        uVar13 = uVar13 << 4;
        iVar12 = iVar12 + -1;
        uVar10 = uVar10 << 4;
      } while (iVar12 != 0);
      uVar14 = 0xffffffff;
      iVar12 = 8;
      uVar10 = DAT_0600c084;
      uVar13 = uVar4;
      uVar6 = DAT_0600c088;
      do {
        uVar13 = uVar13 & uVar14;
        uVar6 = uVar6 & uVar14;
        if (uVar6 == uVar13) {
          uVar4 = uVar4 | uVar10;
          uVar8 = uVar8 | uVar10;
          break;
        }
        uVar10 = uVar10 >> 4;
        iVar12 = iVar12 + -1;
        uVar14 = uVar14 >> 4;
      } while (iVar12 != 0);
      *puVar20 = uVar4;
      puVar20[1] = uVar8;
    }
    puVar20 = puVar20 + 2;
    if (uVar11 != 2) {
      *(byte *)(unaff_gbr + 0xe1) = param_1;
      return 0;
    }
  } while( true );
code_r0x0600beb4:
  iVar5 = 0;
  while (uVar4 = uVar10 & 1, uVar10 = uVar10 >> 1, uVar4 != 1) {
    iVar5 = iVar5 + 1;
  }
  pcVar17[3] = (char)iVar5;
  cVar1 = pcVar17[1];
  bVar2 = (&DAT_0600c07c)[iVar5];
  uVar10 = 1;
  iVar7 = 0;
  do {
    if ((uVar10 & uVar11) != 0) {
      (&stack0x00000004)[iVar7 + iVar12] = (&stack0x00000004)[iVar7 + iVar12] & ~bVar2;
      (&stack0xffffffe4)[iVar7 * 8 + iVar5 + iVar12] = cVar1;
    }
    uVar10 = uVar10 << 1;
    bVar3 = iVar7 != 3;
    iVar7 = iVar7 + 1;
  } while (bVar3);
  pcVar17 = pcVar17 + 4;
  goto LAB_0600be24;
}

