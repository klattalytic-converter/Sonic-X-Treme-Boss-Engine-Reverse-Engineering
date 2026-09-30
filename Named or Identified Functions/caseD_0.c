
/* WARNING: Instruction at (ram,0x0601a59e) overlaps instruction at (ram,0x0601a59c)
    */

void switchD_0601a2f2::caseD_0(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar6;
  int in_r2;
  int iVar7;
  int in_r3;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r8;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int unaff_r9;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int unaff_r10;
  ushort *unaff_r11;
  int unaff_r12;
  uint unaff_r13;
  uint uVar20;
  uint unaff_r14;
  int unaff_gbr;
  
  *unaff_r11 = (ushort)param_2 & 0xff | (ushort)(((param_2 & 0xff00) >> 8 & 0xf0 | 10) << 8);
  uVar11 = (unaff_r8 - (in_r2 >> 1)) + (param_4 >> 1);
  if (uVar11 + unaff_r10 <= unaff_r13) {
    uVar15 = (unaff_r9 - (in_r3 >> 1)) - (param_3 >> 1);
    uVar1 = uVar11 >> 0x10;
    if ((uVar15 + unaff_r12 <= unaff_r14) &&
       (uVar12 = uVar11 + in_r2, uVar12 + unaff_r10 <= unaff_r13)) {
      uVar9 = uVar1 << 0x10 | uVar15 >> 0x10;
      uVar16 = uVar15 + param_3;
      uVar2 = uVar12 >> 0x10;
      if (uVar16 + unaff_r12 <= unaff_r14) {
        uVar6 = uVar2 << 0x10 | uVar16 >> 0x10;
        uVar13 = uVar12 - param_4;
        uVar17 = uVar16 + in_r3;
        if (((uVar13 + unaff_r10 <= unaff_r13) &&
            (uVar3 = uVar13 >> 0x10, uVar17 + unaff_r12 <= unaff_r14)) &&
           (uVar14 = uVar13 - in_r2, unaff_r10 + uVar14 <= unaff_r13)) {
          uVar18 = uVar17 - param_3;
          uVar10 = uVar3 << 0x10 | uVar17 >> 0x10;
          if (unaff_r12 + uVar18 <= unaff_r14) {
            uVar4 = uVar14 >> 0x10;
            *(ushort **)(unaff_gbr + 0x34) = unaff_r11 + 0x12;
            iVar8 = (int)(short)*(undefined4 *)(unaff_gbr + 0x94);
            iVar7 = (int)(short)((uint)*(undefined4 *)(unaff_gbr + 0x94) >> 0x10);
            uVar20 = *(uint *)(unaff_gbr + 0x330) & 0xffff;
            uVar5 = *(uint *)(unaff_gbr + 0x330) >> 0x10;
            uVar19 = uVar4 << 0x10 | uVar18 >> 0x10;
            if ((uVar20 <= (uint)((short)(uVar15 >> 0x10) + iVar8)) ||
               (uVar5 <= (uint)((short)(uVar11 >> 0x10) + iVar7))) {
              if (((uint)((short)(uVar16 >> 0x10) + iVar8) < uVar20) &&
                 ((uint)((short)(uVar12 >> 0x10) + iVar7) < uVar5)) {
                *(uint *)(unaff_r11 + 8) = uVar9;
                *unaff_r11 = *unaff_r11 ^ 0x10;
                *(uint *)(unaff_r11 + 6) = uVar6;
                *(uint *)(unaff_r11 + 0xc) = uVar10;
                *(uint *)(unaff_r11 + 10) = uVar19;
                return;
              }
              if (((uint)((short)(uVar17 >> 0x10) + iVar8) < uVar20) &&
                 ((uint)((short)(uVar13 >> 0x10) + iVar7) < uVar5)) {
                *(uint *)(unaff_r11 + 10) = uVar9;
                *unaff_r11 = *unaff_r11 ^ 0x30;
                *(uint *)(unaff_r11 + 0xc) = uVar6;
                *(uint *)(unaff_r11 + 6) = uVar10;
                *(uint *)(unaff_r11 + 8) = uVar19;
                return;
              }
              if (((uint)((short)(uVar18 >> 0x10) + iVar8) < uVar20) &&
                 ((uint)((short)(uVar14 >> 0x10) + iVar7) < uVar5)) {
                *(uint *)(unaff_r11 + 0xc) = uVar9;
                *unaff_r11 = *unaff_r11 ^ 0x20;
                *(uint *)(unaff_r11 + 10) = uVar6;
                *(uint *)(unaff_r11 + 8) = uVar10;
                *(uint *)(unaff_r11 + 6) = uVar19;
                return;
              }
              uVar11 = (~-(uint)((uVar4 & 0x8000) == 0) ^ uVar4) +
                       (~-(uint)((uVar18 >> 0x10 & 0x8000) == 0) ^ uVar19) & 0xffff;
              UNRECOVERED_JUMPTABLE = (code *)0x601a640;
              uVar12 = (~-(uint)((uVar3 & 0x8000) == 0) ^ uVar3) +
                       (~-(uint)((uVar17 >> 0x10 & 0x8000) == 0) ^ uVar10) & 0xffff;
              if (uVar12 <= uVar11) {
                UNRECOVERED_JUMPTABLE = (code *)0x601a630;
                uVar11 = uVar12;
              }
              uVar12 = (~-(uint)((uVar2 & 0x8000) == 0) ^ uVar2) +
                       (~-(uint)((uVar16 >> 0x10 & 0x8000) == 0) ^ uVar6) & 0xffff;
              if (uVar12 <= uVar11) {
                UNRECOVERED_JUMPTABLE = (code *)0x601a630;
                uVar11 = uVar12;
              }
              if (uVar11 < ((~-(uint)((uVar1 & 0x8000) == 0) ^ uVar1) +
                            (~-(uint)((uVar15 >> 0x10 & 0x8000) == 0) ^ uVar9) & 0xffff)) {
                    /* WARNING: Could not recover jumptable at 0x0601a612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)(param_1 + 0x20);
                return;
              }
            }
            *(uint *)(unaff_r11 + 6) = uVar9;
            *(uint *)(unaff_r11 + 8) = uVar6;
            *(uint *)(unaff_r11 + 10) = uVar10;
            *(uint *)(unaff_r11 + 0xc) = uVar19;
            return;
          }
        }
      }
    }
  }
  *(undefined4 *)((((int)(short)unaff_r11[0xf] & 0xff00U) >> 8) * 4 + *(int *)(unaff_gbr + 0x38)) =
       *(undefined4 *)(unaff_r11 + 0x10);
  return;
}

