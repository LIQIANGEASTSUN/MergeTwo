/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBItemUsageBurstBubble$$Initialize RVA 0x2292af4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a2af4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_022a2c88 + 0x22a2b08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a2c8c + 0x22a2b1c));
    func_0x01384978(*(undefined4 *)(_UNK_022a2c90 + 0x22a2b28));
    func_0x01384978(*(undefined4 *)(_UNK_022a2c94 + 0x22a2b34));
    func_0x01384978(*(undefined4 *)(_UNK_022a2c98 + 0x22a2b40));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb541);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb541);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  FUN_022a27e0(param_1);
  iVar1 = func_0x02f67194(param_1,**(undefined4 **)(_UNK_022a2c9c + 0x22a2b98));
  piVar6 = *(int **)(_UNK_022a2ca0 + 0x22a2bb0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0244fb8c(iVar1,0,0);
  if (iVar3 != 0) {
    iVar1 = func_0x02f67634(param_1,1,**(undefined4 **)(_UNK_022a2ca4 + 0x22a2be8));
  }
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0145b1cc(iVar1,0,0);
  if (iVar3 == 0) {
    return;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xb4);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_022a2ca8 + 0x22a2c38));
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x0244ffa0(uVar5,param_1,*(undefined4 *)(*param_1 + 0xe4),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0519d8f0)(iVar1,uVar5,0);
  return;
}



// ===== FAT.Merge.MBItemUsageBurstBubble$$OnBtnClick RVA 0x2292cac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a2cac(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_022a2f3c + 0x22a2cc4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a2f40 + 0x22a2cd8));
    func_0x01384978(*(undefined4 *)(_UNK_022a2f44 + 0x22a2ce4));
    func_0x01384978(*(undefined4 *)(_UNK_022a2f48 + 0x22a2cf0));
    func_0x01384978(*(undefined4 *)(_UNK_022a2f4c + 0x22a2cfc));
    func_0x01384978(*(undefined4 *)(_UNK_022a2f50 + 0x22a2d08));
    func_0x01384978(*(undefined4 *)(_UNK_022a2f54 + 0x22a2d14));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xb542);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb542);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  FUN_022a2578(param_1);
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar3 = FUN_021689a4(*(int *)(param_1 + 0x10),0), iVar3 != 0)) {
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar3 + 0x14) != 0) &&
       (iVar3 = func_0x01cceac0(*(int *)(iVar3 + 0x14),1,0), iVar3 != 0)) {
      pcVar7 = (char *)(_UNK_022a30cc + 0x22a2f84);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_022a30d0 + 0x22a2f98));
        *pcVar7 = '\x01';
      }
      if (((*(int *)(param_1 + 0x10) == 0) ||
          (iVar3 = FUN_0210cd28(*(int *)(param_1 + 0x10),0), iVar3 == 0)) ||
         (iVar6 = FUN_021689a4(*(undefined4 *)(param_1 + 0x10),0), iVar6 == 0)) {
        return;
      }
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0x14);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x01cceac0(iVar6,1,0);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar5 = FUN_0210e2d4(iVar6,0);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar4 = FUN_0210e2d4(iVar6,0);
      uVar4 = FUN_02157e88(uVar4,0);
      func_0x019a4458(uVar5,uVar4,uVar8,0);
      uVar8 = func_0x022a30d8(param_1);
      FUN_020e7fd4(iVar3,*(undefined4 *)(param_1 + 0x10),uVar8,0);
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar8 = **(undefined4 **)(_UNK_022a30d4 + 0x22a30bc);
      pcVar7 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),uVar8,0);
        func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
        *pcVar7 = '\x01';
      }
      iVar6 = func_0x0229f06c(0x47,0);
      if (iVar6 == 0) {
        iVar6 = func_0x01489db8(uVar8,0);
        if (iVar6 == 0) {
          iVar6 = *(int *)(iVar3 + 0x18);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x0244f844(iVar6,uVar8,&stack0xffffffec,
                                  **(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350));
          if (iVar6 == 0) {
            iVar6 = func_0x018872a8(uVar8,0);
            if (iVar6 == 0) {
              return;
            }
            uVar8 = *(undefined4 *)(iVar6 + 0x18);
            if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar2 = func_0x025550ec(uVar8,0);
            cVar1 = *(char *)(iVar6 + 0x1c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar8 = *(undefined4 *)(iVar2 + 8);
            uVar5 = *(undefined4 *)(iVar2 + 0xc);
            if (cVar1 != '\0') {
              func_0x01bfe144(iVar3,uVar8,uVar5);
              return;
            }
          }
          else {
            uVar5 = 0;
            uVar8 = *(undefined4 *)(iVar3 + 8);
          }
          func_0x01bfe078(iVar3,uVar8,uVar5);
        }
      }
      else {
        iVar6 = func_0x0229f13c(0x47,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x02174108(iVar6,iVar3,uVar8,0);
      }
      return;
    }
    iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_022a2f58 + 0x22a2dd4));
    piVar9 = *(int **)(_UNK_022a2f5c + 0x22a2de8);
    iVar6 = *piVar9;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = *piVar9;
    }
    uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x6c);
    piVar9 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_022a2f60 + 0x22a2e0c),2);
    iVar6 = *(int *)(param_1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = FUN_0210e2d4(iVar6,0);
    iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_022a2f64 + 0x22a2e44),&uStack_1c);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar6 != 0) && (iVar2 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar9 + 0x20)), iVar2 == 0)
       ) {
      uVar5 = func_0x01384c10();
      func_0x01384aa0(uVar5,0);
    }
    if (piVar9[3] == 0) {
      func_0x01384bf4();
    }
    piVar9[4] = iVar6;
    iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_022a2f68 + 0x22a2eb0));
    func_0x024500b4(iVar6,param_1,**(undefined4 **)(_UNK_022a2f6c + 0x22a2ecc),0);
    if ((iVar6 != 0) && (iVar2 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar9 + 0x20)), iVar2 == 0)
       ) {
      uVar5 = func_0x01384c10();
      func_0x01384aa0(uVar5,0);
    }
    if ((uint)piVar9[3] < 2) {
      func_0x01384bf4();
    }
    piVar9[5] = iVar6;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee858c(iVar3,uVar8,piVar9,0);
  }
  return;
}



