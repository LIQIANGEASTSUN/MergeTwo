/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardToBag$$_Clear RVA 0x1c3b55c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4b55c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01c4b760 + 0x1c4b574);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4b764 + 0x1c4b588));
    func_0x01384978(*(undefined4 *)(_UNK_01c4b768 + 0x1c4b594));
    func_0x01384978(*(undefined4 *)(_UNK_01c4b76c + 0x1c4b5a0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x933b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x933b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01c4b770 + 0x1c4b62c);
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  uVar6 = func_0x01384be4(*puVar7);
  iVar4 = 0;
  func_0x02450194(uVar6,param_1,**(undefined4 **)(_UNK_01c4b774 + 0x1c4b650),0);
  iVar5 = func_0x024507f8(uVar2,uVar6,0);
  if (iVar5 != 0) {
    uVar6 = *puVar7;
    iVar4 = func_0x01384ab8(iVar5,uVar6);
    if (iVar4 == 0) {
      func_0x01384fb4(iVar5,uVar6);
      iVar4 = 0;
    }
  }
  *(int *)(iVar1 + 0x10) = iVar4;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 != 0) {
    func_0x01f038c4(iVar1,0,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 != 0) {
    func_0x01f02ecc(iVar1,0);
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4b778 + 0x1c4b728));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x01de9578(iVar1,0,0,0);
  return;
}



// ===== FAT.GuideActImpBoardToBag$$_OnItemPutIntoInventory RVA 0x1c3b77c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4b77c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x933d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x933d,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  pcVar3 = (char *)(_UNK_01c4b760 + 0x1c4b574);
  uStack_20 = unaff_r4;
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4b764 + 0x1c4b588));
    func_0x01384978(*(undefined4 *)(_UNK_01c4b768 + 0x1c4b594));
    func_0x01384978(*(undefined4 *)(_UNK_01c4b76c + 0x1c4b5a0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x933b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x933b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = uStack_20;
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01c4b770 + 0x1c4b62c);
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  uVar6 = func_0x01384be4(*puVar7);
  iVar4 = 0;
  func_0x02450194(uVar6,param_1,**(undefined4 **)(_UNK_01c4b774 + 0x1c4b650),0);
  iVar5 = func_0x024507f8(uVar2,uVar6,0);
  if (iVar5 != 0) {
    uVar6 = *puVar7;
    iVar4 = func_0x01384ab8(iVar5,uVar6);
    if (iVar4 == 0) {
      func_0x01384fb4(iVar5,uVar6);
      iVar4 = 0;
    }
  }
  *(int *)(iVar1 + 0x10) = iVar4;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 != 0) {
    func_0x01f038c4(iVar1,0,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 != 0) {
    func_0x01f02ecc(iVar1,0);
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4b778 + 0x1c4b728));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x01de9578(iVar1,0,0,0);
  return;
}



// ===== FAT.GuideActImpBoardToBag$$Clear RVA 0x1c3b7dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4b7dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  iVar1 = func_0x0229f06c(0x933f,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01c4b760 + 0x1c4b574);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c4b764 + 0x1c4b588));
      func_0x01384978(*(undefined4 *)(_UNK_01c4b768 + 0x1c4b594));
      func_0x01384978(*(undefined4 *)(_UNK_01c4b76c + 0x1c4b5a0));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x933b,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 8) = 0;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x9c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar7 = *(undefined4 **)(_UNK_01c4b770 + 0x1c4b62c);
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
      uVar6 = func_0x01384be4(*puVar7);
      iVar4 = 0;
      func_0x02450194(uVar6,param_1,**(undefined4 **)(_UNK_01c4b774 + 0x1c4b650),0);
      iVar5 = func_0x024507f8(uVar2,uVar6,0);
      if (iVar5 != 0) {
        uVar6 = *puVar7;
        iVar4 = func_0x01384ab8(iVar5,uVar6);
        if (iVar4 == 0) {
          func_0x01384fb4(iVar5,uVar6);
          iVar4 = 0;
        }
      }
      *(int *)(iVar1 + 0x10) = iVar4;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x9c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 != 0) {
        func_0x01f038c4(iVar1,0,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x9c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 != 0) {
        func_0x01f02ecc(iVar1,0);
      }
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4b778 + 0x1c4b728));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      func_0x01de9578(iVar1,0,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x933b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x933f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  return;
}



