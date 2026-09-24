/* Cpp2IL mapping: native/Cpp2IL-ISIL/Metacore.MergeMansion.SharedLogic/MergePairFinder.txt
 * Cpp2IL method: System.Int32 RemoveVisibleItemEntriesWithoutPair(MergePairFinder+ItemEntry[] visibleItemEntriesBuffer, System.Int32 visibleItemEntriesCount, MergePairFinder+ItemEntry[] partiallyVisibleItemEntriesBuffer, System.Int32 partiallyVisibleItemEntriesCount)
 * Ghidra function entry: 033b6d78
 * Generated Ghidra pseudocode; not original C# source. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_033b6d78(long param_1,uint param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined1 auVar2 [12];
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x19;
  ulong unaff_x20;
  uint uVar14;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar10 = param_3;
  if (param_1 != 0) {
    unaff_x19 = param_4 & 0xffffffff;
    unaff_x24 = 0;
    unaff_x22 = 0;
    unaff_x25 = (ulong)param_2;
    unaff_x26 = param_1 + 0x20;
    while (uVar12 = *(uint *)(param_1 + 0x18), unaff_x24 < uVar12) {
      unaff_x23 = *(ulong *)(unaff_x26 + unaff_x24 * 8);
      iVar15 = (int)(unaff_x23 >> 0x20);
      if (iVar15 < 2) {
        uVar10 = unaff_x23 & 0xffffffff;
        iVar3 = func_0x033b8098(param_3,unaff_x19);
        if (1 < iVar3 + iVar15) {
          uVar12 = (uint)*(undefined8 *)(param_1 + 0x18);
          goto LAB_033b6df0;
        }
      }
      else {
LAB_033b6df0:
        uVar14 = (uint)unaff_x22;
        if (uVar12 <= uVar14) break;
        unaff_x22 = (ulong)(uVar14 + 1);
        *(ulong *)(param_1 + (long)(int)uVar14 * 8 + 0x20) = unaff_x23;
      }
      unaff_x24 = unaff_x24 + 1;
      if (unaff_x25 == unaff_x24) {
        return unaff_x22;
      }
    }
    func_0x0249fb98();
    unaff_x20 = param_3;
  }
  auVar17 = func_0x0249fb90();
  uVar14 = auVar17._8_4_;
  uStack_60 = 0x33b6e3c;
  uVar11 = (uint)param_4;
  auVar2._8_4_ = uVar11;
  auVar2._0_8_ = uVar10;
  uVar12 = uVar14;
  if ((int)uVar11 <= (int)uVar14) {
    uVar12 = uVar11;
  }
  uVar7 = auVar17._0_8_;
  if ((int)uVar11 <= (int)uVar14) {
    uVar7 = uVar10;
    auVar2 = auVar17;
  }
  lVar1 = auVar2._0_8_;
  if ((int)uVar12 < 1) {
    return 0;
  }
  if (uVar7 != 0) {
    uVar14 = *(uint *)(uVar7 + 0x18);
    uVar13 = 0;
    uVar5 = 0;
    while (uVar13 != uVar14) {
      if (0 < auVar2._8_4_) {
        if (lVar1 == 0) goto LAB_033b6efc;
        iVar15 = *(int *)(lVar1 + 0x18);
        uVar11 = *(uint *)(uVar7 + 0x20 + uVar13 * 8);
        puVar8 = (uint *)(lVar1 + 0x20);
        iVar3 = auVar2._8_4_;
        do {
          if (iVar15 == 0) goto LAB_033b6ef8;
          uVar10 = (ulong)*puVar8;
          if (*puVar8 == uVar11) {
            if (param_5 == 0) goto LAB_033b6efc;
            uVar4 = (uint)uVar5;
            if (*(uint *)(param_5 + 0x18) <= uVar4) goto LAB_033b6ef8;
            uVar5 = (ulong)(uVar4 + 1);
            *(uint *)(param_5 + (long)(int)uVar4 * 4 + 0x20) = uVar11;
            break;
          }
          iVar3 = iVar3 + -1;
          puVar8 = puVar8 + 2;
          iVar15 = iVar15 + -1;
        } while (iVar3 != 0);
      }
      uVar13 = uVar13 + 1;
      if (uVar13 == uVar12) {
        return uVar5;
      }
    }
LAB_033b6ef8:
    func_0x0249fb98();
  }
LAB_033b6efc:
  auVar16 = func_0x0249fb90();
  uVar9 = auVar16._8_8_;
  uStack_90 = 0x33b6f00;
  uVar10 = uVar10 & 0xffffffff;
  uStack_88 = unaff_x23;
  uStack_80 = unaff_x22;
  lStack_78 = param_1;
  uStack_70 = unaff_x20;
  uStack_68 = unaff_x19;
  uVar6 = func_0x0376e0dc(uVar9,0);
  uStack_b0 = uStack_90;
  lStack_a0 = unaff_x26;
  uStack_98 = unaff_x25;
  uStack_90 = unaff_x24;
  if ((bRam0000000005e2c39d & 1) == 0) {
    func_0x0249f8e4(&DAT_059db250,uVar6,uVar9,uVar10,param_4 & 0xffffffff);
    bRam0000000005e2c39d = 1;
  }
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  auStack_c0 = func_0x033b793c(auVar16._0_8_,uVar6,uVar9,uVar10,param_4 & 0xffffffff,param_5);
  if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
    func_0x0249fa64();
  }
  uVar7 = func_0x0376edd4(auStack_c0,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(_DAT_059db250 + 0xe4) == 0) {
      func_0x0249fa64();
    }
    uVar7 = func_0x0376edd4(auStack_c0 + 8,0);
    if ((uVar7 & 1) == 0) {
      return auStack_c0._0_8_;
    }
  }
  uVar6 = func_0x0376e0dc(uVar9,0);
  uVar10 = func_0x033b793c(auVar16._0_8_,uVar6,uVar9,uVar10,0,param_5);
  return uVar10;
}

