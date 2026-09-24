/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardCloud$$Init RVA 0x1de3828 =====

void FUN_01df3828(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f3a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f3a,0);
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
                    /* WARNING: Could not recover jumptable at 0x01df3888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))(param_1,*(undefined4 *)(*param_1 + 0x104));
  return;
}



// ===== FAT.MBBoardCloud$$Setup RVA 0x1de388c =====

void FUN_01df388c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f3b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f3b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  param_1[6] = param_3;
  param_1[5] = param_2;
  (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
                    /* WARNING: Could not recover jumptable at 0x01df3928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1,*(undefined4 *)(*param_1 + 0x114));
  return;
}



// ===== FAT.MBBoardCloud$$_SetupPool RVA 0x1de392c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df392c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01df3a40 + 0x1df3940);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df3a44 + 0x1df3954));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f3c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f3c,0);
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
  iVar1 = func_0x01489db8(param_1[8],0);
  if (iVar1 == 0) {
    puVar7 = *(undefined4 **)(_UNK_01df3a48 + 0x1df39c0);
    iVar1 = func_0x034aaa34(*puVar7);
    iVar5 = param_1[8];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244a3f8(iVar1,iVar5,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(*puVar7);
      iVar5 = param_1[8];
      uVar6 = (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x3fa,0,uVar6,0);
      if (iVar2 == 0) {
        func_0x024487c8(&uStack_20);
        uStack_30 = uStack_1c;
        uStack_2c = 0;
        func_0x0244af00(iVar1,iVar5,uVar6,uStack_20);
      }
      else {
        iVar2 = func_0x0229f13c(0x3fa,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = 0;
        func_0x02174858(iVar2,iVar1,iVar5,uVar6);
      }
      return;
    }
  }
  return;
}



// ===== FAT.MBBoardCloud$$_OnSetUp RVA 0x1de3a4c =====

void FUN_01df3a4c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f3d,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9f3d,0);
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



// ===== FAT.MBBoardCloud$$Cleanup RVA 0x1de3a98 =====

void FUN_01df3a98(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x6ed0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6ed0,0);
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
                    /* WARNING: Could not recover jumptable at 0x01df3af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
  return;
}



// ===== FAT.MBBoardCloud$$GetCurClouds RVA 0x1de3afc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01df3afc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ced,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ced,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02236d7c + 0x2236c9c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02236d80 + 0x2236cb0),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02236d84 + 0x2236d6c));
    return uVar5;
  }
  func_0x01df3b58(param_1);
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== FAT.MBBoardCloud$$FillCurShowCloud RVA 0x1de3b58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df3b58(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01df3c60 + 0x1df3b6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df3c64 + 0x1df3b80));
    func_0x01384978(*(undefined4 *)(_UNK_01df3c68 + 0x1df3b8c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5cee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cee,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
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
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01df3c6c + 0x1df3be4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(iVar1 + 0x7c);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar6 + 0xc);
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (0 < iVar2) {
    func_0x0145b1dc(*(undefined4 *)(iVar6 + 8),0,iVar2,0);
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_020dd110 + 0x20dceec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd114 + 0x20dcf00),iVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_020dd118 + 0x20dcf0c));
    func_0x01384978(*(undefined4 *)(_UNK_020dd11c + 0x20dcf18));
    func_0x01384978(*(undefined4 *)(_UNK_020dd120 + 0x20dcf24));
    func_0x01384978(*(undefined4 *)(_UNK_020dd124 + 0x20dcf30));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x5cef,0);
  if (iVar2 == 0) {
    if (iVar6 != 0) {
      iVar1 = *(int *)(iVar1 + 0x70);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_38,iVar1,**(undefined4 **)(_UNK_020dd128 + 0x20dcfb8));
      puVar10 = *(undefined4 **)(_UNK_020dd12c + 0x20dcfcc);
      piVar9 = *(int **)(_UNK_020dd130 + 0x20dcfd4);
      while (iVar2 = func_0x03f5f428(&uStack_38,*puVar10), iVar1 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0210b3cc(iVar1,0);
        if (iVar2 != 0) {
          iVar5 = *(int *)(iVar6 + 8);
          uVar8 = *(uint *)(iVar6 + 0xc);
          iVar2 = *piVar9;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (uVar8 < *(uint *)(iVar5 + 0xc)) {
            *(uint *)(iVar6 + 0xc) = uVar8 + 1;
            *(int *)(iVar5 + uVar8 * 4 + 0x10) = iVar1;
          }
          else {
            func_0x0328f170(iVar6,iVar1,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_020dd134 + 0x20dd074));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5cef,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,iVar1,iVar6,0);
  }
  return;
}



// ===== FAT.MBBoardCloud$$GetNextCloud RVA 0x1de3c70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01df3c70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01df3e38 + 0x1df3c88);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df3e3c + 0x1df3c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01df3e40 + 0x1df3ca8));
    func_0x01384978(*(undefined4 *)(_UNK_01df3e44 + 0x1df3cb4));
    func_0x01384978(*(undefined4 *)(_UNK_01df3e48 + 0x1df3cc0));
    *pcVar5 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x5cfb,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_28,iVar2,**(undefined4 **)(_UNK_01df3e4c + 0x1df3d40));
    puVar6 = *(undefined4 **)(_UNK_01df3e50 + 0x1df3d5c);
    iVar2 = 0;
    iVar4 = 0x7fffffff;
    while (iVar3 = func_0x0145b12c(&uStack_28,*puVar6), iVar1 = iStack_1c, iVar3 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      if (iVar3 < iVar4) {
        iVar2 = iVar1;
        iVar4 = iVar3;
      }
    }
    func_0x0145b14c(&uStack_28,**(undefined4 **)(_UNK_01df3e54 + 0x1df3da0));
  }
  else {
    iVar2 = func_0x0229f13c(0x5cfb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02237388(iVar2,param_1,0);
  }
  return iVar2;
}



// ===== FAT.MBBoardCloud$$TryGetBelongCloud RVA 0x1de3e60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01df3e60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_01df40d0 + 0x1df3e80);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df40d4 + 0x1df3e98));
    func_0x01384978(*(undefined4 *)(_UNK_01df40d8 + 0x1df3ea4));
    func_0x01384978(*(undefined4 *)(_UNK_01df40dc + 0x1df3eb0));
    func_0x01384978(*(undefined4 *)(_UNK_01df40e0 + 0x1df3ebc));
    func_0x01384978(*(undefined4 *)(_UNK_01df40e4 + 0x1df3ec8));
    func_0x01384978(*(undefined4 *)(_UNK_01df40e8 + 0x1df3ed4));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x5cf0,0);
  if (iVar1 == 0) {
    *param_5 = 0;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_38,param_2,**(undefined4 **)(_UNK_01df40ec + 0x1df3f64));
    puVar5 = *(undefined4 **)(_UNK_01df40f0 + 0x1df3f80);
    do {
      uVar2 = func_0x0145b12c(&uStack_38,**(undefined4 **)(_UNK_01df40f4 + 0x1df3f88));
      iVar1 = iStack_2c;
      if (uVar2 == 0) {
        iVar4 = 6;
        goto LAB_01df4010;
      }
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 8);
      uStack_3c = 0;
      uStack_40 = 0;
      func_0x038fd264(&uStack_40,param_3,param_4,**(undefined4 **)(_UNK_01df40f8 + 0x1df3fbc));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02452484(iVar4,uStack_40,uStack_3c,*puVar5);
    } while (iVar4 == 0);
    iVar4 = 5;
    *param_5 = iVar1;
LAB_01df4010:
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01df40fc + 0x1df401c));
    uVar2 = uVar2 & iVar4 == 5;
  }
  else {
    iVar1 = func_0x0229f13c(0x5cf0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02236d88(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar2;
}



// ===== FAT.MBBoardCloud$$.ctor RVA 0x1de4108 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df4108(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01df4180 + 0x1df411c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df4184 + 0x1df4130));
    func_0x01384978(*(undefined4 *)(_UNK_01df4188 + 0x1df413c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01df418c + 0x1df4150));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01df4190 + 0x1df4164));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


