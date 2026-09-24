/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBItemActivityToken$$SetData RVA 0x1dff078 =====

/* WARNING: Possible PIC construction at 0x01e0f1a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e0f1a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0f078(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x1673,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x18) = param_2;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0210e2d4(iVar1,0);
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    param_2 = *(int *)(param_2 + 0x30);
    pcVar4 = (char *)(_UNK_01e0f2d4 + 0x1e0f128);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0f2d8 + 0x1e0f13c));
      func_0x01384978(*(undefined4 *)(_UNK_01e0f2dc + 0x1e0f148));
      func_0x01384978(*(undefined4 *)(_UNK_01e0f2e0 + 0x1e0f154));
      *pcVar4 = '\x01';
    }
    auStack_1c[0] = 0;
    iVar1 = func_0x0229f06c(0x1674,0);
    if (iVar1 == 0) {
      func_0x01e0f358(param_1);
      if ((param_2 != 0) &&
         (iVar1 = func_0x02feb690(param_2,auStack_1c,0,**(undefined4 **)(_UNK_01e0f2e4 + 0x1e0f1d0))
         , iVar1 != 0)) {
        iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e0f2e8 + 0x1e0f1ec));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x78);
        if (iVar1 != 0) {
          uVar5 = 0;
          iVar2 = func_0x021419d0(iVar1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0215e684(iVar2,0);
          if (iVar2 != 0) {
            iVar2 = func_0x02139cf4(iVar1,0);
            iVar1 = func_0x021419d0(iVar1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar5 = 0;
            uVar3 = func_0x0215e630(iVar1,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x020dfd3c(iVar2,uVar3,0);
            if (iVar1 != 0) {
              uVar5 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e0f2ec + 0x1e0f2b0));
            }
          }
          func_0x01e0f510(param_1,auStack_1c[0],uVar5);
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x1674,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e0f1a8;
    unaff_r4 = param_1;
    unaff_r5 = param_2;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_20;
  }
  else {
    iVar1 = func_0x0229f13c(0x1673,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
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



// ===== FAT.MBItemActivityToken$$_RefreshRes RVA 0x1dff10c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0f10c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01e0f2d4 + 0x1e0f128);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0f2d8 + 0x1e0f13c));
    func_0x01384978(*(undefined4 *)(_UNK_01e0f2dc + 0x1e0f148));
    func_0x01384978(*(undefined4 *)(_UNK_01e0f2e0 + 0x1e0f154));
    *pcVar5 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x1674,0);
  if (iVar1 == 0) {
    func_0x01e0f358(param_1);
    if ((param_2 != 0) &&
       (iVar1 = func_0x02feb690(param_2,&uStack_1c,0,**(undefined4 **)(_UNK_01e0f2e4 + 0x1e0f1d0)),
       iVar1 != 0)) {
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e0f2e8 + 0x1e0f1ec));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x78);
      if (iVar1 != 0) {
        uVar4 = 0;
        iVar2 = func_0x021419d0(iVar1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0215e684(iVar2,0);
        if (iVar2 != 0) {
          iVar2 = func_0x02139cf4(iVar1,0);
          iVar1 = func_0x021419d0(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          uVar3 = func_0x0215e630(iVar1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x020dfd3c(iVar2,uVar3,0);
          if (iVar1 != 0) {
            uVar4 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e0f2ec + 0x1e0f2b0));
          }
        }
        func_0x01e0f510(param_1,uStack_1c,uVar4);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1674,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBItemActivityToken$$ClearData RVA 0x1dff2f0 =====

void FUN_01e0f2f0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5da3,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    iVar1 = func_0x0229f06c(0x1675,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
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
    iVar1 = func_0x0229f13c(0x1675,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5da3,0);
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



// ===== FAT.MBItemActivityToken$$_ResetUI RVA 0x1dff358 =====

void FUN_01e0f358(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1675,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1675,0);
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
  iVar1 = *(int *)(param_1 + 0x14);
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



// ===== FAT.MBItemActivityToken$$RefreshActivityTokenState RVA 0x1dff3e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0f3e4(int param_1)

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
  undefined4 auStack_1c [3];
  
  pcVar3 = (char *)(_UNK_01e0f4b0 + 0x1e0f3f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0f4b4 + 0x1e0f40c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f3f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f3f,0);
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
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(**(int **)(_UNK_01e0f4b8 + 0x1e0f464) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(uVar5,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  pcVar3 = (char *)(_UNK_01e0f2d4 + 0x1e0f128);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0f2d8 + 0x1e0f13c));
    func_0x01384978(*(undefined4 *)(_UNK_01e0f2dc + 0x1e0f148));
    func_0x01384978(*(undefined4 *)(_UNK_01e0f2e0 + 0x1e0f154));
    *pcVar3 = '\x01';
  }
  auStack_1c[0] = 0;
  iVar4 = func_0x0229f06c(0x1674,0);
  if (iVar4 == 0) {
    FUN_01e0f358(param_1);
    if ((iVar1 != 0) &&
       (iVar1 = func_0x02feb690(iVar1,auStack_1c,0,**(undefined4 **)(_UNK_01e0f2e4 + 0x1e0f1d0)),
       iVar1 != 0)) {
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e0f2e8 + 0x1e0f1ec));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x78);
      if (iVar1 != 0) {
        uVar5 = 0;
        iVar4 = func_0x021419d0(iVar1,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0215e684(iVar4,0);
        if (iVar4 != 0) {
          iVar4 = func_0x02139cf4(iVar1,0);
          iVar1 = func_0x021419d0(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 0;
          uVar2 = func_0x0215e630(iVar1,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x020dfd3c(iVar4,uVar2,0);
          if (iVar1 != 0) {
            uVar5 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e0f2ec + 0x1e0f2b0));
          }
        }
        func_0x01e0f510(param_1,auStack_1c[0],uVar5);
      }
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x1674,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar4,param_1,iVar1,0);
  }
  return;
}



// ===== FAT.MBItemActivityToken$$GetScoreMicRect RVA 0x1dff4bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e0f4bc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f3c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f3c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021bb474 + 0x21bb394);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021bb478 + 0x21bb3a8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021bb47c + 0x21bb464));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.MBItemActivityToken$$_RefreshBL RVA 0x1dff510 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0f510(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_01e0f760 + 0x1e0f530);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0f764 + 0x1e0f544));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x1676,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0210ccb4(param_2,0);
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xd8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(param_2 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02b44310(iVar1,uVar9,&iStack_24,0);
      iVar1 = iStack_24;
      if (iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02b48934(iVar1,0);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0244ffd4(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,1,0);
          piVar3 = (int *)func_0x021566f4(0);
          uVar9 = *(undefined4 *)(param_2 + 0x14);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar3;
          uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01e0f768 + 0x1e0f6a4)) {
                puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x100);
                goto LAB_01e0f6ec;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e0f768 + 0x1e0f6a4),8);
LAB_01e0f6ec:
          iVar1 = (*(code *)*puVar4)(piVar3,uVar9,puVar4[1]);
          if (iVar1 != 0) {
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x02165c58(param_3,*(undefined4 *)(param_2 + 0x14),0);
            iVar5 = 0x20;
            if (iVar2 != 0) {
              iVar5 = 0x14;
            }
            iVar2 = *(int *)(param_1 + 0x14);
            uVar9 = *(undefined4 *)(iVar1 + iVar5);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x0267cc24(iVar2,uVar9,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1676,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBItemActivityToken$$.ctor RVA 0x1dff76c =====

void FUN_01e0f76c(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


