/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBBoardOrderBox$$Init RVA 0x2294f5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a4f5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_022a5078 + 0x22a4f74);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a507c + 0x22a4f88));
    func_0x01384978(*(undefined4 *)(_UNK_022a5080 + 0x22a4f94));
    func_0x01384978(*(undefined4 *)(_UNK_022a5084 + 0x22a4fa0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa706);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa706);
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
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0244fc34(iVar1,0);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_022a5088 + 0x22a5018));
  func_0x0244ffa0(uVar2,param_1,**(undefined4 **)(_UNK_022a508c + 0x22a5034),0);
  if (*(int *)(**(int **)(_UNK_022a5090 + 0x22a5048) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_20 = 0;
  func_0x028bf89c(uVar5,0,uVar2,1);
  return;
}



// ===== FAT.Merge.MBBoardOrderBox$$Setup RVA 0x2295094 =====

/* WARNING: Possible PIC construction at 0x028be4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028be4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a5094(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_r4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_022a51a4 + 0x22a50a8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a51a8 + 0x22a50bc));
    func_0x01384978(*(undefined4 *)(_UNK_022a51ac + 0x22a50c8));
    func_0x01384978(*(undefined4 *)(_UNK_022a51b0 + 0x22a50d4));
    func_0x01384978(*(undefined4 *)(_UNK_022a51b4 + 0x22a50e0));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa709);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa709);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar8,&uStack_30,uVar4);
    return;
  }
  if (*(int *)(**(int **)(_UNK_022a51b8 + 0x22a5130) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_022a51bc + 0x22a514c));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_022a51c0 + 0x22a5160));
  func_0x024500b4(uVar8,param_1,**(undefined4 **)(_UNK_022a51c4 + 0x22a517c),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_028be4f4 + 0x28be418);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028be4f8 + 0x28be42c),uVar8,0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x10cb,0);
  if (iVar5 == 0) {
    piVar3 = (int *)func_0x0487907c(*(undefined4 *)(iVar2 + 8),uVar8,0);
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 8) = 0;
      return;
    }
    iVar5 = **(int **)(_UNK_028be4fc + 0x28be4a8);
    if (*piVar3 == iVar5) {
      *(int **)(iVar2 + 8) = piVar3;
      if (*piVar3 == iVar5) {
        return;
      }
    }
    else {
      unaff_lr = 0x28be4bc;
      unaff_r4 = iVar2;
      register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
    }
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r4;
    func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar3 + 0x20),
                    iVar5);
    uVar1 = *(uint *)((int)register0x00000054 + -0xc);
    if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
      uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
    }
    iVar2 = func_0x01419d2c(uVar1);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    func_0x01418ff0(iVar2,0);
    if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
      func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
    }
    return;
  }
  iVar5 = func_0x0229f13c(0x10cb,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar8,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,uVar8,0);
  iVar6 = *(int *)(iVar5 + 8);
  uVar8 = *(undefined4 *)(iVar5 + 0xc);
  iVar2 = *(int *)(iVar5 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.Merge.MBBoardOrderBox$$Cleanup RVA 0x22951c8 =====

/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a51c8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_022a52d8 + 0x22a51dc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a52dc + 0x22a51f0));
    func_0x01384978(*(undefined4 *)(_UNK_022a52e0 + 0x22a51fc));
    func_0x01384978(*(undefined4 *)(_UNK_022a52e4 + 0x22a5208));
    func_0x01384978(*(undefined4 *)(_UNK_022a52e8 + 0x22a5214));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa773);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa773);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(**(int **)(_UNK_022a52ec + 0x22a5264) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_022a52f0 + 0x22a5280));
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_022a52f4 + 0x22a5294));
  func_0x024500b4(iVar6,param_1,**(undefined4 **)(_UNK_022a52f8 + 0x22a52b0),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_028bebc4 + 0x28beae0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),iVar6,0);
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x10cd,0);
  if (iVar3 == 0) {
    if (iVar6 != 0) {
      piVar4 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar6,0);
      if (piVar4 != (int *)0x0) {
        iVar6 = **(int **)(_UNK_028bebcc + 0x28beb78);
        if (*piVar4 == iVar6) {
          *(int **)(iVar2 + 8) = piVar4;
          if (*piVar4 == iVar6) {
            return;
          }
        }
        else {
          unaff_lr = 0x28beb8c;
          unaff_r4 = iVar2;
          register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
        }
        *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
        *(int *)((int)register0x00000054 + -8) = unaff_r4;
        func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),
                        *(undefined4 *)(*piVar4 + 0x20),iVar6);
        uVar1 = *(uint *)((int)register0x00000054 + -0xc);
        if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
          uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
        }
        iVar2 = func_0x01419d2c(uVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        func_0x01418ff0(iVar2,0);
        if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
          func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
        }
        return;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x10cd,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar6,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,iVar6,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.Merge.MBBoardOrderBox$$TryShowBox RVA 0x22952fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022a52fc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_022a5474 + 0x22a5318);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a5478 + 0x22a532c));
    func_0x01384978(*(undefined4 *)(_UNK_022a547c + 0x22a5338));
    *pcVar5 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xa729);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_022a5480 + 0x22a53a0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar2 = 0;
    iVar3 = func_0x01dec488(param_2,&iStack_1c,&iStack_20,&iStack_24,0);
    iVar4 = iStack_1c;
    iVar1 = iStack_20;
    if (iVar3 != 0) {
      iVar3 = **(int **)(_UNK_022a5484 + 0x22a53e0);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x24) = param_2;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = iVar4 - iVar1 >> 0x1f;
      iVar1 = (iVar4 - iVar1) / 1000 + iVar3;
      iVar3 = iVar1 - iVar3;
      func_0x02089060(uVar2,iVar1,iVar3,iVar3 >> 0x1f,0,0);
      iVar1 = iStack_24;
      iVar4 = *(int *)(param_1 + 0x14);
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x14);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0267cc24(iVar4,uVar2,0);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa729);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Merge.MBBoardOrderBox$$ShowReward RVA 0x2295488 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a5488(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_022a55ec + 0x22a54a4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a55f0 + 0x22a54b8));
    func_0x01384978(*(undefined4 *)(_UNK_022a55f4 + 0x22a54c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6dd);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6dd);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01ce5a10(iVar1,uVar2,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0267c9b0(iVar1,uVar6,0);
  piVar5 = *(int **)(param_1 + 0x20);
  uStack_1c = *(undefined4 *)(param_2 + 0x10);
  uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_022a55f8 + 0x22a5598),&uStack_1c);
  uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_022a55fc + 0x22a55b8),uVar6,0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar5 + 0x2d0))(piVar5,uVar6,*(undefined4 *)(*piVar5 + 0x2d4));
  return;
}



// ===== FAT.Merge.MBBoardOrderBox$$PlayOpenBoxEffect RVA 0x2295600 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a5600(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_022a5698 + 0x22a5614);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a569c + 0x22a5628));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa6de);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa6de);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0514e2c4)(iVar1,**(undefined4 **)(_UNK_022a56a0 + 0x22a568c),0);
  return;
}



// ===== FAT.Merge.MBBoardOrderBox$$_RefreshCountdown RVA 0x22956a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a56a4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  pcVar5 = (char *)(_UNK_022a5820 + 0x22a56bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a5824 + 0x22a56d0));
    func_0x01384978(*(undefined4 *)(_UNK_022a5828 + 0x22a56dc));
    func_0x01384978(*(undefined4 *)(_UNK_022a582c + 0x22a56e8));
    *pcVar5 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  uStack_1c = 0;
  iVar2 = func_0x0229f06c(0xa70b);
  if (iVar2 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    if (*(int *)(**(int **)(_UNK_022a5830 + 0x22a5748) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x01dec488(uVar6,&iStack_14,&iStack_18,&uStack_1c,0);
    iVar1 = iStack_14;
    iVar2 = iStack_18;
    if (iVar3 == 0) {
      piVar4 = *(int **)(param_1 + 0x1c);
      uVar6 = **(undefined4 **)(**(int **)(_UNK_022a5838 + 0x22a57e8) + 0x5c);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar6,*(undefined4 *)(*piVar4 + 0x2d4));
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(**(int **)(_UNK_022a5834 + 0x22a578c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = iVar1 - iVar2 >> 0x1f;
      iVar2 = (iVar1 - iVar2) / 1000 + iVar3;
      iVar3 = iVar2 - iVar3;
      func_0x02089060(uVar6,iVar2,iVar3,iVar3 >> 0x1f,0,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa70b);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Merge.MBBoardOrderBox$$_OnSecondPass RVA 0x229583c =====

/* WARNING: Possible PIC construction at 0x022a5734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x022a5738) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a583c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_r4;
  char *pcVar6;
  int unaff_r5;
  undefined4 uVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = func_0x0229f06c(0xa70a);
  if (iVar2 == 0) {
    iVar2 = func_0x0244ffd4(param_1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02450114(iVar2,0);
    if (iVar2 == 0) {
      return;
    }
    pcVar6 = (char *)(_UNK_022a5820 + 0x22a56bc);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a5824 + 0x22a56d0));
      func_0x01384978(*(undefined4 *)(_UNK_022a5828 + 0x22a56dc));
      func_0x01384978(*(undefined4 *)(_UNK_022a582c + 0x22a56e8));
      *pcVar6 = '\x01';
    }
    iStack_14 = 0;
    iStack_18 = 0;
    uStack_1c = 0;
    iVar2 = func_0x0229f06c(0xa70b);
    if (iVar2 == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x24);
      if (*(int *)(**(int **)(_UNK_022a5830 + 0x22a5748) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uStack_28 = 0;
      iVar1 = func_0x01dec488(uVar7,&iStack_14,&iStack_18,&uStack_1c);
      iVar3 = iStack_14;
      iVar2 = iStack_18;
      if (iVar1 == 0) {
        piVar5 = *(int **)(param_1 + 0x1c);
        uVar7 = **(undefined4 **)(**(int **)(_UNK_022a5838 + 0x22a57e8) + 0x5c);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar5 + 0x2d0))(piVar5,uVar7,*(undefined4 *)(*piVar5 + 0x2d4));
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(**(int **)(_UNK_022a5834 + 0x22a578c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uStack_28 = 0;
        uStack_24 = 0;
        iVar1 = iVar3 - iVar2 >> 0x1f;
        iVar2 = (iVar3 - iVar2) / 1000 + iVar1;
        iVar1 = iVar2 - iVar1;
        func_0x02089060(uVar7,iVar2,iVar1,iVar1 >> 0x1f);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0xa70b);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x22a5738;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_28;
  }
  else {
    iVar2 = func_0x0229f13c(0xa70a);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar3 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.Merge.MBBoardOrderBox$$_OnBtnPreview RVA 0x22958bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a58bc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_022a5af4 + 0x22a58d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a5af8 + 0x22a58e8));
    func_0x01384978(*(undefined4 *)(_UNK_022a5afc + 0x22a58f4));
    func_0x01384978(*(undefined4 *)(_UNK_022a5b00 + 0x22a5900));
    func_0x01384978(*(undefined4 *)(_UNK_022a5b04 + 0x22a590c));
    func_0x01384978(*(undefined4 *)(_UNK_022a5b08 + 0x22a5918));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa707);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa707);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = 0;
    uStack_28 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_20 = (undefined4)uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_022a5b0c + 0x22a596c));
  piVar7 = *(int **)(_UNK_022a5b10 + 0x22a5980);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x128);
  piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_022a5b14 + 0x22a59a4),2);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_38,iVar4,0);
  uStack_20 = uStack_30;
  uStack_28 = uStack_38;
  iVar4 = func_0x01384abc(**(undefined4 **)(_UNK_022a5b18 + 0x22a5a04),&uStack_38);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar4 != 0) && (iVar2 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if (piVar7[3] == 0) {
    func_0x01384bf4();
  }
  piVar7[4] = iVar4;
  uStack_3c = *(undefined4 *)(param_1 + 0x24);
  iVar4 = func_0x01384abc(**(undefined4 **)(_UNK_022a5b1c + 0x22a5a7c),&uStack_3c);
  if ((iVar4 != 0) && (iVar2 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if ((uint)piVar7[3] < 2) {
    func_0x01384bf4();
  }
  piVar7[5] = iVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee858c(iVar1,uVar6,piVar7,0);
  return;
}



// ===== FAT.Merge.MBBoardOrderBox$$.ctor RVA 0x2295b20 =====

void FUN_022a5b20(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


