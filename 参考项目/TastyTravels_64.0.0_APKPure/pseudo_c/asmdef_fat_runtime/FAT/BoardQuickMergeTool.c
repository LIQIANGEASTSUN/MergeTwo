/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardQuickMergeTool$$get_IsRunning RVA 0x1faa674 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01fba674(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_01fba70c + 0x1fba684);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fba710 + 0x1fba698));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9ce,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9ce,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar7,uVar6,&uStack_30,uVar5,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  piVar4 = *(int **)(_UNK_01fba714 + 0x1fba6ec);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  return (uint)*(byte *)(*(int *)(iVar1 + 0x5c) + 8);
}



// ===== FAT.BoardQuickMergeTool$$QuickMergeOnce RVA 0x1faa718 =====

/* WARNING: Possible PIC construction at 0x01fbb2dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01fbb2e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fba718(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 unaff_r5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar8;
  undefined4 unaff_lr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01fba7b8 + 0x1fba728);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fba7bc + 0x1fba73c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9cf,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01fba7c0 + 0x1fba790) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01fba7c4(0);
    func_0x01fba924();
    func_0x01fbac40();
    pcVar4 = (char *)(_UNK_01fbb568 + 0x1fbb21c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01fbb56c + 0x1fbb230));
      func_0x01384978(*(undefined4 *)(_UNK_01fbb570 + 0x1fbb23c));
      func_0x01384978(*(undefined4 *)(_UNK_01fbb574 + 0x1fbb248));
      func_0x01384978(*(undefined4 *)(_UNK_01fbb578 + 0x1fbb254));
      func_0x01384978(*(undefined4 *)(_UNK_01fbb57c + 0x1fbb260));
      func_0x01384978(*(undefined4 *)(_UNK_01fbb580 + 0x1fbb26c));
      func_0x01384978(*(undefined4 *)(_UNK_01fbb584 + 0x1fbb278));
      func_0x01384978(*(undefined4 *)(_UNK_01fbb588 + 0x1fbb284));
      func_0x01384978(*(undefined4 *)(_UNK_01fbb58c + 0x1fbb290));
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar1 = func_0x0229f06c(0xa9d8,0);
    if (iVar1 == 0) {
      piVar8 = *(int **)(_UNK_01fbb590 + 0x1fbb2f0);
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar8;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_01dbb000(iVar1,0);
        if ((iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) {
          iVar3 = *piVar8;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0328fe1c(&uStack_40,iVar3,**(undefined4 **)(_UNK_01fbb594 + 0x1fbb3b4));
          uStack_30 = uStack_40;
          uStack_2c = uStack_3c;
          uStack_28 = uStack_38;
          iStack_24 = iStack_34;
          puVar6 = *(undefined4 **)(_UNK_01fbb598 + 0x1fbb3d0);
          while (iVar2 = func_0x03f5f428(&uStack_30,*puVar6), iVar3 = iStack_24, iVar2 != 0) {
            if (iStack_24 == 0) {
              func_0x01384bf0();
            }
            uVar5 = *(undefined4 *)(iVar3 + 8);
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar2 = func_0x01fbb868(uVar5);
            if (iVar2 != 0) {
              uVar5 = *(undefined4 *)(iVar3 + 0xc);
              if (*(int *)(*piVar8 + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar2 = func_0x01fbb868(uVar5);
              if (iVar2 != 0) {
                func_0x020e8eac(iVar1,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),0);
              }
            }
          }
          func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_01fbb5a0 + 0x1fbb464));
          iVar1 = *piVar8;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar8;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar1 + 0xc);
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (0 < iVar3) {
            func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
          }
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa9d8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1fbb2e0;
    unaff_r4 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar1 = func_0x0229f13c(0xa9cf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  uVar5 = 0;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0);
  iVar3 = *(int *)(iVar1 + 0x10);
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
    uVar5 = 0;
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar5 = 1;
    }
  }
  iVar3 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
  return;
}



// ===== FAT.BoardQuickMergeTool$$Reset RVA 0x1faa7c4 =====

/* WARNING: Possible PIC construction at 0x01fba8bc: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fba7c4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar4 = (char *)(_UNK_01fba910 + 0x1fba7d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fba914 + 0x1fba7ec));
    func_0x01384978(*(undefined4 *)(_UNK_01fba918 + 0x1fba7f8));
    func_0x01384978(*(undefined4 *)(_UNK_01fba91c + 0x1fba804));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9d0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9d0,0);
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
    func_0x01485228(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  piVar5 = *(int **)(_UNK_01fba920 + 0x1fba85c);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  piVar2 = *(int **)(iVar1 + 0x5c);
  iVar1 = *piVar2;
  piVar2[4] = 0;
  piVar2[5] = 0;
  *(char *)(piVar2 + 2) = (char)param_1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar6 < 1) {
    iVar1 = *(int *)(*(int *)(*piVar5 + 0x5c) + 4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar6 < 1) {
      return;
    }
    uVar7 = *(undefined4 *)(iVar1 + 8);
  }
  else {
    uVar7 = *(undefined4 *)(iVar1 + 8);
  }
  (*(code *)0x484e5ec)(uVar7,0,iVar6,0);
  return;
}



// ===== FAT.BoardQuickMergeTool$$_AutoCollectItems RVA 0x1faa924 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fba924(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
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
  
  pcVar4 = (char *)(_UNK_01fbac00 + 0x1fba934);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbac04 + 0x1fba948));
    func_0x01384978(*(undefined4 *)(_UNK_01fbac08 + 0x1fba954));
    func_0x01384978(*(undefined4 *)(_UNK_01fbac0c + 0x1fba960));
    func_0x01384978(*(undefined4 *)(_UNK_01fbac10 + 0x1fba96c));
    func_0x01384978(*(undefined4 *)(_UNK_01fbac14 + 0x1fba978));
    func_0x01384978(*(undefined4 *)(_UNK_01fbac18 + 0x1fba984));
    func_0x01384978(*(undefined4 *)(_UNK_01fbac1c + 0x1fba990));
    func_0x01384978(*(undefined4 *)(_UNK_01fbac20 + 0x1fba99c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9d1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9d1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar7,uVar6,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01dbb000(iVar1,0);
  if ((iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) {
    piVar10 = *(int **)(_UNK_01fbac24 + 0x1fbaa40);
    iVar7 = *piVar10;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = *piVar10;
    }
    iVar7 = **(int **)(iVar7 + 0x5c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar7 + 0xc);
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0145b1dc(*(undefined4 *)(iVar7 + 8),0,iVar3,0);
    }
    piVar8 = *(int **)(_UNK_01fbac28 + 0x1fbaaa4);
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = *piVar8;
    }
    iVar3 = *(int *)(*(int *)(iVar7 + 0x5c) + 4);
    if (iVar3 == 0) {
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar8;
      }
      uVar5 = **(undefined4 **)(iVar7 + 0x5c);
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01fbac2c + 0x1fbaaec));
      func_0x03ccb96c(iVar3,uVar5,**(undefined4 **)(_UNK_01fbac30 + 0x1fbab0c),0);
      *(int *)(*(int *)(*piVar8 + 0x5c) + 4) = iVar3;
    }
    func_0x020dba14(iVar1,iVar3,0);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4(iVar1);
      iVar1 = *piVar10;
    }
    iVar7 = *piVar8;
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = *piVar8;
    }
    iVar3 = *(int *)(*(int *)(iVar7 + 0x5c) + 8);
    if (iVar3 == 0) {
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x01384ab4();
        iVar7 = *piVar8;
      }
      uVar5 = **(undefined4 **)(iVar7 + 0x5c);
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01fbac34 + 0x1fbaba0));
      func_0x03c751dc(iVar3,uVar5,**(undefined4 **)(_UNK_01fbac38 + 0x1fbabc0),0);
      *(int *)(*(int *)(*piVar8 + 0x5c) + 8) = iVar3;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = **(int **)(_UNK_01fbac3c + 0x1fbabf0);
    if (iVar3 == 0) {
      func_0x04839ccc(0x22,0);
    }
    iVar9 = *(int *)(iVar1 + 0xc);
    if (1 < iVar9) {
      uVar5 = *(undefined4 *)(iVar1 + 8);
      iVar2 = *(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0xd0);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uStack_20 = *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0xcc);
      func_0x043920c4(uVar5,0,iVar9,iVar3);
    }
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    return;
  }
  return;
}



// ===== FAT.BoardQuickMergeTool$$_AutoFindMergePairs RVA 0x1faac40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbac40(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01fbb1cc + 0x1fbac54);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbb1d0 + 0x1fbac68));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb1d4 + 0x1fbac74));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb1d8 + 0x1fbac80));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb1dc + 0x1fbac8c));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb1e0 + 0x1fbac98));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb1e4 + 0x1fbaca4));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb1e8 + 0x1fbacb0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9d7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9d7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar6 = 0;
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar6 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar6 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar8,uVar7,&uStack_30,uVar6,0,0);
    return;
  }
  piVar10 = *(int **)(_UNK_01fbb1ec + 0x1fbad08);
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar10;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar8) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar8,0);
  }
  iVar1 = **(int **)(*piVar10 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01dbb000(iVar1,0);
    if (iVar1 != 0) {
      iVar8 = 0;
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 != 0) {
        puVar11 = *(undefined4 **)(_UNK_01fbb1f0 + 0x1fbade0);
        puVar12 = *(undefined4 **)(_UNK_01fbb1f4 + 0x1fbade8);
        while( true ) {
          iVar1 = *piVar10;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar10;
          }
          iVar1 = **(int **)(iVar1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0xc) <= iVar8) break;
          iVar1 = *piVar10;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar10;
          }
          iVar1 = **(int **)(iVar1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x0328eea8(iVar1,iVar8,*puVar11);
          iVar2 = func_0x01fbb868();
          iVar1 = iVar8;
          if (iVar2 == 0) {
            iVar1 = *piVar10;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar10;
            }
            iVar1 = **(int **)(iVar1 + 0x5c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03290900(iVar1,uVar6,*puVar12);
LAB_01fbafa4:
            iVar8 = iVar8 + 1;
          }
          else {
            do {
              while( true ) {
                iVar1 = iVar1 + 1;
                iVar2 = *piVar10;
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar10;
                }
                iVar2 = **(int **)(iVar2 + 0x5c);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                if (*(int *)(iVar2 + 0xc) <= iVar1) goto LAB_01fbafa4;
                iVar2 = *piVar10;
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar10;
                }
                iVar2 = **(int **)(iVar2 + 0x5c);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                uVar7 = func_0x0328eea8(iVar2,iVar1,*puVar11);
                iVar2 = func_0x01fbb868();
                if (iVar2 != 0) break;
                iVar2 = *piVar10;
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar10;
                }
                iVar2 = **(int **)(iVar2 + 0x5c);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290900(iVar2,uVar7,*puVar12);
              }
              iVar2 = func_0x02164a44(uVar6,uVar7,0);
              if (iVar2 != 0) {
                iVar1 = *piVar10;
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar10;
                }
                iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
                uVar3 = func_0x03073fd0(uVar6,uVar7,**(undefined4 **)(_UNK_01fbb1f8 + 0x1fbafd4));
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar1 + 8);
                uVar9 = *(uint *)(iVar1 + 0xc);
                piVar4 = *(int **)(_UNK_01fbb1fc + 0x1fbb01c);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar8 = *piVar4;
                if (iVar2 == 0) {
                  iStack_2c = *piVar4;
                  uStack_28 = uVar3;
                  func_0x01384bf0();
                  iVar8 = iStack_2c;
                  uVar3 = uStack_28;
                }
                if (uVar9 < *(uint *)(iVar2 + 0xc)) {
                  *(uint *)(iVar1 + 0xc) = uVar9 + 1;
                  *(undefined4 *)(iVar2 + uVar9 * 4 + 0x10) = uVar3;
                }
                else {
                  func_0x0328f170(iVar1,uVar3,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
                }
                iVar1 = **(int **)(*piVar10 + 0x5c);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290900(iVar1,uVar6,*puVar12);
                iVar1 = **(int **)(*piVar10 + 0x5c);
                uVar6 = uVar7;
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                goto LAB_01fbb1ac;
              }
              iVar2 = func_0x02164a44(uVar7,uVar6,0);
            } while (iVar2 == 0);
            iVar1 = *piVar10;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar10;
            }
            iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
            uVar3 = func_0x03073fd0(uVar7,uVar6,**(undefined4 **)(_UNK_01fbb200 + 0x1fbb078));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar1 + 8);
            uVar9 = *(uint *)(iVar1 + 0xc);
            piVar4 = *(int **)(_UNK_01fbb204 + 0x1fbb0c0);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar8 = *piVar4;
            if (iVar2 == 0) {
              iStack_2c = *piVar4;
              uStack_28 = uVar3;
              func_0x01384bf0();
              iVar8 = iStack_2c;
              uVar3 = uStack_28;
            }
            if (uVar9 < *(uint *)(iVar2 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar9 + 1;
              *(undefined4 *)(iVar2 + uVar9 * 4 + 0x10) = uVar3;
            }
            else {
              func_0x0328f170(iVar1,uVar3,
                              *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
            }
            iVar1 = **(int **)(*piVar10 + 0x5c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03290900(iVar1,uVar7,*puVar12);
            iVar1 = **(int **)(*piVar10 + 0x5c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
LAB_01fbb1ac:
            func_0x03290900(iVar1,uVar6,*puVar12);
            iVar8 = 0;
          }
        }
      }
    }
  }
  return;
}



// ===== FAT.BoardQuickMergeTool$$_AutoExecuteMerge RVA 0x1fab208 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbb208(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01fbb568 + 0x1fbb21c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbb56c + 0x1fbb230));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb570 + 0x1fbb23c));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb574 + 0x1fbb248));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb578 + 0x1fbb254));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb57c + 0x1fbb260));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb580 + 0x1fbb26c));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb584 + 0x1fbb278));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb588 + 0x1fbb284));
    func_0x01384978(*(undefined4 *)(_UNK_01fbb58c + 0x1fbb290));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xa9d8,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(_UNK_01fbb590 + 0x1fbb2f0);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01dbb000(iVar1,0);
      if ((iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) {
        iVar2 = *piVar7;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_40,iVar2,**(undefined4 **)(_UNK_01fbb594 + 0x1fbb3b4));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar5 = *(undefined4 **)(_UNK_01fbb598 + 0x1fbb3d0);
        while (iVar3 = func_0x03f5f428(&uStack_30,*puVar5), iVar2 = iStack_24, iVar3 != 0) {
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          uVar6 = *(undefined4 *)(iVar2 + 8);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x01fbb868(uVar6);
          if (iVar3 != 0) {
            uVar6 = *(undefined4 *)(iVar2 + 0xc);
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar3 = func_0x01fbb868(uVar6);
            if (iVar3 != 0) {
              func_0x020e8eac(iVar1,*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),0);
            }
          }
        }
        func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_01fbb5a0 + 0x1fbb464));
        iVar1 = *piVar7;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar7;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (0 < iVar2) {
          func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa9d8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174a08(iVar1,0);
  }
  return;
}



// ===== FAT.BoardQuickMergeTool$$SwitchAutoQuickMerge RVA 0x1fab5a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01fbb5a8(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_01fbb658 + 0x1fbb5b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbb65c + 0x1fbb5cc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9d9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9d9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar7,uVar6,&uStack_30,uVar5,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  piVar4 = *(int **)(_UNK_01fbb660 + 0x1fbb620);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  FUN_01fba7c4(*(char *)(*(int *)(iVar1 + 0x5c) + 8) == '\0');
  return (uint)*(byte *)(*(int *)(*piVar4 + 0x5c) + 8);
}



// ===== FAT.BoardQuickMergeTool$$Update RVA 0x1fab664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbb664(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_01fbb850 + 0x1fbb674);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbb854 + 0x1fbb688));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa9da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9da,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar7,uVar6,&uStack_30,uVar5,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01fbb858 + 0x1fbb6dc);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 8) != '\0') {
    pcVar3 = (char *)(_UNK_01fbb85c + 0x1fbb70c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01fbb860 + 0x1fbb720));
      *pcVar3 = '\x01';
    }
    if (**(char **)(**(int **)(_UNK_01fbb864 + 0x1fbb734) + 0x5c) == '\0') {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      iVar7 = *(int *)(iVar1 + 0x5c);
      iVar2 = *(int *)(iVar7 + 0x10) + 1;
      *(int *)(iVar7 + 0x10) = iVar2;
      if (iVar2 < *(int *)(iVar7 + 0xc)) {
        return;
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
        iVar7 = *(int *)(iVar1 + 0x5c);
      }
      *(undefined4 *)(iVar7 + 0x10) = 0;
      switch(*(undefined4 *)(iVar7 + 0x14)) {
      case 0:
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar7 = *(int *)(*piVar4 + 0x5c);
        }
        *(undefined4 *)(iVar7 + 0x14) = 1;
        return;
      case 1:
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01fba924();
        iVar1 = *piVar4;
        uVar5 = 2;
        break;
      case 2:
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01fbac40();
        iVar1 = *piVar4;
        uVar5 = 3;
        break;
      case 3:
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01fbb208();
        iVar1 = *piVar4;
        uVar5 = 1;
        break;
      default:
        goto LAB_01fbb744;
      }
      *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14) = uVar5;
      return;
    }
  }
LAB_01fbb744:
  return;
}



// ===== FAT.BoardQuickMergeTool$$_CheckIsValid RVA 0x1fab868 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01fbb868(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar3 = (char *)(_UNK_01fbb97c + 0x1fbb87c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbb980 + 0x1fbb890));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xa9d5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa9d5,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (param_1 != 0) {
    uVar4 = 0;
    iVar1 = func_0x0210cd28(param_1,0);
    if (iVar1 != 0) {
      uVar4 = 0;
      iVar1 = func_0x02116a8c(param_1,0);
      if (iVar1 == 0) {
        uVar4 = 0;
        iVar1 = func_0x0210e250(param_1,6,0,0);
        if (iVar1 == 0) {
          uVar6 = func_0x0210e2d4(param_1,0);
          if (*(int *)(**(int **)(_UNK_01fbb984 + 0x1fbb954) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar4 = FUN_01dead70(uVar6,0);
          uVar4 = uVar4 ^ 1;
        }
      }
    }
  }
  return uVar4;
}



// ===== FAT.BoardQuickMergeTool$$.cctor RVA 0x1fab988 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbb988(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01fbba70 + 0x1fbb998);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbba74 + 0x1fbb9ac));
    func_0x01384978(*(undefined4 *)(_UNK_01fbba78 + 0x1fbb9b8));
    func_0x01384978(*(undefined4 *)(_UNK_01fbba7c + 0x1fbb9c4));
    func_0x01384978(*(undefined4 *)(_UNK_01fbba80 + 0x1fbb9d0));
    func_0x01384978(*(undefined4 *)(_UNK_01fbba84 + 0x1fbb9dc));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01fbba88 + 0x1fbb9f0));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01fbba8c + 0x1fbba04));
  piVar4 = *(int **)(_UNK_01fbba90 + 0x1fbba18);
  **(undefined4 **)(*piVar4 + 0x5c) = uVar1;
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01fbba94 + 0x1fbba2c));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01fbba98 + 0x1fbba40));
  iVar2 = *(int *)(*piVar4 + 0x5c);
  *(undefined4 *)(iVar2 + 0xc) = 3;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined1 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  return;
}



// ===== FAT.BoardQuickMergeTool.<>c$$.cctor RVA 0x1faba9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbba9c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01fbbaf4 + 0x1fbbaac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbbaf8 + 0x1fbbac0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01fbbafc + 0x1fbbad4);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.BoardQuickMergeTool.<>c$$.ctor RVA 0x1fabb00 =====

void FUN_01fbbb00(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardQuickMergeTool.<>c$$<_AutoCollectItems>b__13_0 RVA 0x1fabb08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbbb08(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int *piVar4;
  undefined4 unaff_r6;
  int iVar5;
  undefined4 unaff_r7;
  uint uVar6;
  undefined4 unaff_r8;
  int iVar7;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_01fbbc04 + 0x1fbbb1c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbbc08 + 0x1fbbb30));
    func_0x01384978(*(undefined4 *)(_UNK_01fbbc0c + 0x1fbbb3c));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01fbbc10 + 0x1fbbb50);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = FUN_01fbb868(param_2);
  if (iVar1 != 0) {
    iVar1 = *piVar4;
    uVar2 = extraout_r3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
      uVar2 = extraout_r3_00;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
      uVar2 = extraout_r3_01;
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(uint *)(iVar1 + 0xc);
    piVar4 = *(int **)(_UNK_01fbbc14 + 0x1fbbbbc);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar7 = *piVar4;
    if (iVar5 == 0) {
      func_0x01384bf0();
      uVar2 = extraout_r3_02;
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      uVar6 = *(uint *)(iVar1 + 0xc);
      func_0x0328f754(iVar1,uVar6 + 1,
                      *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38) +
                                         0x10) + 0x60) + 0x3c),uVar2,unaff_r4,unaff_r5,unaff_r6,
                      unaff_r7,unaff_r8,unaff_lr);
      iVar5 = *(int *)(iVar1 + 8);
      *(uint *)(iVar1 + 0xc) = uVar6 + 1;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar6) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = param_2;
      return;
    }
    *(uint *)(iVar1 + 0xc) = uVar6 + 1;
    *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = param_2;
  }
  return;
}



// ===== FAT.BoardQuickMergeTool.<>c$$<_AutoCollectItems>b__13_1 RVA 0x1fabc18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01fbbc18(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 uStack_11;
  
  pcVar2 = (char *)(_UNK_01fbbcbc + 0x1fbbc34);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01fbbcc0 + 0x1fbbc48));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_11 = func_0x02116ae0(param_2,0);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x02116ae0(param_3,0);
  if (*(int *)(**(int **)(_UNK_01fbbcc4 + 0x1fbbc94) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0245277c(&uStack_11,uVar1,0);
  return;
}