// ===== FAT.GuideActImpBoardToBag$$Play RVA 0x1c3b834 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4b834(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01c4c0c4 + 0x1c4b850);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0c8 + 0x1c4b864));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0cc + 0x1c4b870));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0d0 + 0x1c4b87c));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0d4 + 0x1c4b888));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0d8 + 0x1c4b894));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0dc + 0x1c4b8a0));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0e0 + 0x1c4b8ac));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0e4 + 0x1c4b8b8));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0e8 + 0x1c4b8c4));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0ec + 0x1c4b8d0));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0f0 + 0x1c4b8dc));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0f4 + 0x1c4b8e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0f8 + 0x1c4b8f4));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c0fc + 0x1c4b900));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c100 + 0x1c4b90c));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c104 + 0x1c4b918));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c108 + 0x1c4b924));
    func_0x01384978(*(undefined4 *)(_UNK_01c4c10c + 0x1c4b930));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9340,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9340,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
    return;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4c110 + 0x1c4b994));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020da680(&iStack_30,iVar1,0);
  iVar6 = iStack_30;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar17 = 0;
  func_0x020da680(&iStack_30,iVar1,0);
  iVar11 = iStack_2c;
  if (0 < iVar6) {
    iVar13 = 0;
    puVar15 = *(undefined4 **)(_UNK_01c4c114 + 0x1c4ba10);
    do {
      if (iVar11 < 1) {
        iVar12 = 1;
      }
      else {
        iVar10 = 0;
        do {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x020e81ec(iVar1,iVar13,iVar10,0);
          iVar12 = 1;
          if (((iVar2 != 0) && (iVar3 = func_0x02116ae0(iVar2,0), iVar3 != 0)) &&
             (iVar3 = func_0x02168930(iVar2,0), iVar3 == 0)) {
            iVar4 = func_0x02feb690(iVar2,&iStack_28,0,*puVar15);
            iVar3 = iStack_28;
            if (iVar17 == 0) {
              iVar17 = iVar2;
            }
            if (iVar4 != 0) {
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x0211dc48(iVar3,0);
              if (iVar3 != 0) goto LAB_01c4bb58;
            }
            iVar3 = func_0x0210e250(iVar2,5,0,0);
            if (((iVar3 == 0) && (iVar3 = func_0x0210e250(iVar2,3,0,0), iVar3 == 0)) &&
               ((iVar3 = func_0x0210e250(iVar2,7,0,0), iVar3 == 0 &&
                ((iVar3 = func_0x0210e250(iVar2,2,0,0), iVar3 == 0 &&
                 (iVar12 = func_0x0210e250(iVar2,1,0,0), iVar12 == 0)))))) {
              iVar17 = iVar2;
            }
          }
LAB_01c4bb58:
          iVar10 = iVar10 + 1;
        } while ((iVar10 < iVar11) && (iVar12 != 0));
      }
      iVar13 = iVar13 + 1;
    } while ((iVar13 < iVar6) && (iVar12 != 0));
    if (iVar17 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x9c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x01c7a348(iVar1,param_2,0);
      if (*(int *)(**(int **)(_UNK_01c4c120 + 0x1c4bbe0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0244fb8c(uVar5,0,0);
      if (iVar1 == 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x9c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 != 0) {
          iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01c4c12c + 0x1c4bcb4));
          func_0x03258eb8(iVar6,**(undefined4 **)(_UNK_01c4c130 + 0x1c4bcc8));
          uVar7 = func_0x0210e2d4(iVar17,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar13 = *(int *)(iVar6 + 8);
          uVar14 = *(uint *)(iVar6 + 0xc);
          piVar8 = *(int **)(_UNK_01c4c134 + 0x1c4bd0c);
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          iVar11 = *piVar8;
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          if (uVar14 < *(uint *)(iVar13 + 0xc)) {
            *(uint *)(iVar6 + 0xc) = uVar14 + 1;
            *(undefined4 *)(iVar13 + uVar14 * 4 + 0x10) = uVar7;
          }
          else {
            func_0x0325970c(iVar6,uVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
          iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01c4c138 + 0x1c4bd5c));
          func_0x0328e950(iVar11,**(undefined4 **)(_UNK_01c4c13c + 0x1c4bd70));
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar13 = *(int *)(iVar11 + 8);
          uVar14 = *(uint *)(iVar11 + 0xc);
          piVar8 = *(int **)(_UNK_01c4c140 + 0x1c4bda4);
          *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
          iVar12 = *piVar8;
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          if (uVar14 < *(uint *)(iVar13 + 0xc)) {
            *(uint *)(iVar11 + 0xc) = uVar14 + 1;
            *(undefined4 *)(iVar13 + uVar14 * 4 + 0x10) = uVar5;
          }
          else {
            func_0x0328f170(iVar11,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
          func_0x01f03938(iVar1,iVar6,iVar11,0x3f000000,0,0);
        }
        func_0x01c872f4(&iStack_30,0,uVar5,0);
        iVar6 = iStack_2c;
        iVar1 = iStack_30;
        if (*(int *)(**(int **)(_UNK_01c4c144 + 0x1c4be28) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dd8b7c(&iStack_30,iVar1,iVar6,0);
        if (*(int *)(**(int **)(_UNK_01c4c148 + 0x1c4be60) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01c4c14c + 0x1c4be84));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x034a2950(iVar1,iVar17,iStack_30,iStack_2c,
                        **(undefined4 **)(_UNK_01c4c150 + 0x1c4beb0));
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x9c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        puVar16 = *(undefined4 **)(_UNK_01c4c154 + 0x1c4bef4);
        uVar7 = *(undefined4 *)(iVar1 + 0x10);
        uVar5 = func_0x01384be4(*puVar16);
        iVar11 = 0;
        puVar15 = *(undefined4 **)(_UNK_01c4c158 + 0x1c4bf18);
        func_0x02450194(uVar5,param_1,*puVar15,0);
        iVar6 = func_0x024507f8(uVar7,uVar5,0);
        if (iVar6 != 0) {
          uVar5 = *puVar16;
          iVar11 = func_0x01384ab8(iVar6,uVar5);
          if (iVar11 == 0) {
            func_0x01384fb4(iVar6,uVar5);
            iVar11 = 0;
          }
        }
        *(int *)(iVar1 + 0x10) = iVar11;
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x9c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(iVar1 + 0x10);
        uVar5 = func_0x01384be4(*puVar16);
        iVar11 = 0;
        func_0x02450194(uVar5,param_1,*puVar15,0);
        iVar6 = func_0x024507e8(uVar7,uVar5,0);
        if (iVar6 != 0) {
          uVar5 = *puVar16;
          iVar11 = func_0x01384ab8(iVar6,uVar5);
          if (iVar11 == 0) {
            func_0x01384fb4(iVar6,uVar5);
            iVar11 = 0;
          }
        }
        *(int *)(iVar1 + 0x10) = iVar11;
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x9c);
        puVar15 = *(undefined4 **)(_UNK_01c4c15c + 0x1c4c024);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 != 0) {
          iVar6 = func_0x03668dfc(*puVar15);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x01ddbed8(iVar6,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar5 = func_0x01f0908c(iVar6,0);
          func_0x01f038c4(iVar1,uVar5,0);
        }
        iVar1 = func_0x03668dfc(*puVar15);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01de9578(iVar1,0,0,4,0);
        *(undefined1 *)(param_1 + 8) = 1;
        return;
      }
      if (*(int *)(**(int **)(_UNK_01c4c124 + 0x1c4bc14) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puVar15 = *(undefined4 **)(_UNK_01c4c128 + 0x1c4bc30);
      goto LAB_01c4bc54;
    }
  }
  if (*(int *)(**(int **)(_UNK_01c4c118 + 0x1c4bc3c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  puVar15 = *(undefined4 **)(_UNK_01c4c11c + 0x1c4bc58);
LAB_01c4bc54:
  func_0x028c2874(*puVar15,0);
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.GuideActImpBoardToBag$$.ctor RVA 0x1c3c160 =====

void FUN_01c4c160(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardToBag$$<>iFixBaseProxy_Clear RVA 0x1c3c170 =====

void thunk_FUN_01c47b34(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x92e0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x92e0,0);
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



// ===== FAT.GuideActImpBoardToBag$$<>iFixBaseProxy_Play RVA 0x1c3c174 =====

void thunk_FUN_01c47208(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x92e1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x92e1,0);
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
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}