// ===== FAT.Merge.MBItemUsageBurstBubble$$<OnBtnClick>g__DoBurst|1_0 RVA 0x2292f70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a2f70(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_022a30cc + 0x22a2f84);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a30d0 + 0x22a2f98));
    *pcVar8 = '\x01';
  }
  if (((*(int *)(param_1 + 0x10) == 0) ||
      (iVar3 = FUN_0210cd28(*(int *)(param_1 + 0x10),0), iVar3 == 0)) ||
     (iVar4 = FUN_021689a4(*(undefined4 *)(param_1 + 0x10),0), iVar4 == 0)) {
    return;
  }
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x14);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x01cceac0(iVar4,1,0);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = FUN_0210e2d4(iVar4,0);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = FUN_0210e2d4(iVar4,0);
  uVar7 = FUN_02157e88(uVar7,0);
  func_0x019a4458(uVar6,uVar7,uVar5,0);
  uVar5 = func_0x022a30d8(param_1);
  FUN_020e7fd4(iVar3,*(undefined4 *)(param_1 + 0x10),uVar5,0);
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = **(undefined4 **)(_UNK_022a30d4 + 0x22a30bc);
  pcVar8 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),uVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
    *pcVar8 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x47,0);
  if (iVar4 == 0) {
    iVar4 = func_0x01489db8(uVar5,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar3 + 0x18);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0244f844(iVar4,uVar5,&stack0xffffffec,
                              **(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350));
      if (iVar4 == 0) {
        iVar4 = func_0x018872a8(uVar5,0);
        if (iVar4 == 0) {
          return;
        }
        uVar5 = *(undefined4 *)(iVar4 + 0x18);
        if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x025550ec(uVar5,0);
        cVar1 = *(char *)(iVar4 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar2 + 8);
        uVar6 = *(undefined4 *)(iVar2 + 0xc);
        if (cVar1 != '\0') {
          func_0x01bfe144(iVar3,uVar5,uVar6);
          return;
        }
      }
      else {
        uVar6 = 0;
        uVar5 = *(undefined4 *)(iVar3 + 8);
      }
      func_0x01bfe078(iVar3,uVar5,uVar6);
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x47,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar4,iVar3,uVar5,0);
  }
  return;
}



