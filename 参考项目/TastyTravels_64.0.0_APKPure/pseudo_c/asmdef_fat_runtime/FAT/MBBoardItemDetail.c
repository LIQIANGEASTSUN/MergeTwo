/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardItemDetail$$nameColorId RVA 0x1f0b304 =====

undefined4 FUN_01f1b304(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xa583,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa583,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  uVar4 = 3;
  if (param_2 != 0) {
    uVar4 = 4;
  }
  return uVar4;
}



// ===== FAT.MBBoardItemDetail$$descColorId RVA 0x1f0b368 =====

undefined4 FUN_01f1b368(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xa584,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa584,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  uVar4 = 5;
  if (param_2 != 0) {
    uVar4 = 6;
  }
  return uVar4;
}



// ===== FAT.MBBoardItemDetail$$Setup RVA 0x1f0b3cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1b3cc(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01f1b81c + 0x1f1b3e4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1b820 + 0x1f1b3f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b824 + 0x1f1b404));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b828 + 0x1f1b410));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b82c + 0x1f1b41c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b830 + 0x1f1b428));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b834 + 0x1f1b434));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b838 + 0x1f1b440));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b83c + 0x1f1b44c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b840 + 0x1f1b458));
    func_0x01384978(*(undefined4 *)(_UNK_01f1b844 + 0x1f1b464));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x775a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x775a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&iStack_30,uVar5,0,0);
    return;
  }
  iVar1 = func_0x024391cc(*(undefined4 *)(param_1 + 0x28),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_01f1b848 + 0x1f1b4dc);
  iVar1 = *(int *)(iVar1 + 0xb4);
  uVar9 = func_0x01384be4(*puVar10);
  func_0x0244ffa0(uVar9,param_1,**(undefined4 **)(_UNK_01f1b84c + 0x1f1b4fc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffb0(iVar1,uVar9,0);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024391cc(*(undefined4 *)(iVar1 + 0xc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xb4);
  uVar9 = func_0x01384be4(*puVar10);
  func_0x0244ffa0(uVar9,param_1,**(undefined4 **)(_UNK_01f1b850 + 0x1f1b570),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffb0(iVar1,uVar9,0);
  iVar1 = 0;
  piVar6 = *(int **)(_UNK_01f1b854 + 0x1f1b5a8);
  do {
    iStack_30 = *piVar6;
    iVar8 = *(int *)(param_1 + 0x10);
    uStack_2c = 0xffffffff;
    iStack_28 = iVar1;
    uVar9 = func_0x0244f5f4(&iStack_30,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x02450178(iVar8,uVar9,0);
    if (*(int *)(**(int **)(_UNK_01f1b858 + 0x1f1b5f0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0145b1cc(iVar8,0,0);
    if (iVar2 == 0) {
      iVar8 = *(int *)(param_1 + 0x34);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar8 + 8);
      uVar11 = *(uint *)(iVar8 + 0xc);
      piVar3 = *(int **)(_UNK_01f1b864 + 0x1f1b6f0);
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
      iVar2 = *piVar3;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      if (uVar11 < *(uint *)(iVar12 + 0xc)) {
        *(uint *)(iVar8 + 0xc) = uVar11 + 1;
        *(undefined4 *)(iVar12 + uVar11 * 4 + 0x10) = 0;
      }
      else {
        func_0x0328f170(iVar8,0,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
      }
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1b868 + 0x1f1b76c),1);
      iStack_30 = iVar1;
      iVar8 = func_0x01384abc(*piVar6,&iStack_30);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar8 != 0) &&
         (iVar2 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar8;
      if (*(int *)(**(int **)(_UNK_01f1b86c + 0x1f1b7e0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02451838(**(undefined4 **)(_UNK_01f1b870 + 0x1f1b804),piVar3,0);
    }
    else {
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x02f67194(iVar8,**(undefined4 **)(_UNK_01f1b85c + 0x1f1b630));
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
      iVar8 = *(int *)(param_1 + 0x34);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar8 + 8);
      uVar11 = *(uint *)(iVar8 + 0xc);
      piVar4 = *(int **)(_UNK_01f1b860 + 0x1f1b68c);
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
      iVar2 = *piVar4;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      if (uVar11 < *(uint *)(iVar12 + 0xc)) {
        *(uint *)(iVar8 + 0xc) = uVar11 + 1;
        *(int **)(iVar12 + uVar11 * 4 + 0x10) = piVar3;
      }
      else {
        func_0x0328f170(iVar8,piVar3,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 9);
  return;
}



// ===== FAT.MBBoardItemDetail$$InitOnPreOpen RVA 0x1f0b874 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1b874(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
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
  
  pcVar4 = (char *)(_UNK_01f1bee4 + 0x1f1b88c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1bee8 + 0x1f1b8a0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1beec + 0x1f1b8ac));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bef0 + 0x1f1b8b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bef4 + 0x1f1b8c4));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bef8 + 0x1f1b8d0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1befc + 0x1f1b8dc));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf00 + 0x1f1b8e8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf04 + 0x1f1b8f4));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf08 + 0x1f1b900));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf0c + 0x1f1b90c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf10 + 0x1f1b918));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf14 + 0x1f1b924));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf18 + 0x1f1b930));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf1c + 0x1f1b93c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf20 + 0x1f1b948));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf24 + 0x1f1b954));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf28 + 0x1f1b960));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf2c + 0x1f1b96c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf30 + 0x1f1b978));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf34 + 0x1f1b984));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf38 + 0x1f1b990));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf3c + 0x1f1b99c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf40 + 0x1f1b9a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1bf44 + 0x1f1b9b4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7610,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7610,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  puVar8 = *(undefined4 **)(_UNK_01f1bf48 + 0x1f1ba14);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar1 = func_0x03668dfc(*puVar8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01f1bf4c + 0x1f1ba3c);
  iVar1 = *(int *)(iVar1 + 0x78);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01f1bf50 + 0x1f1ba5c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x021415c0(iVar1,uVar6,0);
  iVar1 = func_0x03668dfc(*puVar8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01f1bf54 + 0x1f1babc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02141460(iVar1,uVar6,0);
  iVar1 = func_0x03668dfc(*puVar8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01f1bf58 + 0x1f1bb1c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02141300(iVar1,uVar6,0);
  iVar1 = func_0x03668dfc(*puVar8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01f1bf5c + 0x1f1bb84));
  func_0x03cd51ec(uVar6,param_1,**(undefined4 **)(_UNK_01f1bf60 + 0x1f1bba0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8a00(iVar1,uVar6,0);
  iVar1 = func_0x03668dfc(*puVar8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01f1bf64 + 0x1f1bc1c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d97c0(iVar1,uVar6,0);
  if (*(int *)(**(int **)(_UNK_01f1bf68 + 0x1f1bc4c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1bf6c + 0x1f1bc68));
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01f1bf70 + 0x1f1bc90),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e80c(iVar1,uVar6,**(undefined4 **)(_UNK_01f1bf74 + 0x1f1bcb4));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1bf78 + 0x1f1bcc8));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01f1bf7c + 0x1f1bcdc));
  func_0x03ccabbc(uVar6,param_1,**(undefined4 **)(_UNK_01f1bf80 + 0x1f1bcf8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e140(iVar1,uVar6,**(undefined4 **)(_UNK_01f1bf84 + 0x1f1bd1c));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1bf88 + 0x1f1bd30));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01f1bf8c + 0x1f1bd44));
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01f1bf90 + 0x1f1bd60),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028be400(iVar1,uVar6,0);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1bf94 + 0x1f1bd90));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01f1bf98 + 0x1f1bda4));
  func_0x03ccab14(uVar6,param_1,**(undefined4 **)(_UNK_01f1bf9c + 0x1f1bdc0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349dde4(iVar1,uVar6,**(undefined4 **)(_UNK_01f1bfa0 + 0x1f1bde4));
  func_0x01f1bfa8(param_1);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dbb564(iVar1,0);
  if (iVar1 != 0) {
    iVar5 = func_0x0210cd28(iVar1,0);
    iVar2 = func_0x03668dfc(*puVar8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (iVar5 == *(int *)(iVar2 + 0x7c)) {
      func_0x0210cd7c(&uStack_20,iVar1,0);
      iVar1 = func_0x03668dfc(*puVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01de3508(iVar1,uStack_20,uStack_1c,0);
      goto LAB_01f1beb0;
    }
  }
  func_0x01f1c1a4(param_1);
LAB_01f1beb0:
  if (*(int *)(**(int **)(_UNK_01f1bfa4 + 0x1f1bebc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01dea89c(0,param_1,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_ClearUsage RVA 0x1f0bfa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1bfa8(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  
  pcVar3 = (char *)(_UNK_01f1c17c + 0x1f1bfc0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1c180 + 0x1f1bfd4));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c184 + 0x1f1bfe0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c188 + 0x1f1bfec));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c18c + 0x1f1bff8));
    *pcVar3 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_14 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar2 = func_0x0229f06c(0x763b,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_20,iVar2,**(undefined4 **)(_UNK_01f1c190 + 0x1f1c084));
    puVar4 = *(undefined4 **)(_UNK_01f1c194 + 0x1f1c098);
    while (iVar2 = func_0x0145b12c(&uStack_20,*puVar4), piVar1 = piStack_14, iVar2 != 0) {
      if (piStack_14 != (int *)0x0) {
        (**(code **)(*piStack_14 + 0xf8))(piStack_14,*(undefined4 *)(*piStack_14 + 0xfc));
        func_0x022a2a80(piVar1,0);
      }
    }
    func_0x0145b14c(&uStack_20,**(undefined4 **)(_UNK_01f1c19c + 0x1f1c0e4));
  }
  else {
    iVar2 = func_0x0229f13c(0x763b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardItemDetail$$_ShowEmptyInfo RVA 0x1f0c1a4 =====

/* WARNING: Removing unreachable block (ram,0x01f1e6ec) */
/* WARNING: Removing unreachable block (ram,0x01f1e704) */
/* WARNING: Removing unreachable block (ram,0x01f1e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1c1a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  pcVar3 = (char *)(_UNK_01f1c270 + 0x1f1c1bc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1c274 + 0x1f1c1d0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x763e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x763e,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
    return;
  }
  func_0x01f1d820(param_1,0);
  func_0x01f1e764(param_1,0);
  uVar5 = **(undefined4 **)(**(int **)(_UNK_01f1c278 + 0x1f1c244) + 0x5c);
  func_0x01f1e008(param_1,uVar5,uVar5,uVar5);
  pcVar3 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x762a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    (*(code *)&UNK_05189da8)(iVar1,0,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x762a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,0,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$CleanupOnPostClose RVA 0x1f0c27c =====

/* WARNING: Removing unreachable block (ram,0x01f1e6ec) */
/* WARNING: Removing unreachable block (ram,0x01f1e704) */
/* WARNING: Removing unreachable block (ram,0x01f1e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1c27c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar3 = (char *)(_UNK_01f1c7e8 + 0x1f1c290);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1c7ec + 0x1f1c2a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c7f0 + 0x1f1c2b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c7f4 + 0x1f1c2bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c7f8 + 0x1f1c2c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c7fc + 0x1f1c2d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c800 + 0x1f1c2e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c804 + 0x1f1c2ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c808 + 0x1f1c2f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c80c + 0x1f1c304));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c810 + 0x1f1c310));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c814 + 0x1f1c31c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c818 + 0x1f1c328));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c81c + 0x1f1c334));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c820 + 0x1f1c340));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c824 + 0x1f1c34c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c828 + 0x1f1c358));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c82c + 0x1f1c364));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c830 + 0x1f1c370));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c834 + 0x1f1c37c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c838 + 0x1f1c388));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c83c + 0x1f1c394));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c840 + 0x1f1c3a0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1c844 + 0x1f1c3ac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x777b,0);
  if (iVar1 == 0) {
    puVar6 = *(undefined4 **)(_UNK_01f1c848 + 0x1f1c404);
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar7 = *(undefined4 **)(_UNK_01f1c84c + 0x1f1c424);
    iVar1 = *(int *)(iVar1 + 0x78);
    uVar5 = func_0x01384be4(*puVar7);
    func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f1c850 + 0x1f1c444),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141670(iVar1,uVar5,0);
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    uVar5 = func_0x01384be4(*puVar7);
    func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f1c854 + 0x1f1c4a4),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141510(iVar1,uVar5,0);
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    uVar5 = func_0x01384be4(*puVar7);
    func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f1c858 + 0x1f1c504),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021413b0(iVar1,uVar5,0);
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f1c85c + 0x1f1c56c));
    func_0x03cd51ec(uVar5,param_1,**(undefined4 **)(_UNK_01f1c860 + 0x1f1c588),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8ab0(iVar1,uVar5,0);
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    uVar5 = func_0x01384be4(*puVar7);
    func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f1c864 + 0x1f1c604),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9870(iVar1,uVar5,0);
    if (*(int *)(**(int **)(_UNK_01f1c868 + 0x1f1c634) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1c86c + 0x1f1c650));
    uVar5 = func_0x01384be4(*puVar7);
    func_0x03ccb96c(uVar5,param_1,**(undefined4 **)(_UNK_01f1c870 + 0x1f1c678),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349ea64(iVar1,uVar5,**(undefined4 **)(_UNK_01f1c874 + 0x1f1c69c));
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1c878 + 0x1f1c6b0));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f1c87c + 0x1f1c6c4));
    func_0x03ccabbc(uVar5,param_1,**(undefined4 **)(_UNK_01f1c880 + 0x1f1c6e0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e398(iVar1,uVar5,**(undefined4 **)(_UNK_01f1c884 + 0x1f1c704));
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1c888 + 0x1f1c718));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f1c88c + 0x1f1c72c));
    func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_01f1c890 + 0x1f1c748),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028beac8(iVar1,uVar5,0);
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f1c894 + 0x1f1c778));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f1c898 + 0x1f1c78c));
    func_0x03ccab14(uVar5,param_1,**(undefined4 **)(_UNK_01f1c89c + 0x1f1c7a8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e03c(iVar1,uVar5,**(undefined4 **)(_UNK_01f1c8a0 + 0x1f1c7cc));
    FUN_01f1bfa8(param_1);
    pcVar3 = (char *)(_UNK_01f1c270 + 0x1f1c1bc);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1c274 + 0x1f1c1d0));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x763e,0);
    if (iVar1 == 0) {
      func_0x01f1d820(param_1,0);
      func_0x01f1e764(param_1,0);
      uVar5 = **(undefined4 **)(**(int **)(_UNK_01f1c278 + 0x1f1c244) + 0x5c);
      func_0x01f1e008(param_1,uVar5,uVar5,uVar5);
      pcVar3 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x762a,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x762a,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485278(&uStack_38,0,0);
        iVar4 = *(int *)(iVar1 + 8);
        uVar5 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 3;
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
        return;
      }
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189da8)(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x763e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x777b,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
  return;
}



// ===== FAT.MBBoardItemDetail$$Update RVA 0x1f0c8a4 =====

/* WARNING: Possible PIC construction at 0x01f1c04c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f1c050) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1c8a4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_01f1ca94 + 0x1f1c8b8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1ca98 + 0x1f1c8cc));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ca9c + 0x1f1c8d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1caa0 + 0x1f1c8e4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa585,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((iVar1 == 0) ||
       ((*(char *)(param_1 + 0x3c) == '\0' &&
        ((iVar3 = func_0x02116a8c(iVar1,0), iVar3 != 0 ||
         (iVar3 = func_0x0210cd28(iVar1,0), iVar3 == 0)))))) {
      if (0 < *(int *)(param_1 + 0x40)) {
        pcVar5 = (char *)(_UNK_01f1c17c + 0x1f1bfc0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f1c180 + 0x1f1bfd4));
          func_0x01384978(*(undefined4 *)(_UNK_01f1c184 + 0x1f1bfe0));
          func_0x01384978(*(undefined4 *)(_UNK_01f1c188 + 0x1f1bfec));
          func_0x01384978(*(undefined4 *)(_UNK_01f1c18c + 0x1f1bff8));
          *pcVar5 = '\x01';
        }
        piVar8 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        unaff_r6 = 0;
        iVar1 = func_0x0229f06c(0x763b,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x34);
          *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x38) = 0;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0328fe1c(&stack0xffffffe0,iVar1,**(undefined4 **)(_UNK_01f1c190 + 0x1f1c084));
          puVar7 = *(undefined4 **)(_UNK_01f1c194 + 0x1f1c098);
          while (iVar1 = func_0x0145b12c(&stack0xffffffe0,*puVar7), iVar1 != 0) {
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0xf8))(piVar8,*(undefined4 *)(*piVar8 + 0xfc));
              func_0x022a2a80(piVar8,0);
            }
          }
          func_0x0145b14c(&stack0xffffffe0,**(undefined4 **)(_UNK_01f1c19c + 0x1f1c0e4));
          return;
        }
        iVar1 = func_0x0229f13c(0x763b,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        unaff_lr = 0x1f1c050;
        unaff_r4 = param_1;
        unaff_r5 = iVar1;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
        goto SUB_02173f80;
      }
    }
    else {
      iVar3 = func_0x01f1caac(param_1);
      if (iVar3 != *(int *)(param_1 + 0x40)) {
        func_0x01f1cf4c(param_1,iVar3,iVar1);
      }
      iVar1 = 0;
      puVar7 = *(undefined4 **)(_UNK_01f1caa4 + 0x1f1c97c);
      piVar8 = *(int **)(_UNK_01f1caa8 + 0x1f1c984);
      while( true ) {
        iVar3 = *(int *)(param_1 + 0x34);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar3 + 0xc) <= iVar1) break;
        iVar3 = *(int *)(param_1 + 0x34);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x0328eea8(iVar3,iVar1,*puVar7);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x0145b1cc(piVar2,0,0);
        if (iVar3 != 0) {
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244ffd4(piVar2,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02450114(iVar3,0);
          if (iVar3 != 0) {
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            (**(code **)(*piVar2 + 0x108))(piVar2,*(undefined4 *)(*piVar2 + 0x10c));
          }
        }
        iVar1 = iVar1 + 1;
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xa585,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_02173f80:
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
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.MBBoardItemDetail$$_CheckUsage RVA 0x1f0caac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f1caac(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  int *piVar12;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01f1cf38 + 0x1f1cac4);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1cf3c + 0x1f1cad8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1cf40 + 0x1f1cae4));
    *pcVar10 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iVar1 = func_0x0229f06c(0xa586,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    piVar3 = (int *)func_0x021566f4(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(iVar1,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar3;
    piVar12 = *(int **)(_UNK_01f1cf44 + 0x1f1cb8c);
    uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
    iVar7 = *piVar12;
    if (uVar2 != 0) {
      piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar7) {
          puVar6 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0x108);
          goto LAB_01f1cbd4;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar3,iVar7,9);
LAB_01f1cbd4:
    iVar5 = (*(code *)*puVar6)(piVar3,uVar4,puVar6[1]);
    if (iVar5 == 0) {
      uVar2 = 0;
    }
    else if (*(char *)(param_1 + 0x3c) == '\0') {
      uVar4 = 0;
      iVar7 = func_0x021689a4(iVar1,0);
      uVar2 = 0;
      if (iVar7 != 0) {
        iVar7 = func_0x01c24918(0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar7 + 0x60);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar11 = 0;
        iVar7 = func_0x01cc0100(iVar7,0x79,0);
        if (iVar7 != 0) {
          uVar11 = func_0x01f1d144(param_1,2);
        }
        iVar7 = func_0x01f1d2d8(param_1,iVar1);
        if (iVar7 == 0) {
          uVar2 = func_0x01f1d144(param_1,3);
          uVar2 = uVar2 | uVar11;
          if ((*(char *)(iVar5 + 0x20) != '\0') && (iVar7 = func_0x01f1d1a8(param_1), iVar7 != 0)) {
            uVar11 = func_0x01f1d144(param_1,8);
            uVar2 = uVar11 | uVar2;
          }
        }
        else {
          uVar2 = func_0x01f1d144(param_1,4);
          uVar2 = uVar2 | uVar11;
        }
      }
      if (*(int *)(param_1 + 0x38) != 0) {
        uVar4 = func_0x02116990(*(int *)(param_1 + 0x38),0);
      }
      iVar7 = func_0x0216a2cc(uVar4,0,0);
      if (iVar7 != 0) {
        uVar11 = func_0x01f1d144(param_1,1);
        uVar2 = uVar11 | uVar2;
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02116ae0(iVar1,0);
      if ((iVar7 != 0) && (iVar7 = func_0x01f1d250(param_1), iVar7 != 0)) {
        piVar3 = (int *)func_0x021566f4(0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = *piVar3;
        iVar8 = *piVar12;
        uVar11 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar8) {
              puVar6 = (undefined4 *)(iVar7 + *piVar12 * 8 + 0x200);
              goto LAB_01f1cdc8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar3,iVar8,0x28);
LAB_01f1cdc8:
        iVar7 = (*(code *)*puVar6)(piVar3,puVar6[1]);
        if ((*(int *)(iVar5 + 0x68) <= iVar7) && (iVar7 = func_0x02168930(iVar1,0), iVar7 == 0)) {
          if (*(int *)(iVar5 + 100) < 1) {
            uVar4 = 6;
          }
          else {
            uVar4 = 5;
          }
          uVar11 = func_0x01f1d144(param_1,uVar4);
          uVar2 = uVar11 | uVar2;
        }
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0210e250(iVar1,6,0,0);
      if ((iVar5 == 0) &&
         (iVar5 = func_0x0216fe48(iVar1,&uStack_2c,&uStack_30,&uStack_34,0), iVar5 != 0)) {
        uVar11 = func_0x01f1d144(param_1,3);
        uVar2 = uVar11 | uVar2;
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02feb690(iVar1,&iStack_28,0,**(undefined4 **)(_UNK_01f1cf48 + 0x1f1ce90));
      iVar1 = iStack_28;
      if (iVar5 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0211fcd4(iVar1,0);
        if (iVar1 == 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01dbb000(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02141acc(iVar1,0);
          if (iVar1 < 1) {
            uVar11 = func_0x01f1d144(param_1,7);
            uVar2 = uVar11 | uVar2;
          }
        }
      }
    }
    else {
      uVar2 = func_0x01f1d144(param_1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa586,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardItemDetail$$_ApplyUsageMask RVA 0x1f0cf4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1cf4c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_01f1d130 + 0x1f1cf6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d134 + 0x1f1cf80));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d138 + 0x1f1cf8c));
    *pcVar4 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0xa591,0);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x40) = param_2;
    uVar2 = func_0x01f1d144(param_1,2);
    iVar1 = 3;
    uVar7 = 0;
    if ((uVar2 & param_2) == 0) {
      iVar1 = 2;
    }
    puVar9 = *(undefined4 **)(_UNK_01f1d13c + 0x1f1d014);
    piVar8 = *(int **)(_UNK_01f1d140 + 0x1f1d01c);
    do {
      iVar5 = *(int *)(param_1 + 0x34);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x0328eea8(iVar5,uVar7,*puVar9);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0244fb8c(piVar3,0,0);
      if (iVar5 == 0) {
        if ((iVar6 < iVar1) && ((param_2 >> (uVar7 & 0xff) & 1) != 0)) {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
            func_0x022a2a0c(0,0);
            func_0x01384bf0();
          }
          else {
            func_0x022a2a0c(piVar3,0);
          }
          (**(code **)(*piVar3 + 0xf0))(piVar3,param_3,*(undefined4 *)(*piVar3 + 0xf4));
          (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
          iVar6 = iVar6 + 1;
        }
        else {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
            func_0x022a2a80(0,0);
            func_0x01384bf0();
          }
          else {
            func_0x022a2a80(piVar3,0);
          }
          (**(code **)(*piVar3 + 0xf8))(piVar3,*(undefined4 *)(*piVar3 + 0xfc));
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 9);
  }
  else {
    iVar1 = func_0x0229f13c(0xa591,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardItemDetail$$_GetUsageFlag RVA 0x1f0d144 =====

int FUN_01f1d144(undefined4 param_1,uint param_2)

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
  
  iVar1 = func_0x0229f06c(0xa587,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa587,0);
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
    func_0x01485238(&uStack_38,param_2,0);
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
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  return 1 << (param_2 & 0x1f);
}



// ===== FAT.MBBoardItemDetail$$_AllowBubbleAds RVA 0x1f0d1a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f1d1a8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_01f1d244 + 0x1f1d1bc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d248 + 0x1f1d1d0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa58f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01f1d24c + 0x1f1d228) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0229f06c(0x9dd8,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x9dd8,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uVar6 = 0;
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
        uVar6 = 0;
        if (*(int *)(iVar1 + 0x10) != 0) {
          uVar6 = 1;
        }
      }
      iVar5 = *(int *)(iVar1 + 8);
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar5,uVar3,&uStack_30,uVar6);
      uVar2 = func_0x0245496c(&uStack_30,0,0);
      return uVar2;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0xa0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x1a8);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x0229f06c(0x3575,0,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x3575,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar6,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,uVar6,0);
      iVar5 = *(int *)(iVar1 + 8);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
      uVar2 = func_0x0245496c(&uStack_38,0,0);
      return uVar2;
    }
    iVar1 = func_0x02bb74a4(param_1,uVar6);
    if ((iVar1 != 0) && (iVar1 = func_0x02bb7da0(), iVar1 != 0)) {
      iVar1 = func_0x02bb7e04(param_1,uVar6);
      uVar2 = 1;
      if (iVar1 == 0) {
        iVar1 = func_0x02bb5f10(param_1);
        uVar2 = 0;
        if (iVar1 != 0) {
          pcVar4 = (char *)(_UNK_02bb60d0 + 0x2bb6008);
          if (*pcVar4 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02bb60d4 + 0x2bb601c));
            *pcVar4 = '\x01';
          }
          iVar1 = func_0x0229f06c(0x353b,0);
          if (iVar1 == 0) {
            puVar7 = *(undefined4 **)(_UNK_02bb60d8 + 0x2bb6074);
            iVar1 = func_0x03668dfc(*puVar7);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar2 = 0;
            iVar1 = func_0x02bb42f0(iVar1,0);
            if (iVar1 != 0) {
              iVar1 = func_0x03668dfc(*puVar7);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar2 = func_0x02bb4344(iVar1,0);
              uVar2 = uVar2 ^ 1;
            }
            return uVar2;
          }
          iVar1 = func_0x0229f13c(0x353b,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_021742f8;
        }
      }
    }
    return uVar2;
  }
  iVar1 = func_0x0229f13c(0xa58f,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_021742f8:
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
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3);
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.MBBoardItemDetail$$_AllowSell RVA 0x1f0d250 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01f1d250(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
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
  
  iVar3 = func_0x0229f06c(0xa590,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa590,0);
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
    iVar10 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar3 == 0) {
      uVar8 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar10,uVar12,&uStack_30,uVar8);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x60);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x0229f06c(0xf6,0,0);
  if (iVar10 == 0) {
    iVar10 = func_0x0229f06c(0xf7,0);
    if (iVar10 == 0) {
      iVar10 = func_0x01cc0400(iVar3,1);
      if (iVar10 != 0) {
        return 0;
      }
      pcVar9 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
        *pcVar9 = '\x01';
      }
      iVar10 = func_0x0229f06c(0xf9,0);
      if (iVar10 == 0) {
        iVar10 = *(int *)(iVar3 + 8);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02451990(iVar10,1,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar10 != 0) {
          iVar10 = func_0x01c24918(0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 8);
          iVar10 = *(int *)(iVar10 + 0x68);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02451948(iVar3,1,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar3 + 0x28)) {
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x9c);
            uVar12 = *(undefined4 *)(iVar3 + 0x28);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01c77708(iVar11,uVar12,0);
            if (iVar11 != 0) {
              return 1;
            }
          }
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x48);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          iVar11 = func_0x01dd2b98(iVar11,0);
          iVar5 = *(int *)(iVar3 + 0x18);
          if (iVar5 <= iVar11) {
            iVar5 = *(int *)(iVar3 + 0x3c);
          }
          if (iVar5 <= iVar11) {
            iVar11 = *(int *)(iVar3 + 0x40);
            if (iVar11 == 0) {
              func_0x01384bf0();
              iVar5 = iRam0000000c;
              iVar11 = *(int *)(iVar3 + 0x40);
              if (iVar11 == 0) {
                func_0x01384bf0();
                iVar11 = 0;
              }
            }
            else {
              iVar5 = *(int *)(iVar11 + 0xc);
            }
            uVar4 = (uint)(iVar5 < 1);
            piVar1 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
            piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
            piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
            do {
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar13) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc07d0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar13,0);
LAB_01cc07d0:
              iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar3 == 0) goto LAB_01cc0884;
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar14) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc0848;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar14,0);
LAB_01cc0848:
              uVar12 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01e6c0b0(iVar10,uVar12,0);
            } while (iVar3 == 0);
            uVar4 = 1;
LAB_01cc0884:
            if (piVar1 != (int *)0x0) {
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar13 * 8 + 0xc0);
                    goto LAB_01cc08e4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0)
              ;
LAB_01cc08e4:
              (*(code *)*puVar2)(piVar1,puVar2[1]);
            }
          }
        }
        return uVar4;
      }
      iVar10 = func_0x0229f13c(0xf9,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar10 = func_0x0229f13c(0xf7,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar10 = func_0x0229f13c(0xf6,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,1,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar10 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar3,0);
  func_0x01485238(&uStack_38,1,0);
  iVar11 = *(int *)(iVar10 + 8);
  uVar12 = *(undefined4 *)(iVar10 + 0xc);
  iVar3 = *(int *)(iVar10 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar3 == 0) {
    uVar8 = 2;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_38,uVar8,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.MBBoardItemDetail$$_IsFreeBubble RVA 0x1f0d2d8 =====

uint FUN_01f1d2d8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uVar2 = 0;
  iStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0xa588,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0216fe48(param_2,&uStack_18,&iStack_14,&uStack_1c,0);
    if (iVar1 != 0) {
      uVar2 = (uint)(iStack_14 == 3);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa588,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardItemDetail$$_UpdateItem RVA 0x1f0d37c =====

/* WARNING: Possible PIC construction at 0x01f1d7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f1d7e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1d37c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  char *pcVar4;
  undefined4 uVar5;
  int *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_20 [4];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x763a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x763a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  *(int *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  iVar1 = func_0x0229f06c(0x762e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x762e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar1 = func_0x0210e5f4(*(int *)(param_1 + 0x38),0);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar2 = func_0x0210e5f4(0,0);
    if (iVar1 != iVar2) {
      return;
    }
    func_0x01384bf0();
    iVar1 = func_0x0211015c(0,0);
    if (iVar1 != 0) goto LAB_01f1d4bc;
    func_0x01384bf0();
LAB_01f1d4d4:
    func_0x02116a38(param_2,0);
    pcVar4 = (char *)(_UNK_01f1d7f4 + 0x1f1d5fc);
    iStack_18 = unaff_r4;
    iStack_14 = unaff_r5;
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1d7f8 + 0x1f1d610));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d7fc + 0x1f1d61c));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d800 + 0x1f1d628));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d804 + 0x1f1d634));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d808 + 0x1f1d640));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x7633,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x7633,0);
      unaff_r4 = iStack_18;
      unaff_r5 = iStack_14;
      if (iVar1 == 0) {
        func_0x01384bf0();
        unaff_r4 = iStack_18;
        unaff_r5 = iStack_14;
      }
      goto SUB_02174108;
    }
    func_0x01f1d820(param_1,param_2);
    func_0x01f1e764(param_1,1);
    unaff_r8 = func_0x0216a148(param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0210e2d4(param_2,0);
    iVar1 = func_0x02157e88(uVar5,0);
    if (iVar1 < 1) {
      unaff_r6 = **(undefined4 **)(**(int **)(_UNK_01f1d80c + 0x1f1d7b0) + 0x5c);
    }
    else {
      unaff_r7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1d810 + 0x1f1d6f8),1);
      iStack_1c = iVar1;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01f1d814 + 0x1f1d710),&iStack_1c);
      if (unaff_r7 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*unaff_r7 + 0x20)), iVar2 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if (unaff_r7[3] == 0) {
        func_0x01384bf4();
      }
      unaff_r7[4] = iVar1;
      if (*(int *)(**(int **)(_UNK_01f1d818 + 0x1f1d774) + 0x74) == 0) {
        func_0x01384ab4();
      }
      unaff_r6 = func_0x028c1688(**(undefined4 **)(_UNK_01f1d81c + 0x1f1d798),unaff_r7,0);
    }
    uVar5 = func_0x0216a890(param_2,0);
    func_0x01f1e008(param_1,unaff_r8,unaff_r6,uVar5);
    unaff_lr = 0x1f1d7e4;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)auStack_20;
  }
  else {
    iVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 != iVar2) {
      return;
    }
    iVar1 = func_0x0211015c(param_2,0);
    if (iVar1 == 0) goto LAB_01f1d4d4;
LAB_01f1d4bc:
    pcVar4 = (char *)(_UNK_01f1d5d4 + 0x1f1d50c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1d5d8 + 0x1f1d520));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x762f,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x762f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02174108;
    }
    func_0x01f1d820(param_1,0);
    func_0x01f1e764(param_1,0);
    uVar3 = **(undefined4 **)(**(int **)(_UNK_01f1d5dc + 0x1f1d59c) + 0x5c);
    uVar5 = func_0x0216a890(param_2,0);
    func_0x01f1e008(param_1,uVar3,uVar3,uVar5);
    param_2 = 0;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r4;
  pcVar4 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x762a,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_01f1e760 + 0x1f1e6f8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar5 = func_0x0208447c(param_2,0);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    (*(code *)&UNK_05189da8)(iVar1,uVar5,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x762a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r5 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r6 = *(undefined4 *)((int)register0x00000054 + -8);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
SUB_02174108:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}



// ===== FAT.MBBoardItemDetail$$_RefreshItem RVA 0x1f0d3ec =====

/* WARNING: Possible PIC construction at 0x01f1d7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f1d7e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1d3ec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  char *pcVar4;
  undefined4 uVar5;
  int *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_20 [4];
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x762e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x762e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar1 = func_0x0210e5f4(*(int *)(param_1 + 0x38),0);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar2 = func_0x0210e5f4(0,0);
    if (iVar1 != iVar2) {
      return;
    }
    func_0x01384bf0();
    iVar1 = func_0x0211015c(0,0);
    if (iVar1 != 0) goto LAB_01f1d4bc;
    func_0x01384bf0();
LAB_01f1d4d4:
    func_0x02116a38(param_2,0);
    pcVar4 = (char *)(_UNK_01f1d7f4 + 0x1f1d5fc);
    iStack_18 = unaff_r4;
    iStack_14 = unaff_r5;
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1d7f8 + 0x1f1d610));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d7fc + 0x1f1d61c));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d800 + 0x1f1d628));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d804 + 0x1f1d634));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d808 + 0x1f1d640));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x7633,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x7633,0);
      unaff_r4 = iStack_18;
      unaff_r5 = iStack_14;
      if (iVar1 == 0) {
        func_0x01384bf0();
        unaff_r4 = iStack_18;
        unaff_r5 = iStack_14;
      }
      goto SUB_02174108;
    }
    func_0x01f1d820(param_1,param_2);
    func_0x01f1e764(param_1,1);
    unaff_r8 = func_0x0216a148(param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0210e2d4(param_2,0);
    iVar1 = func_0x02157e88(uVar5,0);
    if (iVar1 < 1) {
      unaff_r6 = **(undefined4 **)(**(int **)(_UNK_01f1d80c + 0x1f1d7b0) + 0x5c);
    }
    else {
      unaff_r7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1d810 + 0x1f1d6f8),1);
      iStack_1c = iVar1;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01f1d814 + 0x1f1d710),&iStack_1c);
      if (unaff_r7 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*unaff_r7 + 0x20)), iVar2 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if (unaff_r7[3] == 0) {
        func_0x01384bf4();
      }
      unaff_r7[4] = iVar1;
      if (*(int *)(**(int **)(_UNK_01f1d818 + 0x1f1d774) + 0x74) == 0) {
        func_0x01384ab4();
      }
      unaff_r6 = func_0x028c1688(**(undefined4 **)(_UNK_01f1d81c + 0x1f1d798),unaff_r7,0);
    }
    uVar5 = func_0x0216a890(param_2,0);
    func_0x01f1e008(param_1,unaff_r8,unaff_r6,uVar5);
    unaff_lr = 0x1f1d7e4;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)auStack_20;
  }
  else {
    iVar2 = func_0x0210e5f4(param_2,0);
    if (iVar1 != iVar2) {
      return;
    }
    iVar1 = func_0x0211015c(param_2,0);
    if (iVar1 == 0) goto LAB_01f1d4d4;
LAB_01f1d4bc:
    pcVar4 = (char *)(_UNK_01f1d5d4 + 0x1f1d50c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1d5d8 + 0x1f1d520));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x762f,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x762f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02174108;
    }
    func_0x01f1d820(param_1,0);
    func_0x01f1e764(param_1,0);
    uVar3 = **(undefined4 **)(**(int **)(_UNK_01f1d5dc + 0x1f1d59c) + 0x5c);
    uVar5 = func_0x0216a890(param_2,0);
    func_0x01f1e008(param_1,uVar3,uVar3,uVar5);
    param_2 = 0;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r4;
  pcVar4 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x762a,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      if (*(int *)(**(int **)(_UNK_01f1e760 + 0x1f1e6f8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar5 = func_0x0208447c(param_2,0);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    (*(code *)&UNK_05189da8)(iVar1,uVar5,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x762a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r5 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r6 = *(undefined4 *)((int)register0x00000054 + -8);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
SUB_02174108:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}



// ===== FAT.MBBoardItemDetail$$_ShowLockItem RVA 0x1f0d4f0 =====

/* WARNING: Removing unreachable block (ram,0x01f1e6ec) */
/* WARNING: Removing unreachable block (ram,0x01f1e704) */
/* WARNING: Removing unreachable block (ram,0x01f1e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1d4f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_01f1d5d4 + 0x1f1d50c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d5d8 + 0x1f1d520));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x762f,0);
  if (iVar1 == 0) {
    func_0x01f1d820(param_1,0);
    func_0x01f1e764(param_1,0);
    uVar2 = **(undefined4 **)(**(int **)(_UNK_01f1d5dc + 0x1f1d59c) + 0x5c);
    uVar5 = func_0x0216a890(param_2,0);
    func_0x01f1e008(param_1,uVar2,uVar2,uVar5);
    pcVar4 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x762a,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189da8)(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x762a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x762f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_ShowNormalInfo RVA 0x1f0d5e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1d5e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_01f1d7f4 + 0x1f1d5fc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7f8 + 0x1f1d610));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7fc + 0x1f1d61c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d800 + 0x1f1d628));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d804 + 0x1f1d634));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d808 + 0x1f1d640));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7633,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7633,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  func_0x01f1d820(param_1,param_2);
  func_0x01f1e764(param_1,1);
  uVar7 = func_0x0216a148(param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x0210e2d4(param_2,0);
  iVar1 = func_0x02157e88(uVar4,0);
  if (iVar1 < 1) {
    uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d80c + 0x1f1d7b0) + 0x5c);
  }
  else {
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1d810 + 0x1f1d6f8),1);
    iStack_1c = iVar1;
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01f1d814 + 0x1f1d710),&iStack_1c);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (*(int *)(**(int **)(_UNK_01f1d818 + 0x1f1d774) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = func_0x028c1688(**(undefined4 **)(_UNK_01f1d81c + 0x1f1d798),piVar2,0);
  }
  uVar3 = func_0x0216a890(param_2,0);
  func_0x01f1e008(param_1,uVar7,uVar4,uVar3);
  func_0x01f1e664(param_1,param_2);
  func_0x01c87144(0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_SetSelectedItem RVA 0x1f0d820 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1d820(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_01f1d908 + 0x1f1d838);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d90c + 0x1f1d84c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7613,0);
  if (iVar1 == 0) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f1d910 + 0x1f1d8a8));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01de33ec(iVar1,param_2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x4c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5eb3,0,0);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x10) = param_2;
      if (param_2 != 0) {
        *(int *)(param_1 + 0x14) = param_2;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x5eb3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7613,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_GetNameColorStr RVA 0x1f0d914 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f1d914(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_01f1d9a0 + 0x1f1d92c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d9a4 + 0x1f1d940));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7627,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7627,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173d4c + 0x2173c58);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173d50 + 0x2173c6c),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02173d54 + 0x2173d3c));
    return uVar5;
  }
  return **(undefined4 **)(_UNK_01f1d9a8 + 0x1f1d99c);
}



// ===== FAT.MBBoardItemDetail$$_GetDescColorStr RVA 0x1f0d9ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f1d9ac(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_01f1da58 + 0x1f1d9c4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1da5c + 0x1f1d9d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f1da60 + 0x1f1d9e4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7628,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7628,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02173d4c + 0x2173c58);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173d50 + 0x2173c6c),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02173d54 + 0x2173d3c));
    return uVar6;
  }
  if (param_2 == 0) {
    puVar2 = *(undefined4 **)(_UNK_01f1da68 + 0x1f1da54);
  }
  else {
    puVar2 = *(undefined4 **)(_UNK_01f1da64 + 0x1f1da48);
  }
  return *puVar2;
}



// ===== FAT.MBBoardItemDetail$$BuildTextFormat RVA 0x1f0da6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1da6c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_01f1dbe8 + 0x1f1da84);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1dbec + 0x1f1da98));
    func_0x01384978(*(undefined4 *)(_UNK_01f1dbf0 + 0x1f1daa4));
    func_0x01384978(*(undefined4 *)(_UNK_01f1dbf4 + 0x1f1dab0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1dbf8 + 0x1f1dabc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7629,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7629,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02173d4c + 0x2173c58);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173d50 + 0x2173c6c),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02173d54 + 0x2173d3c));
    return;
  }
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_01f1dbfc + 0x1f1db1c),5);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = **(undefined4 **)(_UNK_01f1dc00 + 0x1f1db3c);
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar6;
  uVar6 = FUN_01f1d914(param_1,param_2);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 2) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_01f1dc04 + 0x1f1db88);
  if (uVar2 < 3) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  uVar6 = FUN_01f1d9ac(param_1,param_2);
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 < 4) {
    func_0x01384bf4();
    uVar2 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar6;
  uVar6 = **(undefined4 **)(_UNK_01f1dc08 + 0x1f1dbcc);
  if (uVar2 < 5) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar6;
  (*(code *)&SUB_046723b0)(iVar1,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$BuildTextFormatOpt RVA 0x1f0dc0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1dc0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01f1dd98 + 0x1f1dc2c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1dd9c + 0x1f1dc44));
    func_0x01384978(*(undefined4 *)(_UNK_01f1dda0 + 0x1f1dc50));
    func_0x01384978(*(undefined4 *)(_UNK_01f1dda4 + 0x1f1dc5c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1dda8 + 0x1f1dc68));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ddac + 0x1f1dc74));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7626,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01f1d914(param_2,param_3);
    uVar3 = FUN_01f1d9ac(param_2,param_3);
    puVar6 = *(undefined4 **)(_UNK_01f1ddb0 + 0x1f1dd10);
    puVar7 = *(undefined4 **)(_UNK_01f1ddb4 + 0x1f1dd1c);
    uVar4 = func_0x0244f604(*puVar6,uVar2,*puVar7,0);
    if (param_4 != 0) {
      uVar4 = func_0x0244fb04(uVar4,**(undefined4 **)(_UNK_01f1ddbc + 0x1f1dd48),uVar2,
                              **(undefined4 **)(_UNK_01f1ddb8 + 0x1f1dd3c),0);
    }
    uVar2 = func_0x0244f604(*puVar6,uVar3,*puVar7,0);
    puVar6 = *(undefined4 **)(_UNK_01f1ddc0 + 0x1f1dd80);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x0390b3bc(param_1,uVar4,uVar2,*puVar6);
  }
  else {
    iVar1 = func_0x0229f13c(0x7626,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225077c(&uStack_30,iVar1,param_2,param_3,param_4,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}



// ===== FAT.MBBoardItemDetail$$_UpdateTitleBGState RVA 0x1f0ddc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1ddc4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar3 = (char *)(_UNK_01f1df14 + 0x1f1dddc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1df18 + 0x1f1ddf0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7625,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7625,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    iVar5 = 4;
    piVar7 = *(int **)(_UNK_01f1df1c + 0x1f1de5c);
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = iVar5 - 4;
      if (*(int *)(iVar1 + 0xc) <= (int)uVar4) break;
      iVar1 = *(int *)(param_1 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar4) {
        func_0x01384bf4();
      }
      uVar6 = *(undefined4 *)(iVar1 + iVar5 * 4);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar6,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x30);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar4) {
          func_0x01384bf4();
        }
        iVar1 = *(int *)(iVar1 + iVar5 * 4);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,param_2,0);
      }
      iVar1 = *(int *)(param_1 + 0x30);
      iVar5 = iVar5 + 1;
    }
  }
  return;
}



// ===== FAT.MBBoardItemDetail$$_UpdateTitleFontStyle RVA 0x1f0df20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1df20(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_01f1dffc + 0x1f1df38);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1e000 + 0x1f1df4c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7624,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7624,0);
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
    func_0x01485228(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  uVar6 = 0x12;
  if (param_2 != 0) {
    uVar6 = 10;
  }
  iVar1 = **(int **)(**(int **)(_UNK_01f1e004 + 0x1f1dfb4) + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01d0e49c(iVar1,uVar6,0);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01f1dff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0xe0))
              (piVar2,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(*piVar2 + 0xe4));
    return;
  }
  return;
}



// ===== FAT.MBBoardItemDetail$$_SetNameAndDesc RVA 0x1f0e008 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1e008(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01f1e628 + 0x1f1e028);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1e62c + 0x1f1e040));
    func_0x01384978(*(undefined4 *)(_UNK_01f1e630 + 0x1f1e04c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1e634 + 0x1f1e058));
    func_0x01384978(*(undefined4 *)(_UNK_01f1e638 + 0x1f1e064));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7622,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01cc0100(iVar1,0x78,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01cc0100(iVar1,0x79,0);
    if ((uVar2 | uVar3) == 1) {
      iVar1 = param_1[0xb];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_01f1df20(param_1,*(undefined1 *)(iVar1 + 8));
      uVar3 = func_0x01489db8(param_2,0);
      FUN_01f1ddc4(param_1,uVar3 ^ 1);
      piVar7 = *(int **)(_UNK_01f1e63c + 0x1f1e184);
      iVar1 = param_1[7];
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(iVar1,0,0);
      if (iVar1 != 0) {
        iVar1 = param_1[7];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,1,0);
      }
      iVar1 = param_1[5];
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar3 = 0;
      iVar1 = func_0x0145b1cc(iVar1,0,0);
      if (iVar1 != 0) {
        iVar1 = param_1[5];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
      }
      if (uVar2 != 0) {
        uVar3 = func_0x01489db8(param_3,0);
        uVar3 = uVar3 ^ 1;
      }
      iVar1 = param_1[0xb];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (**(code **)(*param_1 + 0xf0))
                (&uStack_2c,param_1,*(undefined1 *)(iVar1 + 8),uVar3,
                 *(undefined4 *)(*param_1 + 0xf4));
      iVar1 = param_1[9];
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(iVar1,0,0);
      if (iVar1 != 0) {
        if (uVar3 == 0) {
          iVar1 = func_0x01489db8(param_2,0);
          if (iVar1 == 0) {
            func_0x03070680(param_1[9],uStack_2c,param_2,
                            **(undefined4 **)(_UNK_01f1e648 + 0x1f1e580));
          }
          else {
            iVar1 = param_1[9];
            uVar6 = **(undefined4 **)(**(int **)(_UNK_01f1e644 + 0x1f1e4bc) + 0x5c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0244ffc4(iVar1,uVar6,1,0);
          }
        }
        else {
          func_0x03070f78(param_1[9],uStack_2c,param_2,param_3,
                          **(undefined4 **)(_UNK_01f1e640 + 0x1f1e2c8));
        }
      }
      iVar1 = param_1[8];
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(iVar1,0,0);
      if (iVar1 != 0) {
        iVar1 = func_0x01489db8(param_4,0);
        if (iVar1 == 0) {
          func_0x03070680(param_1[8],uStack_28,param_4,**(undefined4 **)(_UNK_01f1e660 + 0x1f1e618))
          ;
        }
        else {
          iVar1 = param_1[8];
          uVar6 = **(undefined4 **)(**(int **)(_UNK_01f1e64c + 0x1f1e5d8) + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffc4(iVar1,uVar6,1,0);
        }
      }
    }
    else {
      FUN_01f1ddc4(param_1,0);
      piVar7 = *(int **)(_UNK_01f1e650 + 0x1f1e2f4);
      iVar1 = param_1[7];
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(iVar1,0,0);
      if (iVar1 != 0) {
        iVar1 = param_1[7];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
      }
      iVar1 = param_1[5];
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(iVar1,0,0);
      if (iVar1 != 0) {
        iVar1 = param_1[5];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,1,0);
      }
      iVar1 = func_0x01489db8(param_2,0);
      if (iVar1 == 0) {
        iVar1 = param_1[0xb];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar1 + 8) == '\0') {
          if (param_1[0x12] == 0) {
            iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,0,*(undefined4 *)(*param_1 + 0xec));
            param_1[0x12] = iVar1;
          }
          iVar1 = param_1[6];
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0145b1cc(iVar1,0,0);
          if (iVar1 == 0) {
            return;
          }
          puVar4 = *(undefined4 **)(_UNK_01f1e65c + 0x1f1e550);
          iVar1 = param_1[0x12];
        }
        else {
          if (param_1[0x11] == 0) {
            iVar1 = (**(code **)(*param_1 + 0xe8))(param_1,1,*(undefined4 *)(*param_1 + 0xec));
            param_1[0x11] = iVar1;
          }
          iVar1 = param_1[6];
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0145b1cc(iVar1,0,0);
          if (iVar1 == 0) {
            return;
          }
          puVar4 = *(undefined4 **)(_UNK_01f1e658 + 0x1f1e498);
          iVar1 = param_1[0x11];
        }
        func_0x03070f78(param_1[6],iVar1,param_2,param_4,*puVar4);
      }
      else {
        iVar1 = param_1[6];
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(iVar1,0,0);
        if (iVar1 != 0) {
          piVar7 = (int *)param_1[6];
          uVar6 = **(undefined4 **)(**(int **)(_UNK_01f1e654 + 0x1f1e3e0) + 0x5c);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01f1e414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar7 + 0x2d0))(piVar7,uVar6,*(undefined4 *)(*piVar7 + 0x2d4));
          return;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7622,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardItemDetail$$_SetInfoBtn RVA 0x1f0e664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1e664(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x762a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x762a,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 != 0) {
    if (*(int *)(**(int **)(_UNK_01f1e760 + 0x1f1e6f8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = func_0x0208447c(param_2,0);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,uVar5,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_ShowEnergyBoostInfo RVA 0x1f0e764 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1e764(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
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
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_01f1e8e4 + 0x1f1e780);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1e8e8 + 0x1f1e794));
    *pcVar8 = '\x01';
  }
  iVar9 = 0;
  iVar1 = func_0x0229f06c(0x7614,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7614,0);
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
    func_0x01485228(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  if (param_2 != 0) {
    iVar9 = func_0x01f1ed54(param_1);
  }
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01f1e8ec + 0x1f1e828)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x180);
        goto LAB_01f1e870;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01f1e8ec + 0x1f1e828),0x18);
LAB_01f1e870:
  uVar5 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x01f1ef28(iVar1,iVar9,uVar5,uVar5);
  if (iVar9 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_01f1f4e0 + 0x1f1f38c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1f4e4 + 0x1f1f3a0));
    *pcVar8 = '\x01';
  }
  iVar9 = func_0x0229f06c(0x761a,0);
  if (iVar9 == 0) {
    uVar11 = *(undefined4 *)(iVar1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_01f1f4e8 + 0x1f1f3fc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar9 = func_0x0145b1cc(uVar11,0,0);
    if ((((iVar9 == 0) || (uVar4 = func_0x02162f88(0), uVar4 < 2)) || ((int)uVar4 <= (int)uVar5)) ||
       ((iVar9 = func_0x021631d4(uVar4,0), iVar9 == 0 ||
        (iVar9 = func_0x0216322c(uVar4,0), iVar9 == 0)))) {
      return;
    }
    iVar9 = func_0x01f2067c(iVar1,uVar4);
    if (0 < iVar9) {
      iVar10 = func_0x01c24918(0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar10 + 0x9c);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x01c77708(iVar10,iVar9,0);
      if (iVar9 == 0) {
        *(undefined1 *)(iVar1 + 9) = 1;
        return;
      }
    }
    pcVar8 = (char *)(_UNK_01f20808 + 0x1f20700);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f2080c + 0x1f20714));
      func_0x01384978(*(undefined4 *)(_UNK_01f20810 + 0x1f20720));
      *pcVar8 = '\x01';
    }
    iVar9 = func_0x0229f06c(0x761e,0);
    if (iVar9 == 0) {
      piVar2 = *(int **)(iVar1 + 0x30);
      func_0x02162868(uVar4,0);
      uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_01f20814 + 0x1f20790),&stack0xffffffec);
      uVar11 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f20818 + 0x1f207b4),uVar11,0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar2 + 0x2d0))(piVar2,uVar11,*(undefined4 *)(*piVar2 + 0x2d4));
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,1,0);
      return;
    }
    iVar9 = func_0x0229f13c(0x761e,0);
    uVar5 = uVar4;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar9 = func_0x0229f13c(0x761a,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar5,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar9 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar9 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar1,0);
  func_0x01485238(&uStack_38,uVar5,0);
  iVar10 = *(int *)(iVar9 + 8);
  uVar11 = *(undefined4 *)(iVar9 + 0xc);
  iVar1 = *(int *)(iVar9 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar1 == 0) {
    uVar7 = 2;
  }
  func_0x0245495c(iVar10,uVar11,&uStack_38,uVar7,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_ShowUndoInfo RVA 0x1f0e8f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1e8f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01f1ecf0 + 0x1f1e90c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1ecf4 + 0x1f1e920));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ecf8 + 0x1f1e92c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ecfc + 0x1f1e938));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ed00 + 0x1f1e944));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ed04 + 0x1f1e950));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ed08 + 0x1f1e95c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ed0c + 0x1f1e968));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ed10 + 0x1f1e974));
    func_0x01384978(*(undefined4 *)(_UNK_01f1ed14 + 0x1f1e980));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7612,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7612,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  FUN_01f1d820(param_1,0);
  FUN_01f1e764(param_1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x0210e2d4(param_2,0);
  iVar1 = func_0x02157e88(uVar9,0);
  if (iVar1 < 1) {
    uVar9 = **(undefined4 **)(**(int **)(_UNK_01f1ed18 + 0x1f1eae0) + 0x5c);
  }
  else {
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1ed1c + 0x1f1ea28),1);
    iStack_2c = iVar1;
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01f1ed20 + 0x1f1ea40),&iStack_2c);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0)
       ) {
      uVar9 = func_0x01384c10();
      func_0x01384aa0(uVar9,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (*(int *)(**(int **)(_UNK_01f1ed24 + 0x1f1eaa4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar9 = func_0x028c1688(**(undefined4 **)(_UNK_01f1ed28 + 0x1f1eac8),piVar2,0);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0210e2d4(param_2,0);
  func_0x02167570(&iStack_2c,uVar6,0);
  iVar1 = iStack_2c;
  if (iStack_28 < 1) {
    uVar6 = func_0x0216a148(param_2,0);
    if (*(int *)(**(int **)(_UNK_01f1ed4c + 0x1f1ebbc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x028c1350(**(undefined4 **)(_UNK_01f1ed50 + 0x1f1ebdc),0);
  }
  else {
    uVar6 = func_0x0216a148(param_2,0);
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1ed2c + 0x1f1eb40),1);
    if (iVar1 == 0x1f) {
      iStack_2c = iStack_28;
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f1ed30 + 0x1f1eb58),&iStack_2c);
      piVar10 = *(int **)(_UNK_01f1ed34 + 0x1f1eb78);
      iVar1 = *piVar10;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar10;
      }
      puVar4 = *(undefined4 **)(_UNK_01f1ed38 + 0x1f1eb9c);
      uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
    }
    else {
      iStack_2c = iStack_28;
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f1ed30 + 0x1f1eb58),&iStack_2c);
      piVar10 = *(int **)(_UNK_01f1ed44 + 0x1f1ec10);
      iVar1 = *piVar10;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar10;
      }
      puVar4 = *(undefined4 **)(_UNK_01f1ed48 + 0x1f1ec34);
      uVar5 = **(undefined4 **)(iVar1 + 0x5c);
    }
    iVar1 = func_0x0244f690(*puVar4,uVar3,uVar5,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0)
       ) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (*(int *)(**(int **)(_UNK_01f1ed3c + 0x1f1eca0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x028c1688(**(undefined4 **)(_UNK_01f1ed40 + 0x1f1ecc4),piVar2,0);
  }
  FUN_01f1e008(param_1,uVar6,uVar9,uVar3);
  FUN_01f1e664(param_1,param_2);
  return;
}



// ===== FAT.MBBoardItemDetail$$_CheckCanShowEnergyBoost RVA 0x1f0ed54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f1ed54(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  pcVar8 = (char *)(_UNK_01f1ef1c + 0x1f1ed68);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1ef20 + 0x1f1ed7c));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7615,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7615,0);
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
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    uVar10 = func_0x0245496c(&uStack_30,0,0);
    return uVar10;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    piVar3 = (int *)func_0x021566f4(0);
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0210e2d4(iVar2,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    piVar11 = *(int **)(_UNK_01f1ef24 + 0x1f1ee1c);
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    iVar9 = *piVar11;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar9) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x110);
          goto LAB_01f1ee64;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar9,10);
LAB_01f1ee64:
    iVar2 = (*(code *)*puVar4)(piVar3,uVar10,puVar4[1]);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x20);
      cVar1 = '\0';
      if (iVar2 != 0) {
        cVar1 = *(char *)(iVar2 + 0x2e);
      }
      if (iVar2 != 0 && cVar1 != '\0') {
        piVar3 = (int *)func_0x021566f4(0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        iVar9 = *piVar11;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar11[-1] == iVar9) {
              puVar4 = (undefined4 *)(iVar2 + *piVar11 * 8 + 200);
              goto LAB_01f1ef04;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar9,1);
LAB_01f1ef04:
                    /* WARNING: Could not recover jumptable at 0x01f1ef18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*(code *)*puVar4)(piVar3,1,puVar4[1]);
        return uVar10;
      }
    }
  }
  return 0;
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$RefreshBoost RVA 0x1f0ef28 =====

/* WARNING: Possible PIC construction at 0x01f1f134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f1f160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f1f188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f1f1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f1f1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f1f208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f1f300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f1f20c) */
/* WARNING: Removing unreachable block (ram,0x01f1f244) */
/* WARNING: Removing unreachable block (ram,0x01f1f24c) */
/* WARNING: Removing unreachable block (ram,0x01f1f250) */
/* WARNING: Removing unreachable block (ram,0x01f1f258) */
/* WARNING: Removing unreachable block (ram,0x01f1f25c) */
/* WARNING: Removing unreachable block (ram,0x01f1f21c) */
/* WARNING: Removing unreachable block (ram,0x01f1f224) */
/* WARNING: Removing unreachable block (ram,0x01f1f228) */
/* WARNING: Removing unreachable block (ram,0x01f1f230) */
/* WARNING: Removing unreachable block (ram,0x01f1f234) */
/* WARNING: Removing unreachable block (ram,0x01f1f238) */
/* WARNING: Removing unreachable block (ram,0x01f1f23c) */
/* WARNING: Removing unreachable block (ram,0x01f1f270) */
/* WARNING: Removing unreachable block (ram,0x01f1f27c) */
/* WARNING: Removing unreachable block (ram,0x01f1f280) */
/* WARNING: Removing unreachable block (ram,0x01f1f28c) */
/* WARNING: Removing unreachable block (ram,0x01f1f290) */
/* WARNING: Removing unreachable block (ram,0x01f1f2a4) */
/* WARNING: Removing unreachable block (ram,0x01f1f2a8) */
/* WARNING: Removing unreachable block (ram,0x01f1f2b8) */
/* WARNING: Removing unreachable block (ram,0x01f1f2bc) */
/* WARNING: Removing unreachable block (ram,0x01f1f2c0) */
/* WARNING: Removing unreachable block (ram,0x01f1f2c4) */
/* WARNING: Removing unreachable block (ram,0x01f1f1e0) */
/* WARNING: Removing unreachable block (ram,0x01f1f1ec) */
/* WARNING: Removing unreachable block (ram,0x01f1f1f0) */
/* WARNING: Removing unreachable block (ram,0x01f1f1b8) */
/* WARNING: Removing unreachable block (ram,0x01f1f1c4) */
/* WARNING: Removing unreachable block (ram,0x01f1f1c8) */
/* WARNING: Removing unreachable block (ram,0x01f1f18c) */
/* WARNING: Removing unreachable block (ram,0x01f1f19c) */
/* WARNING: Removing unreachable block (ram,0x01f1f1a0) */
/* WARNING: Removing unreachable block (ram,0x01f1f164) */
/* WARNING: Removing unreachable block (ram,0x01f1f170) */
/* WARNING: Removing unreachable block (ram,0x01f1f174) */
/* WARNING: Removing unreachable block (ram,0x01f1f138) */
/* WARNING: Removing unreachable block (ram,0x01f1f2e4) */
/* WARNING: Removing unreachable block (ram,0x01f1f2f0) */
/* WARNING: Removing unreachable block (ram,0x01f1f2f4) */
/* WARNING: Removing unreachable block (ram,0x01f1f140) */
/* WARNING: Removing unreachable block (ram,0x01f1f14c) */
/* WARNING: Removing unreachable block (ram,0x01f1f150) */
/* WARNING: Removing unreachable block (ram,0x01f1f304) */
/* WARNING: Removing unreachable block (ram,0x01f1f314) */
/* WARNING: Removing unreachable block (ram,0x01f1f318) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1ef28(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01f1f330 + 0x1f1ef48);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1f334 + 0x1f1ef64));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f338 + 0x1f1ef70));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f33c + 0x1f1ef7c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f340 + 0x1f1ef88));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f344 + 0x1f1ef94));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f348 + 0x1f1efa0));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f34c + 0x1f1efac));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f350 + 0x1f1efb8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7616,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7616,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022504c4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x01cc0100(iVar1,0x8f,0);
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f1f354 + 0x1f1f060));
  piVar6 = *(int **)(_UNK_01f1f358 + 0x1f1f074);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01eea2b8(iVar1,uVar7,0);
  if (*(int *)(**(int **)(_UNK_01f1f35c + 0x1f1f0c0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(2,**(undefined4 **)(_UNK_01f1f360 + 0x1f1f0dc));
  if ((iVar1 == 0) || (uVar2 != 1)) {
    iVar3 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10);
    if (*(char *)(iVar1 + 0x18) != '\x01') goto LAB_01f1f118;
  }
  param_2 = param_2 & ~(uVar2 & uVar4);
LAB_01f1f118:
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar3,param_2,0);
  return;
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$TryShowTipHighestAvailable RVA 0x1f0f374 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1f374(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_01f1f4e0 + 0x1f1f38c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1f4e4 + 0x1f1f3a0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x761a,0);
  if (iVar1 == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_01f1f4e8 + 0x1f1f3fc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar7,0,0);
    if ((((iVar1 == 0) || (uVar2 = func_0x02162f88(0), uVar2 < 2)) || ((int)uVar2 <= (int)param_2))
       || ((iVar1 = func_0x021631d4(uVar2,0), iVar1 == 0 ||
           (iVar1 = func_0x0216322c(uVar2,0), iVar1 == 0)))) {
      return;
    }
    iVar1 = func_0x01f2067c(param_1,uVar2);
    if (0 < iVar1) {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x9c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01c77708(iVar4,iVar1,0);
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 9) = 1;
        return;
      }
    }
    pcVar5 = (char *)(_UNK_01f20808 + 0x1f20700);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f2080c + 0x1f20714));
      func_0x01384978(*(undefined4 *)(_UNK_01f20810 + 0x1f20720));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x761e,0);
    if (iVar1 == 0) {
      piVar6 = *(int **)(param_1 + 0x30);
      func_0x02162868(uVar2,0);
      uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_01f20814 + 0x1f20790),&stack0xffffffec);
      uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f20818 + 0x1f207b4),uVar7,0);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar6 + 0x2d0))(piVar6,uVar7,*(undefined4 *)(*piVar6 + 0x2d4));
      iVar1 = *(int *)(param_1 + 0x2c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,1,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x761e,0);
    param_2 = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x761a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  func_0x01485238(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnBtnInfo RVA 0x1f0f4ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1f4ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uStack_28;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_01f1f750 + 0x1f1f504);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1f754 + 0x1f1f518));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f758 + 0x1f1f524));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f75c + 0x1f1f530));
    func_0x01384978(*(undefined4 *)(_UNK_01f1f760 + 0x1f1f53c));
    *pcVar7 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x775b,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      iVar2 = func_0x02feb690(*(int *)(param_1 + 0x38),&iStack_1c,0,
                              **(undefined4 **)(_UNK_01f1f764 + 0x1f1f5ac));
      iVar1 = iStack_1c;
      if (iVar2 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0211e780(iVar1,0);
        if (iVar1 != 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(param_1 + 0x38);
          iVar1 = *(int *)(iVar1 + 0x78);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x0210e2d4(iVar2,0);
          piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1f768 + 0x1f1f62c),1);
          iVar2 = iStack_1c;
          if (iStack_1c == 0) {
            func_0x01384bf0();
          }
          uStack_28 = func_0x0211e5f0(iVar2,0);
          iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01f1f76c + 0x1f1f65c),&uStack_28);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          if (iVar2 != 0) {
            iVar5 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20));
            if (iVar5 == 0) {
              uVar6 = func_0x01384c10();
              func_0x01384aa0(uVar6,0);
            }
          }
          if (piVar4[3] == 0) {
            func_0x01384bf4();
          }
          piVar4[4] = iVar2;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01cc80e0(iVar1,uVar3,1,piVar4,0);
          return;
        }
      }
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0210e2d4(iVar1,0);
      if (*(int *)(**(int **)(_UNK_01f1f770 + 0x1f1f71c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207d308(uVar3,0,0,0,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x775b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnSecondPass RVA 0x1f0f774 =====

/* WARNING: Removing unreachable block (ram,0x01f1e6ec) */
/* WARNING: Removing unreachable block (ram,0x01f1e704) */
/* WARNING: Removing unreachable block (ram,0x01f1e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1f774(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
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
  int aiStack_1c [3];
  
  pcVar6 = (char *)(_UNK_01f1f86c + 0x1f1f788);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1f870 + 0x1f1f79c));
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x7644,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x7644,0);
    if (iVar4 == 0) {
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar4 + 8);
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_01f1f874 + 0x1f1f800));
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar4 + 0x78) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = func_0x02141acc(*(int *)(iVar4 + 0x78),0);
  }
  iVar7 = *(int *)(param_1 + 0x38);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0210e5f4(iVar7,0);
  if (iVar4 != iVar7) {
    return;
  }
  iVar7 = *(int *)(param_1 + 0x38);
  iVar4 = func_0x0229f06c(0x762e,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x762e,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar4 = func_0x0210e5f4(*(int *)(param_1 + 0x38),0);
  if (iVar7 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x0210e5f4(0,0);
    if (iVar4 != iVar1) {
      return;
    }
    func_0x01384bf0();
    iVar4 = func_0x0211015c(0,0);
    if (iVar4 != 0) goto LAB_01f1d4bc;
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x0210e5f4(iVar7,0);
    if (iVar4 != iVar1) {
      return;
    }
    iVar4 = func_0x0211015c(iVar7,0);
    if (iVar4 != 0) {
LAB_01f1d4bc:
      pcVar6 = (char *)(_UNK_01f1d5d4 + 0x1f1d50c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f1d5d8 + 0x1f1d520));
        *pcVar6 = '\x01';
      }
      iVar4 = func_0x0229f06c(0x762f,0);
      if (iVar4 == 0) {
        FUN_01f1d820(param_1,0);
        FUN_01f1e764(param_1,0);
        uVar5 = **(undefined4 **)(**(int **)(_UNK_01f1d5dc + 0x1f1d59c) + 0x5c);
        uVar8 = func_0x0216a890(iVar7,0);
        FUN_01f1e008(param_1,uVar5,uVar5,uVar8);
        pcVar6 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
          *pcVar6 = '\x01';
        }
        iVar4 = func_0x0229f06c(0x762a,0);
        if (iVar4 == 0) {
          iVar4 = *(int *)(param_1 + 0x28);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x0244ffd4(iVar4,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          (*(code *)&UNK_05189da8)(iVar4,0,0);
          return;
        }
        iVar4 = func_0x0229f13c(0x762a,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar7 = 0;
      }
      else {
        iVar4 = func_0x0229f13c(0x762f,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
      }
      goto SUB_02174108;
    }
  }
  func_0x02116a38(iVar7,0);
  pcVar6 = (char *)(_UNK_01f1d7f4 + 0x1f1d5fc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7f8 + 0x1f1d610));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7fc + 0x1f1d61c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d800 + 0x1f1d628));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d804 + 0x1f1d634));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d808 + 0x1f1d640));
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x7633,0);
  if (iVar4 == 0) {
    FUN_01f1d820(param_1,iVar7);
    FUN_01f1e764(param_1,1);
    uVar8 = func_0x0216a148(iVar7,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0210e2d4(iVar7,0);
    iVar4 = func_0x02157e88(uVar5,0);
    if (iVar4 < 1) {
      uVar5 = **(undefined4 **)(**(int **)(_UNK_01f1d80c + 0x1f1d7b0) + 0x5c);
    }
    else {
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1d810 + 0x1f1d6f8),1);
      aiStack_1c[0] = iVar4;
      iVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01f1d814 + 0x1f1d710),aiStack_1c);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar4 != 0) &&
         (iVar1 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar2 + 0x20)), iVar1 == 0)) {
        uVar5 = func_0x01384c10();
        func_0x01384aa0(uVar5,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar4;
      if (*(int *)(**(int **)(_UNK_01f1d818 + 0x1f1d774) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar5 = func_0x028c1688(**(undefined4 **)(_UNK_01f1d81c + 0x1f1d798),piVar2,0);
    }
    uVar3 = func_0x0216a890(iVar7,0);
    FUN_01f1e008(param_1,uVar8,uVar5,uVar3);
    FUN_01f1e664(param_1,iVar7);
    func_0x01c87144(0);
    return;
  }
  iVar4 = func_0x0229f13c(0x7633,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
SUB_02174108:
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar7,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar4 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,iVar7,0);
  iVar7 = *(int *)(iVar4 + 8);
  uVar8 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar4 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnMessageBoardSelectItem RVA 0x1f0f878 =====

/* WARNING: Removing unreachable block (ram,0x01f1e6ec) */
/* WARNING: Removing unreachable block (ram,0x01f1e704) */
/* WARNING: Removing unreachable block (ram,0x01f1e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1f878(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  int aiStack_1c [3];
  
  pcVar6 = (char *)(_UNK_01f1f994 + 0x1f1f890);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1f998 + 0x1f1f8a4));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x7639,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7639,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (param_2 == 0) {
    iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01f1f99c + 0x1f1f944));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x78);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02141b74(iVar3,0);
    if (iVar3 != 0) {
      return;
    }
    FUN_01f1bfa8(param_1);
    pcVar6 = (char *)(_UNK_01f1c270 + 0x1f1c1bc);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1c274 + 0x1f1c1d0));
      *pcVar6 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x763e,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x763e,0);
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
      iVar5 = *(int *)(iVar3 + 8);
      uVar7 = *(undefined4 *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 2;
      if (iVar3 == 0) {
        uVar4 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4);
      return;
    }
    FUN_01f1d820(param_1,0);
    FUN_01f1e764(param_1,0);
    uVar7 = **(undefined4 **)(**(int **)(_UNK_01f1c278 + 0x1f1c244) + 0x5c);
    FUN_01f1e008(param_1,uVar7,uVar7,uVar7);
code_r0x01f1e664:
    pcVar6 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
      *pcVar6 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x762a,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0244ffd4(iVar3,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189da8)(iVar3,0,0);
      return;
    }
    iVar3 = func_0x0229f13c(0x762a,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0) {
      iVar3 = func_0x0210e5f4(*(int *)(param_1 + 0x38),0);
      iVar5 = func_0x0210e5f4(param_2,0);
      if (iVar3 == iVar5) {
        return;
      }
    }
    iVar3 = func_0x0229f06c(0x763a,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x763a,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02174108;
    }
    *(int *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    iVar3 = func_0x0229f06c(0x762e,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x762e,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02174108;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      return;
    }
    iVar3 = func_0x0210e5f4(*(int *)(param_1 + 0x38),0);
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar5 = func_0x0210e5f4(0,0);
      if (iVar3 != iVar5) {
        return;
      }
      func_0x01384bf0();
      iVar3 = func_0x0211015c(0,0);
      if (iVar3 != 0) goto LAB_01f1d4bc;
      func_0x01384bf0();
    }
    else {
      iVar5 = func_0x0210e5f4(param_2,0);
      if (iVar3 != iVar5) {
        return;
      }
      iVar3 = func_0x0211015c(param_2,0);
      if (iVar3 != 0) {
LAB_01f1d4bc:
        pcVar6 = (char *)(_UNK_01f1d5d4 + 0x1f1d50c);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f1d5d8 + 0x1f1d520));
          *pcVar6 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x762f,0);
        if (iVar3 != 0) {
          iVar3 = func_0x0229f13c(0x762f,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02174108;
        }
        FUN_01f1d820(param_1,0);
        FUN_01f1e764(param_1,0);
        uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d5dc + 0x1f1d59c) + 0x5c);
        uVar7 = func_0x0216a890(param_2,0);
        FUN_01f1e008(param_1,uVar4,uVar4,uVar7);
        goto code_r0x01f1e664;
      }
    }
    func_0x02116a38(param_2,0);
    pcVar6 = (char *)(_UNK_01f1d7f4 + 0x1f1d5fc);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1d7f8 + 0x1f1d610));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d7fc + 0x1f1d61c));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d800 + 0x1f1d628));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d804 + 0x1f1d634));
      func_0x01384978(*(undefined4 *)(_UNK_01f1d808 + 0x1f1d640));
      *pcVar6 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x7633,0);
    if (iVar3 == 0) {
      FUN_01f1d820(param_1,param_2);
      FUN_01f1e764(param_1,1);
      uVar7 = func_0x0216a148(param_2,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0210e2d4(param_2,0);
      iVar3 = func_0x02157e88(uVar4,0);
      if (iVar3 < 1) {
        uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d80c + 0x1f1d7b0) + 0x5c);
      }
      else {
        piVar1 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1d810 + 0x1f1d6f8),1);
        aiStack_1c[0] = iVar3;
        iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f1d814 + 0x1f1d710),aiStack_1c);
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar3 != 0) &&
           (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar1 + 0x20)), iVar5 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if (piVar1[3] == 0) {
          func_0x01384bf4();
        }
        piVar1[4] = iVar3;
        if (*(int *)(**(int **)(_UNK_01f1d818 + 0x1f1d774) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar4 = func_0x028c1688(**(undefined4 **)(_UNK_01f1d81c + 0x1f1d798),piVar1,0);
      }
      uVar2 = func_0x0216a890(param_2,0);
      FUN_01f1e008(param_1,uVar7,uVar4,uVar2);
      FUN_01f1e664(param_1,param_2);
      func_0x01c87144(0);
      return;
    }
    iVar3 = func_0x0229f13c(0x7633,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
SUB_02174108:
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnHandleSoldItemChange RVA 0x1f0f9a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1f9a0(int param_1,int param_2)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar5 = func_0x0229f06c(0x7611,0);
  if (iVar5 == 0) {
    uVar1 = (undefined1)param_2;
    if (param_2 != 0) {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x3c) = uVar1;
    if (param_2 == 0) {
      return;
    }
    *(int *)(param_1 + 0x38) = param_2;
    pcVar9 = (char *)(_UNK_01f1ecf0 + 0x1f1e90c);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1ecf4 + 0x1f1e920));
      func_0x01384978(*(undefined4 *)(_UNK_01f1ecf8 + 0x1f1e92c));
      func_0x01384978(*(undefined4 *)(_UNK_01f1ecfc + 0x1f1e938));
      func_0x01384978(*(undefined4 *)(_UNK_01f1ed00 + 0x1f1e944));
      func_0x01384978(*(undefined4 *)(_UNK_01f1ed04 + 0x1f1e950));
      func_0x01384978(*(undefined4 *)(_UNK_01f1ed08 + 0x1f1e95c));
      func_0x01384978(*(undefined4 *)(_UNK_01f1ed0c + 0x1f1e968));
      func_0x01384978(*(undefined4 *)(_UNK_01f1ed10 + 0x1f1e974));
      func_0x01384978(*(undefined4 *)(_UNK_01f1ed14 + 0x1f1e980));
      *pcVar9 = '\x01';
    }
    iVar5 = func_0x0229f06c(0x7612,0);
    if (iVar5 == 0) {
      FUN_01f1d820(param_1,0);
      FUN_01f1e764(param_1,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x0210e2d4(param_2,0);
      iVar5 = func_0x02157e88(uVar10,0);
      if (iVar5 < 1) {
        uVar10 = **(undefined4 **)(**(int **)(_UNK_01f1ed18 + 0x1f1eae0) + 0x5c);
      }
      else {
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1ed1c + 0x1f1ea28),1);
        iStack_2c = iVar5;
        iVar5 = func_0x01384abc(**(undefined4 **)(_UNK_01f1ed20 + 0x1f1ea40),&iStack_2c);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar5 != 0) &&
           (iVar8 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0)) {
          uVar10 = func_0x01384c10();
          func_0x01384aa0(uVar10,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = iVar5;
        if (*(int *)(**(int **)(_UNK_01f1ed24 + 0x1f1eaa4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar10 = func_0x028c1688(**(undefined4 **)(_UNK_01f1ed28 + 0x1f1eac8),piVar2,0);
      }
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = func_0x0210e2d4(param_2,0);
      func_0x02167570(&iStack_2c,uVar7,0);
      iVar5 = iStack_2c;
      if (iStack_28 < 1) {
        uVar7 = func_0x0216a148(param_2,0);
        if (*(int *)(**(int **)(_UNK_01f1ed4c + 0x1f1ebbc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar3 = func_0x028c1350(**(undefined4 **)(_UNK_01f1ed50 + 0x1f1ebdc),0);
      }
      else {
        uVar7 = func_0x0216a148(param_2,0);
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1ed2c + 0x1f1eb40),1);
        if (iVar5 == 0x1f) {
          iStack_2c = iStack_28;
          uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f1ed30 + 0x1f1eb58),&iStack_2c);
          piVar11 = *(int **)(_UNK_01f1ed34 + 0x1f1eb78);
          iVar5 = *piVar11;
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x01384ab4();
            iVar5 = *piVar11;
          }
          puVar4 = *(undefined4 **)(_UNK_01f1ed38 + 0x1f1eb9c);
          uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xc);
        }
        else {
          iStack_2c = iStack_28;
          uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f1ed30 + 0x1f1eb58),&iStack_2c);
          piVar11 = *(int **)(_UNK_01f1ed44 + 0x1f1ec10);
          iVar5 = *piVar11;
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x01384ab4();
            iVar5 = *piVar11;
          }
          puVar4 = *(undefined4 **)(_UNK_01f1ed48 + 0x1f1ec34);
          uVar6 = **(undefined4 **)(iVar5 + 0x5c);
        }
        iVar5 = func_0x0244f690(*puVar4,uVar3,uVar6,0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar5 != 0) &&
           (iVar8 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar8 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = iVar5;
        if (*(int *)(**(int **)(_UNK_01f1ed3c + 0x1f1eca0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar3 = func_0x028c1688(**(undefined4 **)(_UNK_01f1ed40 + 0x1f1ecc4),piVar2,0);
      }
      FUN_01f1e008(param_1,uVar7,uVar10,uVar3);
      FUN_01f1e664(param_1,param_2);
      return;
    }
    iVar5 = func_0x0229f13c(0x7612,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x7611,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar8 = *(int *)(iVar5 + 8);
  uVar10 = *(undefined4 *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar5 == 0) {
    uVar7 = 2;
  }
  func_0x0245495c(iVar8,uVar10,&uStack_38,uVar7,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnHandleChestWaitStart RVA 0x1f0fa20 =====

/* WARNING: Removing unreachable block (ram,0x01f1e6ec) */
/* WARNING: Removing unreachable block (ram,0x01f1e704) */
/* WARNING: Removing unreachable block (ram,0x01f1e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1fa20(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  int aiStack_1c [3];
  
  iVar3 = func_0x0229f06c(0x762d,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x762d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar3 = func_0x0229f06c(0x762e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x762e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar3 = func_0x0210e5f4(*(int *)(param_1 + 0x38),0);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = func_0x0210e5f4(0,0);
    if (iVar3 != iVar5) {
      return;
    }
    func_0x01384bf0();
    iVar3 = func_0x0211015c(0,0);
    if (iVar3 != 0) goto LAB_01f1d4bc;
    func_0x01384bf0();
  }
  else {
    iVar5 = func_0x0210e5f4(param_2,0);
    if (iVar3 != iVar5) {
      return;
    }
    iVar3 = func_0x0211015c(param_2,0);
    if (iVar3 != 0) {
LAB_01f1d4bc:
      pcVar6 = (char *)(_UNK_01f1d5d4 + 0x1f1d50c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f1d5d8 + 0x1f1d520));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x762f,0);
      if (iVar3 == 0) {
        FUN_01f1d820(param_1,0);
        FUN_01f1e764(param_1,0);
        uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d5dc + 0x1f1d59c) + 0x5c);
        uVar7 = func_0x0216a890(param_2,0);
        FUN_01f1e008(param_1,uVar4,uVar4,uVar7);
        pcVar6 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
          *pcVar6 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x762a,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x28);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244ffd4(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          (*(code *)&UNK_05189da8)(iVar3,0,0);
          return;
        }
        iVar3 = func_0x0229f13c(0x762a,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        param_2 = 0;
      }
      else {
        iVar3 = func_0x0229f13c(0x762f,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
      }
      goto SUB_02174108;
    }
  }
  func_0x02116a38(param_2,0);
  pcVar6 = (char *)(_UNK_01f1d7f4 + 0x1f1d5fc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7f8 + 0x1f1d610));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7fc + 0x1f1d61c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d800 + 0x1f1d628));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d804 + 0x1f1d634));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d808 + 0x1f1d640));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x7633,0);
  if (iVar3 == 0) {
    FUN_01f1d820(param_1,param_2);
    FUN_01f1e764(param_1,1);
    uVar7 = func_0x0216a148(param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_2,0);
    iVar3 = func_0x02157e88(uVar4,0);
    if (iVar3 < 1) {
      uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d80c + 0x1f1d7b0) + 0x5c);
    }
    else {
      piVar1 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1d810 + 0x1f1d6f8),1);
      aiStack_1c[0] = iVar3;
      iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f1d814 + 0x1f1d710),aiStack_1c);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar3 != 0) &&
         (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar1 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar1[3] == 0) {
        func_0x01384bf4();
      }
      piVar1[4] = iVar3;
      if (*(int *)(**(int **)(_UNK_01f1d818 + 0x1f1d774) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar4 = func_0x028c1688(**(undefined4 **)(_UNK_01f1d81c + 0x1f1d798),piVar1,0);
    }
    uVar2 = func_0x0216a890(param_2,0);
    FUN_01f1e008(param_1,uVar7,uVar4,uVar2);
    FUN_01f1e664(param_1,param_2);
    func_0x01c87144(0);
    return;
  }
  iVar3 = func_0x0229f13c(0x7633,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
SUB_02174108:
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnHandleChestWaitFinish RVA 0x1f0fa84 =====

/* WARNING: Removing unreachable block (ram,0x01f1e6ec) */
/* WARNING: Removing unreachable block (ram,0x01f1e704) */
/* WARNING: Removing unreachable block (ram,0x01f1e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1fa84(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  int aiStack_1c [3];
  
  iVar3 = func_0x0229f06c(0x7635,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7635,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar3 = func_0x0229f06c(0x762e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x762e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar3 = func_0x0210e5f4(*(int *)(param_1 + 0x38),0);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = func_0x0210e5f4(0,0);
    if (iVar3 != iVar5) {
      return;
    }
    func_0x01384bf0();
    iVar3 = func_0x0211015c(0,0);
    if (iVar3 != 0) goto LAB_01f1d4bc;
    func_0x01384bf0();
  }
  else {
    iVar5 = func_0x0210e5f4(param_2,0);
    if (iVar3 != iVar5) {
      return;
    }
    iVar3 = func_0x0211015c(param_2,0);
    if (iVar3 != 0) {
LAB_01f1d4bc:
      pcVar6 = (char *)(_UNK_01f1d5d4 + 0x1f1d50c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f1d5d8 + 0x1f1d520));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x762f,0);
      if (iVar3 == 0) {
        FUN_01f1d820(param_1,0);
        FUN_01f1e764(param_1,0);
        uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d5dc + 0x1f1d59c) + 0x5c);
        uVar7 = func_0x0216a890(param_2,0);
        FUN_01f1e008(param_1,uVar4,uVar4,uVar7);
        pcVar6 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
          *pcVar6 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x762a,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x28);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244ffd4(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          (*(code *)&UNK_05189da8)(iVar3,0,0);
          return;
        }
        iVar3 = func_0x0229f13c(0x762a,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        param_2 = 0;
      }
      else {
        iVar3 = func_0x0229f13c(0x762f,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
      }
      goto SUB_02174108;
    }
  }
  func_0x02116a38(param_2,0);
  pcVar6 = (char *)(_UNK_01f1d7f4 + 0x1f1d5fc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7f8 + 0x1f1d610));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7fc + 0x1f1d61c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d800 + 0x1f1d628));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d804 + 0x1f1d634));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d808 + 0x1f1d640));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x7633,0);
  if (iVar3 == 0) {
    FUN_01f1d820(param_1,param_2);
    FUN_01f1e764(param_1,1);
    uVar7 = func_0x0216a148(param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_2,0);
    iVar3 = func_0x02157e88(uVar4,0);
    if (iVar3 < 1) {
      uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d80c + 0x1f1d7b0) + 0x5c);
    }
    else {
      piVar1 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1d810 + 0x1f1d6f8),1);
      aiStack_1c[0] = iVar3;
      iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f1d814 + 0x1f1d710),aiStack_1c);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar3 != 0) &&
         (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar1 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar1[3] == 0) {
        func_0x01384bf4();
      }
      piVar1[4] = iVar3;
      if (*(int *)(**(int **)(_UNK_01f1d818 + 0x1f1d774) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar4 = func_0x028c1688(**(undefined4 **)(_UNK_01f1d81c + 0x1f1d798),piVar1,0);
    }
    uVar2 = func_0x0216a890(param_2,0);
    FUN_01f1e008(param_1,uVar7,uVar4,uVar2);
    FUN_01f1e664(param_1,param_2);
    func_0x01c87144(0);
    return;
  }
  iVar3 = func_0x0229f13c(0x7633,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
SUB_02174108:
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnHandlerItemStateChange RVA 0x1f0fae8 =====

/* WARNING: Removing unreachable block (ram,0x01f1e6ec) */
/* WARNING: Removing unreachable block (ram,0x01f1e704) */
/* WARNING: Removing unreachable block (ram,0x01f1e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1fae8(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar3 = func_0x0229f06c(0x7637,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7637,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar3,param_1,param_2,param_3);
    return;
  }
  iVar3 = func_0x0229f06c(0x762e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x762e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar3 = func_0x0210e5f4(*(int *)(param_1 + 0x38),0);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = func_0x0210e5f4(0,0);
    if (iVar3 != iVar5) {
      return;
    }
    func_0x01384bf0();
    iVar3 = func_0x0211015c(0,0);
    if (iVar3 != 0) goto LAB_01f1d4bc;
    func_0x01384bf0();
  }
  else {
    iVar5 = func_0x0210e5f4(param_2,0);
    if (iVar3 != iVar5) {
      return;
    }
    iVar3 = func_0x0211015c(param_2,0);
    if (iVar3 != 0) {
LAB_01f1d4bc:
      pcVar6 = (char *)(_UNK_01f1d5d4 + 0x1f1d50c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f1d5d8 + 0x1f1d520));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x762f,0);
      if (iVar3 == 0) {
        FUN_01f1d820(param_1,0);
        FUN_01f1e764(param_1,0);
        uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d5dc + 0x1f1d59c) + 0x5c);
        uVar7 = func_0x0216a890(param_2,0);
        FUN_01f1e008(param_1,uVar4,uVar4,uVar7);
        pcVar6 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
          *pcVar6 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x762a,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x28);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244ffd4(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          (*(code *)&UNK_05189da8)(iVar3,0,0);
          return;
        }
        iVar3 = func_0x0229f13c(0x762a,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        param_2 = 0;
      }
      else {
        iVar3 = func_0x0229f13c(0x762f,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
      }
      goto SUB_02174108;
    }
  }
  func_0x02116a38(param_2,0);
  pcVar6 = (char *)(_UNK_01f1d7f4 + 0x1f1d5fc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7f8 + 0x1f1d610));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7fc + 0x1f1d61c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d800 + 0x1f1d628));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d804 + 0x1f1d634));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d808 + 0x1f1d640));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x7633,0);
  if (iVar3 == 0) {
    FUN_01f1d820(param_1,param_2);
    FUN_01f1e764(param_1,1);
    uVar7 = func_0x0216a148(param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_2,0);
    iVar3 = func_0x02157e88(uVar4,0);
    if (iVar3 < 1) {
      uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d80c + 0x1f1d7b0) + 0x5c);
    }
    else {
      piVar1 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1d810 + 0x1f1d6f8),1);
      iStack_1c = iVar3;
      iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f1d814 + 0x1f1d710),&iStack_1c);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar3 != 0) &&
         (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar1 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar1[3] == 0) {
        func_0x01384bf4();
      }
      piVar1[4] = iVar3;
      if (*(int *)(**(int **)(_UNK_01f1d818 + 0x1f1d774) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar4 = func_0x028c1688(**(undefined4 **)(_UNK_01f1d81c + 0x1f1d798),piVar1,0);
    }
    uVar2 = func_0x0216a890(param_2,0);
    FUN_01f1e008(param_1,uVar7,uVar4,uVar2);
    FUN_01f1e664(param_1,param_2);
    func_0x01c87144(0);
    return;
  }
  iVar3 = func_0x0229f13c(0x7633,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
SUB_02174108:
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnHandlerUseTimeScaleSource RVA 0x1f0fb64 =====

/* WARNING: Removing unreachable block (ram,0x01f1e6ec) */
/* WARNING: Removing unreachable block (ram,0x01f1e704) */
/* WARNING: Removing unreachable block (ram,0x01f1e708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1fb64(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  int aiStack_1c [3];
  
  iVar3 = func_0x0229f06c(0x7638,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7638,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar3 = func_0x0229f06c(0x762e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x762e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar3 = func_0x0210e5f4(*(int *)(param_1 + 0x38),0);
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = func_0x0210e5f4(0,0);
    if (iVar3 != iVar5) {
      return;
    }
    func_0x01384bf0();
    iVar3 = func_0x0211015c(0,0);
    if (iVar3 != 0) goto LAB_01f1d4bc;
    func_0x01384bf0();
  }
  else {
    iVar5 = func_0x0210e5f4(param_2,0);
    if (iVar3 != iVar5) {
      return;
    }
    iVar3 = func_0x0211015c(param_2,0);
    if (iVar3 != 0) {
LAB_01f1d4bc:
      pcVar6 = (char *)(_UNK_01f1d5d4 + 0x1f1d50c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f1d5d8 + 0x1f1d520));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x762f,0);
      if (iVar3 == 0) {
        FUN_01f1d820(param_1,0);
        FUN_01f1e764(param_1,0);
        uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d5dc + 0x1f1d59c) + 0x5c);
        uVar7 = func_0x0216a890(param_2,0);
        FUN_01f1e008(param_1,uVar4,uVar4,uVar7);
        pcVar6 = (char *)(_UNK_01f1e758 + 0x1f1e67c);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f1e75c + 0x1f1e690));
          *pcVar6 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x762a,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x28);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244ffd4(iVar3,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          (*(code *)&UNK_05189da8)(iVar3,0,0);
          return;
        }
        iVar3 = func_0x0229f13c(0x762a,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        param_2 = 0;
      }
      else {
        iVar3 = func_0x0229f13c(0x762f,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
      }
      goto SUB_02174108;
    }
  }
  func_0x02116a38(param_2,0);
  pcVar6 = (char *)(_UNK_01f1d7f4 + 0x1f1d5fc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7f8 + 0x1f1d610));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d7fc + 0x1f1d61c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d800 + 0x1f1d628));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d804 + 0x1f1d634));
    func_0x01384978(*(undefined4 *)(_UNK_01f1d808 + 0x1f1d640));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x7633,0);
  if (iVar3 == 0) {
    FUN_01f1d820(param_1,param_2);
    FUN_01f1e764(param_1,1);
    uVar7 = func_0x0216a148(param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_2,0);
    iVar3 = func_0x02157e88(uVar4,0);
    if (iVar3 < 1) {
      uVar4 = **(undefined4 **)(**(int **)(_UNK_01f1d80c + 0x1f1d7b0) + 0x5c);
    }
    else {
      piVar1 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f1d810 + 0x1f1d6f8),1);
      aiStack_1c[0] = iVar3;
      iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f1d814 + 0x1f1d710),aiStack_1c);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar3 != 0) &&
         (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar1 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar1[3] == 0) {
        func_0x01384bf4();
      }
      piVar1[4] = iVar3;
      if (*(int *)(**(int **)(_UNK_01f1d818 + 0x1f1d774) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar4 = func_0x028c1688(**(undefined4 **)(_UNK_01f1d81c + 0x1f1d798),piVar1,0);
    }
    uVar2 = func_0x0216a890(param_2,0);
    FUN_01f1e008(param_1,uVar7,uVar4,uVar2);
    FUN_01f1e664(param_1,param_2);
    func_0x01c87144(0);
    return;
  }
  iVar3 = func_0x0229f13c(0x7633,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
SUB_02174108:
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar3 + 8);
  uVar7 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar3 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnBtnEnergyBoost RVA 0x1f0fbc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f1fbc8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [3];
  undefined1 uStack_2d;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar9 = (char *)(_UNK_01f20280 + 0x1f1fbe0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f20284 + 0x1f1fbf4));
    func_0x01384978(*(undefined4 *)(_UNK_01f20288 + 0x1f1fc00));
    func_0x01384978(*(undefined4 *)(_UNK_01f2028c + 0x1f1fc0c));
    func_0x01384978(*(undefined4 *)(_UNK_01f20290 + 0x1f1fc18));
    func_0x01384978(*(undefined4 *)(_UNK_01f20294 + 0x1f1fc24));
    func_0x01384978(*(undefined4 *)(_UNK_01f20298 + 0x1f1fc30));
    func_0x01384978(*(undefined4 *)(_UNK_01f2029c + 0x1f1fc3c));
    func_0x01384978(*(undefined4 *)(_UNK_01f202a0 + 0x1f1fc48));
    func_0x01384978(*(undefined4 *)(_UNK_01f202a4 + 0x1f1fc54));
    func_0x01384978(*(undefined4 *)(_UNK_01f202a8 + 0x1f1fc60));
    func_0x01384978(*(undefined4 *)(_UNK_01f202ac + 0x1f1fc6c));
    func_0x01384978(*(undefined4 *)(_UNK_01f202b0 + 0x1f1fc78));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x775d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x775d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    _auStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    _auStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(auStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(auStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar10,uVar11,auStack_30,uVar8,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar12 = *(int **)(_UNK_01f202b4 + 0x1f1fcf0);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar12) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x180);
        goto LAB_01f1fd38;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0x18);
LAB_01f1fd38:
  uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  uVar8 = func_0x02162f88(0);
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar12) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x170);
        goto LAB_01f1fdc0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0x16);
LAB_01f1fdc0:
  (*(code *)*puVar3)(piVar2,puVar3[1]);
  FUN_01f1bfa8(param_1);
  FUN_01f1e664(param_1,0);
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f202b8 + 0x1f1fdf0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01de471c(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x2c);
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar10 = *piVar2;
  uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar12) {
        puVar3 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0x180);
        goto LAB_01f1fe7c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0x18);
LAB_01f1fe7c:
  uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_38 = uVar8;
  FUN_01f1ef28(iVar1,1,uVar4,uVar11);
  func_0x021629b8(&uStack_28,0);
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar11 = func_0x0210e2d4(*(int *)(param_1 + 0x38),0);
    iVar1 = func_0x02157e88(uVar11,0);
    if (0 < iVar1) {
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f202c0 + 0x1f1ff00),1);
      iStack_2c = iVar1;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01f202c4 + 0x1f1ff18),&iStack_2c);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar10 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
        uVar11 = func_0x01384c10();
        func_0x01384aa0(uVar11,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar1;
      if (*(int *)(**(int **)(_UNK_01f202c8 + 0x1f1ff7c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar11 = func_0x028c1688(**(undefined4 **)(_UNK_01f202cc + 0x1f1ffa0),piVar2,0);
      goto LAB_01f1ffc0;
    }
  }
  uVar11 = **(undefined4 **)(**(int **)(_UNK_01f202bc + 0x1f1ffb8) + 0x5c);
LAB_01f1ffc0:
  if (*(int *)(**(int **)(_UNK_01f202d0 + 0x1f1ffcc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x028c1350(uStack_28,0);
  uVar4 = func_0x028c1350(uStack_24,0);
  FUN_01f1e008(param_1,uVar8,uVar11,uVar4);
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar12) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x178);
        goto LAB_01f20074;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0x17);
LAB_01f20074:
  iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  iVar10 = func_0x034aaa34(**(undefined4 **)(_UNK_01f202d4 + 0x1f20094));
  piVar2 = *(int **)(_UNK_01f202d8 + 0x1f200a8);
  iVar5 = *piVar2;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
    iVar5 = *piVar2;
  }
  uVar11 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x44);
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01f202dc + 0x1f200d0),1);
  if (iVar1 == 0) {
    auStack_30 = (undefined1  [3])CONCAT12(0,auStack_30._0_2_);
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01f202e0 + 0x1f200f0),auStack_30 + 2);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)
       ) {
      uVar8 = func_0x01384c10();
      func_0x01384aa0(uVar8,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee858c(iVar10,uVar11,piVar2,0);
  }
  else {
    _auStack_30 = CONCAT13(1,auStack_30);
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01f202e0 + 0x1f200f0),auStack_30 + 3);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)
       ) {
      uVar8 = func_0x01384c10();
      func_0x01384aa0(uVar8,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee858c(iVar10,uVar11,piVar2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01f202e4 + 0x1f201a8),0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01f202e8 + 0x1f201e8),0);
  }
  return;
}



// ===== FAT.MBBoardItemDetail$$_OnMessageEnergyBoostUnlockFlyFeedback RVA 0x1f102ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f202ec(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x763f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x763f,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    uVar5 = func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    pcVar4 = (char *)(_UNK_01f20424 + 0x1f20378);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f20428 + 0x1f2038c));
      *pcVar4 = '\x01';
    }
    uVar5 = 0;
    uStack_18 = 0;
    iVar3 = func_0x0229f06c(0x7640,0);
    if (iVar3 == 0) {
      uStack_28 = 0xffffffff;
      uStack_24 = 0;
      iStack_20 = iVar1;
      uStack_1c = param_2;
      func_0x02f49214(&uStack_24,&uStack_28,**(undefined4 **)(_UNK_01f2042c + 0x1f203fc));
    }
    else {
      iVar3 = func_0x0229f13c(0x7640,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x022508c0(iVar3,iVar1,param_2,0);
    }
    return uVar5;
  }
  return 0;
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$Punch RVA 0x1f1035c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f2035c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01f20424 + 0x1f20378);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f20428 + 0x1f2038c));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x7640,0);
  if (iVar1 == 0) {
    uStack_28 = 0xffffffff;
    uStack_24 = 0;
    uStack_20 = param_1;
    uStack_1c = param_2;
    func_0x02f49214(&uStack_24,&uStack_28,**(undefined4 **)(_UNK_01f2042c + 0x1f203fc));
  }
  else {
    iVar1 = func_0x0229f13c(0x7640,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x022508c0(iVar1,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.MBBoardItemDetail$$_OnMergeEnergyChange RVA 0x1f10430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f20430(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
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
  
  pcVar10 = (char *)(_UNK_01f20560 + 0x1f20448);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f20564 + 0x1f2045c));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7645,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7645,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar8,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  iVar8 = FUN_01f1ed54(param_1);
  iVar2 = 0;
  if (iVar8 != 0) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar8 != 0 && iVar2 != 0) {
    piVar3 = (int *)func_0x021566f4(0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01f20568 + 0x1f204f0)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x180);
          goto LAB_01f20538;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01f20568 + 0x1f204f0),0x18);
LAB_01f20538:
    uVar5 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar8 = func_0x0229f06c(0x7646,0);
      if (iVar8 == 0) {
        pcVar10 = (char *)(_UNK_01f1f4e0 + 0x1f1f38c);
        if (*pcVar10 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f1f4e4 + 0x1f1f3a0));
          *pcVar10 = '\x01';
        }
        iVar8 = func_0x0229f06c(0x761a,0);
        if (iVar8 == 0) {
          uVar11 = *(undefined4 *)(iVar2 + 0x2c);
          if (*(int *)(**(int **)(_UNK_01f1f4e8 + 0x1f1f3fc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar8 = func_0x0145b1cc(uVar11,0,0);
          if ((((iVar8 == 0) || (uVar1 = func_0x02162f88(0), uVar1 < 2)) ||
              ((int)uVar1 <= (int)uVar5)) ||
             ((iVar8 = func_0x021631d4(uVar1,0), iVar8 == 0 ||
              (iVar8 = func_0x0216322c(uVar1,0), iVar8 == 0)))) {
            return;
          }
          iVar8 = func_0x01f2067c(iVar2,uVar1);
          if (0 < iVar8) {
            iVar9 = func_0x01c24918(0);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            iVar9 = *(int *)(iVar9 + 0x9c);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            iVar8 = func_0x01c77708(iVar9,iVar8,0);
            if (iVar8 == 0) {
              *(undefined1 *)(iVar2 + 9) = 1;
              return;
            }
          }
          pcVar10 = (char *)(_UNK_01f20808 + 0x1f20700);
          if (*pcVar10 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f2080c + 0x1f20714));
            func_0x01384978(*(undefined4 *)(_UNK_01f20810 + 0x1f20720));
            *pcVar10 = '\x01';
          }
          iVar8 = func_0x0229f06c(0x761e,0);
          if (iVar8 == 0) {
            piVar3 = *(int **)(iVar2 + 0x30);
            func_0x02162868(uVar1,0);
            uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_01f20814 + 0x1f20790),&stack0xffffffec);
            uVar11 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f20818 + 0x1f207b4),uVar11,0);
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            (**(code **)(*piVar3 + 0x2d0))(piVar3,uVar11,*(undefined4 *)(*piVar3 + 0x2d4));
            iVar2 = *(int *)(iVar2 + 0x2c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x0244ffe4(iVar2,1,0);
            return;
          }
          iVar8 = func_0x0229f13c(0x761e,0);
          uVar5 = uVar1;
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar8 = func_0x0229f13c(0x761a,0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
        }
      }
      else {
        iVar8 = func_0x0229f13c(0x7646,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar5,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar8 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar2,0);
      func_0x01485238(&uStack_38,uVar5,0);
      iVar9 = *(int *)(iVar8 + 8);
      uVar11 = *(undefined4 *)(iVar8 + 0xc);
      iVar2 = *(int *)(iVar8 + 0x10);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 3;
      if (iVar2 == 0) {
        uVar7 = 2;
      }
      func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
      return;
    }
  }
  return;
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$OnEnergyChanged RVA 0x1f1056c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f2056c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
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
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0x7646,0);
  if (iVar2 == 0) {
    pcVar5 = (char *)(_UNK_01f1f4e0 + 0x1f1f38c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f1f4e4 + 0x1f1f3a0));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x761a,0);
    if (iVar2 == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x2c);
      if (*(int *)(**(int **)(_UNK_01f1f4e8 + 0x1f1f3fc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(uVar7,0,0);
      if ((((iVar2 == 0) || (uVar1 = func_0x02162f88(0), uVar1 < 2)) || ((int)uVar1 <= (int)param_2)
          ) || ((iVar2 = func_0x021631d4(uVar1,0), iVar2 == 0 ||
                (iVar2 = func_0x0216322c(uVar1,0), iVar2 == 0)))) {
        return;
      }
      iVar2 = func_0x01f2067c(param_1,uVar1);
      if (0 < iVar2) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x9c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01c77708(iVar4,iVar2,0);
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 9) = 1;
          return;
        }
      }
      pcVar5 = (char *)(_UNK_01f20808 + 0x1f20700);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f2080c + 0x1f20714));
        func_0x01384978(*(undefined4 *)(_UNK_01f20810 + 0x1f20720));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x761e,0);
      if (iVar2 == 0) {
        piVar6 = *(int **)(param_1 + 0x30);
        uStack_14 = func_0x02162868(uVar1,0);
        uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_01f20814 + 0x1f20790),&uStack_14);
        uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f20818 + 0x1f207b4),uVar7,0);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar6 + 0x2d0))(piVar6,uVar7,*(undefined4 *)(*piVar6 + 0x2d4));
        iVar2 = *(int *)(param_1 + 0x2c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar2,1,0);
        return;
      }
      iVar2 = func_0x0229f13c(0x761e,0);
      param_2 = uVar1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x761a,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7646,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.MBBoardItemDetail$$.ctor RVA 0x1f105d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f205d0(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01f20648 + 0x1f205e4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2064c + 0x1f205f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f20650 + 0x1f20604));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f20654 + 0x1f20618));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01f20658 + 0x1f2062c));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$get_textColorBoost RVA 0x1f1065c =====

undefined1 FUN_01f2065c(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$set_textColorBoost RVA 0x1f10664 =====

void FUN_01f20664(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$get_waitingForUnlockFlyFeedback RVA 0x1f1066c =====

undefined1 FUN_01f2066c(int param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$set_waitingForUnlockFlyFeedback RVA 0x1f10674 =====

void FUN_01f20674(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 9) = param_2;
  return;
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$GetGuideIdByState RVA 0x1f1067c =====

int FUN_01f2067c(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x761c,0);
  if (iVar1 == 0) {
    if (param_2 - 2U < 3) {
      param_2 = 0xb1 - param_2;
    }
    else {
      param_2 = -1;
    }
    return param_2;
  }
  iVar1 = func_0x0229f13c(0x761c,0);
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
  func_0x01485238(&uStack_38,param_2,0);
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
  iVar1 = func_0x0245498c(&uStack_38,0,0);
  return iVar1;
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$ShowTip RVA 0x1f106e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f206e4(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01f20808 + 0x1f20700);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f2080c + 0x1f20714));
    func_0x01384978(*(undefined4 *)(_UNK_01f20810 + 0x1f20720));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x761e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x761e,0);
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
    func_0x01485238(&uStack_38,param_2,0);
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
  piVar5 = *(int **)(param_1 + 0x30);
  func_0x02162868(param_2,0);
  uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01f20814 + 0x1f20790),&stack0xffffffec);
  uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f20818 + 0x1f207b4),uVar6,0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar5 + 0x2d0))(piVar5,uVar6,*(undefined4 *)(*piVar5 + 0x2d4));
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,1,0);
  return;
}



// ===== FAT.MBBoardItemDetail.BoostGroup$$.ctor RVA 0x1f1081c =====

void FUN_01f2081c(int param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 0x3f59999a;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardItemDetail.BoostGroup.<Punch>d__25$$MoveNext RVA 0x1f10830 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f20830(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_01f20e50 + 0x1f2084c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f20e54 + 0x1f20860));
    func_0x01384978(*(undefined4 *)(_UNK_01f20e58 + 0x1f2086c));
    func_0x01384978(*(undefined4 *)(_UNK_01f20e5c + 0x1f20878));
    func_0x01384978(*(undefined4 *)(_UNK_01f20e60 + 0x1f20884));
    *pcVar8 = '\x01';
  }
  iVar10 = param_1[2];
  iStack_2c = 0;
  piStack_30 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_30 = (int *)param_1[4];
    iStack_2c = param_1[5];
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar10 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02450104(iVar11,**(undefined4 **)(_UNK_01f20e64 + 0x1f208d0),0);
    piVar9 = *(int **)(_UNK_01f20e68 + 0x1f208e8);
    uVar12 = *(undefined4 *)(iVar10 + 0x3c);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500e4(&piStack_38,uVar12,0,8,0,0,0);
    pcVar8 = (char *)(_UNK_01f20e6c + 0x1f20930);
    iStack_2c = iStack_34;
    piStack_30 = piStack_38;
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f20e70 + 0x1f20950));
      *pcVar8 = '\x01';
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar8 = (char *)(_UNK_01f20e74 + 0x1f20978);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f20e78 + 0x1f2098c));
      *pcVar8 = '\x01';
    }
    piVar9 = piStack_30;
    if (piStack_30 != (int *)0x0) {
      iVar11 = *piStack_30;
      uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
      sVar1 = (short)iStack_2c;
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01f20e7c + 0x1f209b0)) {
            puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
            goto LAB_01f20a20;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piStack_30,**(int **)(_UNK_01f20e7c + 0x1f209b0),0);
LAB_01f20a20:
      iVar11 = (*(code *)*puVar2)(piVar9,(int)sVar1,puVar2[1]);
      if (iVar11 == 0) {
        puVar2 = *(undefined4 **)(_UNK_01f20e80 + 0x1f20d4c);
        param_1[4] = (int)piStack_30;
        param_1[5] = iStack_2c;
        uVar12 = *puVar2;
        *param_1 = 0;
        func_0x01f26bf0(param_1 + 1,&piStack_30,param_1,uVar12);
        return;
      }
    }
  }
  pcVar8 = (char *)(_UNK_01f20e84 + 0x1f20a48);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f20e88 + 0x1f20a5c));
    *pcVar8 = '\x01';
  }
  piVar9 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    iVar11 = *piStack_30;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    sVar1 = (short)iStack_2c;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01f20e8c + 0x1f20a80)) {
          puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xd0);
          goto LAB_01f20acc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piStack_30,**(int **)(_UNK_01f20e8c + 0x1f20a80),2);
LAB_01f20acc:
    (*(code *)*puVar2)(piVar9,(int)sVar1,puVar2[1]);
  }
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar10 + 9) == '\0') {
    FUN_01f1f374(iVar10,param_1[3]);
  }
  else {
    *(undefined1 *)(iVar10 + 9) = 0;
    piVar9 = (int *)func_0x021566f4(0);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01f20e90 + 0x1f20b28)) {
          puVar2 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0x180);
          goto LAB_01f20b80;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f20e90 + 0x1f20b28),0x18);
LAB_01f20b80:
    iVar11 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    uVar6 = func_0x02162f88(0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar3 = FUN_01f2067c(iVar10,uVar6);
    if (iVar3 < 1) {
      uVar5 = 0;
    }
    else {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x9c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x01c77708(iVar4,iVar3,0);
      uVar5 = uVar5 ^ 1;
    }
    if ((((1 < uVar6) && (iVar11 < (int)uVar6)) && (uVar5 == 0)) &&
       (iVar11 = func_0x021631d4(uVar6,0), iVar11 != 0)) {
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      FUN_01f206e4(iVar10,uVar6);
    }
  }
  iVar10 = _UNK_01f20e98;
  *param_1 = -2;
  if (*(char *)(iVar10 + 0x1f20c60) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f20e9c + 0x1f20c74));
    func_0x01384978(*(undefined4 *)(_UNK_01f20ea0 + 0x1f20c80));
    *(char *)(iVar10 + 0x1f20c60) = '\x01';
  }
  piVar9 = (int *)param_1[1];
  if (piVar9 != (int *)0x0) {
    iVar10 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01f20ea4 + 0x1f20ca4)) {
          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 200);
          goto LAB_01f20cec;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f20ea4 + 0x1f20ca4),1);
LAB_01f20cec:
    uVar12 = (*(code *)*puVar2)(piVar9,puVar2[1]);
    if (*(int *)(**(int **)(_UNK_01f20ea8 + 0x1f20d0c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01489be8(0xd,uVar12,0);
    param_1[1] = 0;
  }
  return;
}



// ===== FAT.MBBoardItemDetail.BoostGroup.<Punch>d__25$$SetStateMachine RVA 0x1f10eb0 =====

void FUN_01f20eb0(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f7167c)(param_1 + 4,param_2,0);
  return;
}


