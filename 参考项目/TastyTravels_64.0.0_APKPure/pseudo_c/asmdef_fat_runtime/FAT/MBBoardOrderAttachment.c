/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardOrderAttachment$$get_HasLoaded RVA 0x1f6b348 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7b348(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  
  pcVar3 = (char *)(_UNK_01f7b3f0 + 0x1f7b35c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7b3f4 + 0x1f7b370));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa61c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa61c,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_01f7b3f8 + 0x1f7b3c8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  (*(code *)&SUB_05190404)(uVar5,0,0);
  return;
}



// ===== FAT.MBBoardOrderAttachment$$get_AttachedObject RVA 0x1f6b3fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f7b3fc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x400b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x400b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021a98a4 + 0x21a97c4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a98a8 + 0x21a97d8),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a98ac + 0x21a9894));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MBBoardOrderAttachment$$get_poolKey RVA 0x1f6b450 =====

undefined4 FUN_01f7b450(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardOrderAttachment$$set_poolKey RVA 0x1f6b458 =====

void FUN_01f7b458(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.MBBoardOrderAttachment$$Clear RVA 0x1f6b460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7b460(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01f7b56c + 0x1f7b474);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7b570 + 0x1f7b488));
    func_0x01384978(*(undefined4 *)(_UNK_01f7b574 + 0x1f7b494));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa61d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa61d,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_01f7b578 + 0x1f7b4ec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f7b57c + 0x1f7b528));
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244adcc(iVar1,uVar5,uVar2,0);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// ===== FAT.MBBoardOrderAttachment$$OnPrefabLoaded RVA 0x1f6b580 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7b580(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01f7b860 + 0x1f7b5a0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7b864 + 0x1f7b5b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f7b868 + 0x1f7b5c4));
    func_0x01384978(*(undefined4 *)(_UNK_01f7b86c + 0x1f7b5d0));
    func_0x01384978(*(undefined4 *)(_UNK_01f7b870 + 0x1f7b5dc));
    func_0x01384978(*(undefined4 *)(_UNK_01f7b874 + 0x1f7b5e8));
    func_0x01384978(*(undefined4 *)(_UNK_01f7b878 + 0x1f7b5f4));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa623,0);
  if (iVar2 == 0) {
    iVar2 = func_0x02451820(*(undefined4 *)(param_1 + 0x10),param_3,0);
    if (iVar2 == 0) {
      iVar2 = func_0x01384a00(**(undefined4 **)(_UNK_01f7b87c + 0x1f7b74c),5);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar9 = **(undefined4 **)(_UNK_01f7b880 + 0x1f7b76c);
      uVar4 = *(uint *)(iVar2 + 0xc);
      if (uVar4 == 0) {
        func_0x01384bf4();
        uVar4 = *(uint *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar9;
      uVar9 = *(undefined4 *)(param_1 + 0x10);
      if (uVar4 < 2) {
        func_0x01384bf4();
        uVar4 = *(uint *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0x14) = uVar9;
      uVar9 = **(undefined4 **)(_UNK_01f7b884 + 0x1f7b7ac);
      if (uVar4 < 3) {
        func_0x01384bf4();
        uVar4 = *(uint *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0x18) = uVar9;
      if (uVar4 < 4) {
        func_0x01384bf4();
        uVar4 = *(uint *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0x1c) = param_3;
      uVar9 = **(undefined4 **)(_UNK_01f7b888 + 0x1f7b7e0);
      if (uVar4 < 5) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar2 + 0x20) = uVar9;
      uVar9 = func_0x0245088c(iVar2,0);
      if (*(int *)(**(int **)(_UNK_01f7b88c + 0x1f7b808) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar9,0);
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01f7b890 + 0x1f7b830));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0229f06c(0x398,0,param_2,0);
      if (iVar5 != 0) {
        iVar5 = func_0x0229f13c(0x398,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x02174858(iVar5,iVar2,param_3,param_2);
        return;
      }
      pcVar8 = (char *)(_UNK_0244b9c0 + 0x244b6a0);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0244b9c4 + 0x244b6b4));
        func_0x01384978(*(undefined4 *)(_UNK_0244b9c8 + 0x244b6c0));
        func_0x01384978(*(undefined4 *)(_UNK_0244b9cc + 0x244b6cc));
        func_0x01384978(*(undefined4 *)(_UNK_0244b9d0 + 0x244b6d8));
        func_0x01384978(*(undefined4 *)(_UNK_0244b9d4 + 0x244b6e4));
        *pcVar8 = '\x01';
      }
      iStack_28 = 0;
      iVar5 = func_0x0229f06c(0x399,0);
      if (iVar5 == 0) {
        iVar5 = func_0x014898a8(0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x02454fb4(iVar5,0);
        func_0x0244d6e4(iVar2,**(undefined4 **)(_UNK_0244b9dc + 0x244b788),param_3,uVar9,
                        *(int *)(**(int **)(_UNK_0244b9d8 + 0x244b77c) + 0x5c) + 4);
        piVar11 = *(int **)(_UNK_0244b9e0 + 0x244b7a8);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = func_0x0244fb8c(param_2,0,0);
        if (iVar5 == 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02fe27b8(param_2,**(undefined4 **)(_UNK_0244b9e4 + 0x244b7e8));
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar6 = func_0x0244fb8c(iVar5,0,0);
          if (iVar6 == 0) {
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar6 = func_0x01489db8(*(undefined4 *)(iVar5 + 0x10),0);
            if (iVar6 == 0) {
              iVar6 = *(int *)(iVar2 + 0x14);
              uVar9 = *(undefined4 *)(iVar5 + 0x10);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              iVar6 = func_0x03e220bc(iVar6,uVar9,&iStack_28,
                                      **(undefined4 **)(_UNK_0244b9e8 + 0x244b880));
              if (iVar6 != 0) {
                iVar7 = func_0x014855c8(param_3,*(undefined4 *)(iVar5 + 0x10),4,0);
                iVar6 = iStack_28;
                if (iVar7 == 0) {
                  if (iStack_28 == 0) {
                    func_0x01384bf0();
                  }
                  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
                }
                iVar6 = iStack_28;
                iVar7 = *(int *)(iVar5 + 0x14);
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = iStack_28;
                if (iVar7 == *(int *)(iVar6 + 0xc)) {
                  if (*(char *)(iVar5 + 0x18) == '\0') {
                    if (iStack_28 == 0) {
                      func_0x01384bf0();
                    }
                    iVar6 = iStack_28;
                    if (0 < *(int *)(iVar1 + 0x20)) {
                      if (iStack_28 == 0) {
                        func_0x01384bf0(*(int *)(iVar1 + 0x20),0);
                      }
                      *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + -1;
                      func_0x0244e788(iVar2,iStack_28,param_2,iVar5);
                      return;
                    }
                  }
                  iVar2 = iStack_28;
                  if (iStack_28 == 0) {
                    func_0x01384bf0();
                  }
                  *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
                  return;
                }
                if (iStack_28 == 0) {
                  func_0x01384bf0(*(int *)(iVar6 + 0xc),0);
                }
                *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + 1;
                func_0x0244e63c(iVar2,iStack_28,param_2);
                return;
              }
              if (*(int *)(*piVar11 + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x01485348(param_2,0);
              return;
            }
          }
          func_0x0244e540(iVar2,param_3,param_2);
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x399,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x02174858(iVar5,iVar2,param_3,param_2,0);
      }
      return;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x024504c0(param_2,0);
    pcVar8 = (char *)(_UNK_01f7b894 + 0x1f7b694);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f7b898 + 0x1f7b6a8));
      *pcVar8 = '\x01';
    }
    puVar3 = *(undefined4 **)(**(int **)(_UNK_01f7b89c + 0x1f7b6c0) + 0x5c);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    uVar12 = puVar3[2];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0245068c(iVar2,uVar9,uVar10,uVar12,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(param_2,1,0);
    *(undefined4 *)(param_1 + 0xc) = param_3;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x14) = param_2;
    if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01f7b738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_4 + 0xc))
                (*(undefined4 *)(param_4 + 0x20),param_2,*(undefined4 *)(param_4 + 0x14));
      return;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa623,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardOrderAttachment$$RefreshAttachment RVA 0x1f6b8a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7b8a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01f7ba70 + 0x1f7b8c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7ba74 + 0x1f7b8d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f7ba78 + 0x1f7b8e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f7ba7c + 0x1f7b8f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f7ba80 + 0x1f7b8fc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa620,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f7ba84 + 0x1f7b964));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    *(int *)(iVar1 + 8) = param_1;
    iVar3 = func_0x02451820(uVar2,param_2,0);
    if (iVar3 == 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)(param_1 + 8) = param_3;
      iVar3 = func_0x02451820(*(undefined4 *)(param_1 + 0x10),uVar2,0);
      if (iVar3 == 0) {
        FUN_01f7b460(param_1);
        puVar4 = *(undefined4 **)(_UNK_01f7ba88 + 0x1f7ba00);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
        iVar3 = func_0x034aaa34(*puVar4);
        uVar6 = *(undefined4 *)(iVar1 + 0xc);
        uVar7 = *(undefined4 *)(param_1 + 8);
        uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01f7ba8c + 0x1f7ba20));
        func_0x03ccb96c(uVar2,iVar1,**(undefined4 **)(_UNK_01f7ba90 + 0x1f7ba40),0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0244a2c0(iVar3,uVar6,uVar7,uVar2,0);
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01f7b9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(param_1 + 0x14),
                   *(undefined4 *)(iVar1 + 0x14));
        return;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa620,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardOrderAttachment.<>c__DisplayClass13_0$$.ctor RVA 0x1f6ba94 =====

void FUN_01f7ba94(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrderAttachment$$.ctor RVA 0x1f6ba9c =====

void FUN_01f7ba9c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardOrderAttachment.<>c__DisplayClass13_0$$<RefreshAttachment>b__0 RVA 0x1f6baa4 =====

void FUN_01f7baa4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01f7b580(iVar3,param_2,uVar1,uVar2);
  return;
}