// ===== FAT.Merge.MBItemUsageBurstBubble$$GetBubbleForceRewardItemId RVA 0x22930d8 =====

/* WARNING: Removing unreachable block (ram,0x022a3544) */
/* WARNING: Removing unreachable block (ram,0x022a3664) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_022a30d8(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  int iStack_50;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined *puStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_022a384c + 0x22a30f0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a3850 + 0x22a3104));
    func_0x01384978(*(undefined4 *)(_UNK_022a3854 + 0x22a3110));
    func_0x01384978(*(undefined4 *)(_UNK_022a3858 + 0x22a311c));
    func_0x01384978(*(undefined4 *)(_UNK_022a385c + 0x22a3128));
    func_0x01384978(*(undefined4 *)(_UNK_022a3860 + 0x22a3134));
    func_0x01384978(*(undefined4 *)(_UNK_022a3864 + 0x22a3140));
    func_0x01384978(*(undefined4 *)(_UNK_022a3868 + 0x22a314c));
    func_0x01384978(*(undefined4 *)(_UNK_022a386c + 0x22a3158));
    func_0x01384978(*(undefined4 *)(_UNK_022a3870 + 0x22a3164));
    func_0x01384978(*(undefined4 *)(_UNK_022a3874 + 0x22a3170));
    func_0x01384978(*(undefined4 *)(_UNK_022a3878 + 0x22a317c));
    func_0x01384978(*(undefined4 *)(_UNK_022a387c + 0x22a3188));
    func_0x01384978(*(undefined4 *)(_UNK_022a3880 + 0x22a3194));
    func_0x01384978(*(undefined4 *)(_UNK_022a3884 + 0x22a31a0));
    *pcVar9 = '\x01';
  }
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puStack_3c = *(undefined **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_48 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_38 = 0;
  iVar2 = func_0x0229f06c(0xb544);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb544);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar3 = (undefined *)func_0x0217493c(iVar2,param_1,0);
    return puVar3;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar12 = *(int **)(_UNK_022a3888 + 0x22a324c);
  iVar11 = *(int *)(iVar2 + 0x1c0);
  iVar2 = *piVar12;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar12;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&uStack_30,iVar2,&iStack_28,**(undefined4 **)(_UNK_022a388c + 0x22a328c));
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar12 = (int *)func_0x03653608(iVar11,**(undefined4 **)(_UNK_022a3890 + 0x22a32ac));
  piVar10 = *(int **)(_UNK_022a3894 + 0x22a32cc);
  piVar15 = *(int **)(_UNK_022a3898 + 0x22a32d4);
  piVar13 = *(int **)(_UNK_022a389c + 0x22a32dc);
  iStack_64 = 0;
LAB_022a32dc:
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar12;
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar10) {
        puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
        goto LAB_022a3338;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar12,*piVar10,0);
LAB_022a3338:
  iVar2 = (*(code *)*puVar4)(piVar12,puVar4[1]);
  if (iVar2 != 0) {
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar12;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar15) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_022a33ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar12,*piVar15,0);
LAB_022a33ac:
    uVar5 = (*(code *)*puVar4)(piVar12,puVar4[1]);
    if (*(int *)(*piVar13 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_60,uVar5,0);
    iVar11 = iStack_28;
    iVar2 = iStack_5c;
    uVar5 = uStack_60;
    if (0 < iStack_5c) {
      iStack_5c = 0;
      uStack_60 = 0;
      iStack_64 = iVar2 + iStack_64;
      func_0x038fd264(&uStack_60,uVar5,iVar2,**(undefined4 **)(_UNK_022a38a0 + 0x22a3404));
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar2 = iStack_5c;
      uVar5 = uStack_60;
      iVar14 = *(int *)(iVar11 + 8);
      uVar7 = *(uint *)(iVar11 + 0xc);
      piVar8 = *(int **)(_UNK_022a38a4 + 0x22a3460);
      *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
      iVar6 = *piVar8;
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      if (uVar7 < *(uint *)(iVar14 + 0xc)) {
        *(uint *)(iVar11 + 0xc) = uVar7 + 1;
        iVar14 = iVar14 + uVar7 * 8;
        *(undefined4 *)(iVar14 + 0x10) = uVar5;
        *(int *)(iVar14 + 0x14) = iVar2;
      }
      else {
        func_0x024501b4(iVar11,uVar5,iVar2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
      }
    }
    goto LAB_022a32dc;
  }
  if (piVar12 != (int *)0x0) {
    iVar2 = *piVar12;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_022a38a8 + 0x22a34e4)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_022a352c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_022a38a8 + 0x22a34e4),0);
LAB_022a352c:
    (*(code *)*puVar4)(piVar12,puVar4[1]);
  }
  iVar2 = iStack_28;
  if (0 < iStack_64) {
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      iVar11 = func_0x02450284(1,iStack_64 + 1,0);
      iVar2 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x024505e0(&uStack_60,iVar2,**(undefined4 **)(_UNK_022a38b0 + 0x22a35b4));
      iVar2 = 0;
      iStack_38 = iStack_50;
      uStack_48 = uStack_60;
      iStack_44 = iStack_5c;
      uStack_40 = uStack_58;
      puStack_3c = puStack_54;
      puVar4 = *(undefined4 **)(_UNK_022a38b4 + 0x22a35ec);
      do {
        iVar14 = func_0x03f4aab0(&uStack_48,*puVar4);
        if (iVar14 == 0) {
          bVar1 = false;
          puVar3 = (undefined *)0x0;
          goto LAB_022a3648;
        }
        iVar2 = iVar2 + iStack_38;
      } while (iVar2 < iVar11);
      bVar1 = true;
      puVar3 = puStack_3c;
LAB_022a3648:
      func_0x03f4aaac(&uStack_48,**(undefined4 **)(_UNK_022a38b8 + 0x22a3654));
      func_0x028c98a0(&uStack_30,0);
      if (bVar1) {
        return puVar3;
      }
      goto LAB_022a3628;
    }
  }
  func_0x028c98a0(&uStack_30,0);
LAB_022a3628:
  return &UNK_00b71b06;
}



// ===== FAT.Merge.MBItemUsageBurstBubble$$.ctor RVA 0x22938c0 =====

void FUN_022a38c0(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.Merge.MBItemUsageBurstBubble$$<>iFixBaseProxy_Initialize RVA 0x22938c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_022a27e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_022a2910 + 0x22a27f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a2914 + 0x22a280c));
    func_0x01384978(*(undefined4 *)(_UNK_022a2918 + 0x22a2818));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x775f);
  if (iVar1 == 0) {
    iVar1 = func_0x0244fc34(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02f68304(iVar1,&iStack_14,**(undefined4 **)(_UNK_022a291c + 0x22a2890));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xb4);
      uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_022a2920 + 0x22a28bc));
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x0244ffa0(uVar3,param_1,*(undefined4 *)(*param_1 + 0xe4),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffb0(iVar1,uVar3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x775f);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.MBItemUsageBurstBubble$$<>iFixBaseProxy_OnBtnClick RVA 0x22938cc =====

void thunk_FUN_022a2578(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7760);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x7760);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}


