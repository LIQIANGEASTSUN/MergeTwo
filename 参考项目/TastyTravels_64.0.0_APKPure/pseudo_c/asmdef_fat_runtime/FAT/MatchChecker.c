/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MatchChecker$$Setup RVA 0x1e13960 =====

/* WARNING: Possible PIC construction at 0x0349eca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0349ecf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0349ed60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0349eca8) */
/* WARNING: Removing unreachable block (ram,0x0349ed64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e23960(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  byte abStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_20 [3];
  
  pcVar7 = (char *)(_UNK_01e23a8c + 0x1e23974);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e23a90 + 0x1e23988));
    func_0x01384978(*(undefined4 *)(_UNK_01e23a94 + 0x1e23994));
    func_0x01384978(*(undefined4 *)(_UNK_01e23a98 + 0x1e239a0));
    func_0x01384978(*(undefined4 *)(_UNK_01e23a9c + 0x1e239ac));
    func_0x01384978(*(undefined4 *)(_UNK_01e23aa0 + 0x1e239b8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5f54,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5f54,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    aiStack_20[0] = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    aiStack_20[0] = iStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01e23aa4 + 0x1e23a10) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01e23aa8 + 0x1e23a2c));
  uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01e23aac + 0x1e23a40));
  func_0x03ccc738(uVar9,param_1,**(undefined4 **)(_UNK_01e23ab0 + 0x1e23a5c),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = **(int **)(_UNK_01e23ab4 + 0x1e23a80);
  iVar8 = 0;
  aiStack_20[0] = unaff_r4;
  piVar3 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),uVar9,0);
  iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x02457d84(iVar6);
  }
  if ((piVar3 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar3,iVar6), iVar8 != 0)) {
    iVar6 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar2 + 8) = iVar8;
    iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84(iVar6);
    }
    if ((piVar3 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar3,iVar6), iVar8 != 0)) {
      iVar8 = 0;
      piVar3 = (int *)func_0x0487907c(*(undefined4 *)(iVar2 + 8),uVar9,0);
      iVar6 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x02457d84(iVar6);
      }
      if ((piVar3 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar3,iVar6), iVar8 != 0)) {
        iVar6 = *(int *)(iVar4 + 0x10);
        *(int *)(iVar2 + 8) = iVar8;
        iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x02457d84(iVar6);
        }
        if ((piVar3 == (int *)0x0) || (iVar2 = func_0x02457d4c(piVar3,iVar6), iVar2 != 0)) {
          return;
        }
      }
      else {
        unaff_lr = 0x349ed64;
        aiStack_20[0] = iVar6;
        register0x00000054 = (BADSPACEBASE *)aiStack_20;
      }
    }
    else {
      unaff_lr = 0x349ecfc;
      aiStack_20[0] = iVar6;
      register0x00000054 = (BADSPACEBASE *)aiStack_20;
    }
  }
  else {
    unaff_lr = 0x349eca8;
    aiStack_20[0] = iVar6;
    register0x00000054 = (BADSPACEBASE *)aiStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = aiStack_20[0];
  func_0x0142996c((int *)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar3 + 0x20),iVar6);
  uVar1 = *(uint *)((int)register0x00000054 + -0xc);
  if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
    uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
  }
  iVar2 = func_0x01419d2c(uVar1);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  func_0x01418ff0(iVar2,0);
  if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
    func_0x0148d9d4(*(int *)((int)register0x00000054 + -0xc));
  }
  return;
}



// ===== FAT.MatchChecker$$Cleanup RVA 0x1e13ab8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e23ab8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01e23ca8 + 0x1e23acc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e23cac + 0x1e23ae0));
    func_0x01384978(*(undefined4 *)(_UNK_01e23cb0 + 0x1e23aec));
    func_0x01384978(*(undefined4 *)(_UNK_01e23cb4 + 0x1e23af8));
    func_0x01384978(*(undefined4 *)(_UNK_01e23cb8 + 0x1e23b04));
    func_0x01384978(*(undefined4 *)(_UNK_01e23cbc + 0x1e23b10));
    func_0x01384978(*(undefined4 *)(_UNK_01e23cc0 + 0x1e23b1c));
    func_0x01384978(*(undefined4 *)(_UNK_01e23cc4 + 0x1e23b28));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5fe7,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01e23cc8 + 0x1e23b80) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01e23ccc + 0x1e23b9c));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e23cd0 + 0x1e23bb0));
    func_0x03ccc738(uVar5,param_1,**(undefined4 **)(_UNK_01e23cd4 + 0x1e23bd0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349edc0(iVar1,uVar5,**(undefined4 **)(_UNK_01e23cd8 + 0x1e23bf4));
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    func_0x01e23cdc(param_1);
    pcVar3 = (char *)(_UNK_01e23f38 + 0x1e23e74);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e23f3c + 0x1e23e88));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5b8c,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x24) != 0) {
        iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e23f40 + 0x1e23eec));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        uVar5 = *(undefined4 *)(param_1 + 0x24);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02450608(iVar1,uVar5,0);
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x5b8c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5fe7,0);
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
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MatchChecker$$StopMatchHintAnim RVA 0x1e13cdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e23cdc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_01e23e44 + 0x1e23cf0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e23e48 + 0x1e23d04));
    func_0x01384978(*(undefined4 *)(_UNK_01e23e4c + 0x1e23d10));
    func_0x01384978(*(undefined4 *)(_UNK_01e23e50 + 0x1e23d1c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b8d,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      func_0x02ce9e90(*(int *)(param_1 + 0x2c),0,0);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    uVar6 = func_0x02450ef4(0);
    puVar2 = *(undefined4 **)(_UNK_01e23e54 + 0x1e23d9c);
    *(undefined4 *)(param_1 + 0x28) = uVar6;
    iVar1 = func_0x03668dfc(*puVar2);
    iVar5 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    if (iVar5 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_01de380c(iVar1,iVar5,0);
    }
    if (iVar7 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_01de380c(iVar1,iVar7,0);
    }
    if (*(int *)(**(int **)(_UNK_01e23e58 + 0x1e23e04) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01e23e5c + 0x1e23e20));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b8d,0);
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
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.MatchChecker$$_StopFindTapTarget RVA 0x1e13e60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e23e60(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01e23f38 + 0x1e23e74);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e23f3c + 0x1e23e88));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b8c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b8c,0);
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
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e23f40 + 0x1e23eec));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450608(iVar1,uVar5,0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// ===== FAT.MatchChecker$$MarkCoord RVA 0x1e13f44 =====

void FUN_01e23f44(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = func_0x0229f06c(0x9ec0,0);
  if (iVar1 == 0) {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0x34);
    uVar2 = func_0x01e23ff4(param_1,param_2,param_3);
    uVar2 = uVar2 & 0x3f;
    uVar4 = uVar2 - 0x20;
    uVar3 = 1 << uVar2;
    if (-1 < (int)uVar4) {
      uVar3 = 0;
    }
    uVar2 = 1 >> (0x20 - uVar2 & 0xff);
    if (-1 < (int)uVar4) {
      uVar2 = 1 << (uVar4 & 0xff);
    }
    *(uint *)(param_1 + 0x30) = uVar3 | uVar5;
    *(uint *)(param_1 + 0x34) = uVar2 | uVar6;
  }
  else {
    iVar1 = func_0x0229f13c(0x9ec0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MatchChecker$$_CoordToBoardIdx RVA 0x1e13ff4 =====

int FUN_01e23ff4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5b96,0);
  if (iVar1 == 0) {
    param_2 = param_3 * 7 + param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0x5b96,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_2 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return param_2;
}



// ===== FAT.MatchChecker$$UnmarkCoord RVA 0x1e14068 =====

void FUN_01e24068(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = func_0x0229f06c(0x9ec2,0);
  if (iVar1 == 0) {
    uVar5 = *(uint *)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0x34);
    uVar2 = FUN_01e23ff4(param_1,param_2,param_3);
    uVar2 = uVar2 & 0x3f;
    uVar4 = uVar2 - 0x20;
    uVar3 = 1 << uVar2;
    if (-1 < (int)uVar4) {
      uVar3 = 0;
    }
    uVar2 = 1 >> (0x20 - uVar2 & 0xff);
    if (-1 < (int)uVar4) {
      uVar2 = 1 << (uVar4 & 0xff);
    }
    *(uint *)(param_1 + 0x30) = uVar5 & ~uVar3;
    *(uint *)(param_1 + 0x34) = uVar6 & ~uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x9ec2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MatchChecker$$IsCoordMarked RVA 0x1e14118 =====

uint FUN_01e24118(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = func_0x0229f06c(0x5b95,0);
  if (iVar1 == 0) {
    uVar3 = FUN_01e23ff4(param_1,param_2,param_3);
    uVar3 = uVar3 & 0x3f;
    uVar2 = *(uint *)(param_1 + 0x30) >> uVar3 | *(uint *)(param_1 + 0x34) << (0x20 - uVar3 & 0xff);
    if (-1 < (int)(uVar3 - 0x20)) {
      uVar2 = *(uint *)(param_1 + 0x34) >> (uVar3 - 0x20 & 0xff);
    }
    uVar2 = uVar2 & 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x5b95,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021809e0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.MatchChecker$$HasMatchPair RVA 0x1e141b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e241b4(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar4 = (char *)(_UNK_01e242a8 + 0x1e241c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e242ac + 0x1e241dc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ba8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ba8,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  piVar5 = *(int **)(_UNK_01e242b0 + 0x1e24234);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_01e242b4 + 0x1e24250);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e242b8 + 0x1e24264));
    *pcVar4 = '\x01';
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x24) != '\0') {
    return 0;
  }
  return (uint)(*(char *)(param_1 + 0x18) != '\0');
}



// ===== FAT.MatchChecker$$IsMatchHintItemReady RVA 0x1e142bc =====

/* WARNING: Possible PIC construction at 0x01e24500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e24504) */
/* WARNING: Removing unreachable block (ram,0x01e2450c) */
/* WARNING: Removing unreachable block (ram,0x01e24514) */
/* WARNING: Removing unreachable block (ram,0x01e24518) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e242bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  int unaff_r5;
  char *pcVar7;
  int *unaff_r6;
  undefined4 uVar8;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  
  pcVar7 = (char *)(_UNK_01e24528 + 0x1e242d0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2452c + 0x1e242e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e24530 + 0x1e242f0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e85,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e85,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_021742f8:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar5 = *(int *)(iVar1 + 0x10);
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
    if (iVar5 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar5,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar5,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
    uVar4 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
    return uVar4;
  }
  iVar5 = *(int *)(param_1 + 8);
  iVar1 = param_1;
  if (iVar5 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if ((((iVar5 != 0 && iVar1 != 0) && (iVar2 = func_0x02116a8c(iVar5,0), iVar2 == 0)) &&
      (iVar2 = func_0x02116a8c(iVar1,0), iVar2 == 0)) &&
     ((iVar2 = func_0x0210cd28(iVar5,0), iVar2 != 0 &&
      (iVar2 = func_0x0210cd28(iVar1,0), iVar2 != 0)))) {
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e24534 + 0x1e243b4));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = FUN_01ddbed8(iVar2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    unaff_r7 = func_0x01f090e0(iVar3,0);
    uVar8 = func_0x0210e5f4(iVar5,0);
    if (unaff_r7 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01e02548(unaff_r7,uVar8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_01ddbed8(iVar2,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01f090e0(iVar5,0);
    uVar8 = func_0x0210e5f4(iVar1,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    unaff_r4 = func_0x01e02548(iVar5,uVar8,0);
    unaff_r6 = *(int **)(_UNK_01e24538 + 0x1e24498);
    if (*(int *)(*unaff_r6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(param_1,0,0);
    if (iVar1 == 0) {
      if (*(int *)(*unaff_r6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0244fb8c(unaff_r4,0,0);
      if (iVar1 == 0) {
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0229f06c(0x5e86,0);
        if (iVar1 == 0) {
          return (uint)(*(int *)(param_1 + 0x2c) == 0xc);
        }
        iVar1 = func_0x0229f13c(0x5e86);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        unaff_lr = 0x1e24504;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
        unaff_r5 = param_1;
        goto SUB_021742f8;
      }
    }
  }
  return 0;
}



// ===== FAT.MatchChecker$$ShouldPlayMatchHintAnim RVA 0x1e1453c =====

uint FUN_01e2453c(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5e84,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e84,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_01e241b4(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_01e242bc(param_1), iVar1 != 0)) {
    if (0.0 < *(float *)(param_1 + 0x28)) {
      uVar4 = 0;
      fVar2 = (float)func_0x02450ef4(0);
      if (2.0 < fVar2 - *(float *)(param_1 + 0x28)) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x9c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar4 = (uint)(*(int *)(iVar1 + 0x14) == 0);
      }
    }
  }
  return uVar4;
}



// ===== FAT.MatchChecker$$PlayMatchHintAnim RVA 0x1e14620 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e24620(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  undefined4 uVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar13 = (char *)(_UNK_01e250a8 + 0x1e24640);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e250ac + 0x1e24654));
    func_0x01384978(*(undefined4 *)(_UNK_01e250b0 + 0x1e24660));
    func_0x01384978(*(undefined4 *)(_UNK_01e250b4 + 0x1e2466c));
    func_0x01384978(*(undefined4 *)(_UNK_01e250b8 + 0x1e24678));
    func_0x01384978(*(undefined4 *)(_UNK_01e250bc + 0x1e24684));
    func_0x01384978(*(undefined4 *)(_UNK_01e250c0 + 0x1e24690));
    *pcVar13 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x5e88,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x5e88,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&stack0xffffffb8,0,0);
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar15 = *(int *)(iVar5 + 8);
    uVar16 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 2;
    if (iVar5 == 0) {
      uVar12 = 1;
    }
    func_0x0245495c(iVar15,uVar16,&stack0xffffffd0,uVar12);
    return;
  }
  puVar6 = *(undefined4 **)(_UNK_01e250c4 + 0x1e246fc);
  *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
  iVar5 = func_0x03668dfc(*puVar6);
  iVar15 = *(int *)(param_1 + 8);
  iVar18 = *(int *)(param_1 + 0xc);
  if (*(int *)(**(int **)(_UNK_01e250c8 + 0x1e24714) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x019961b8(iVar15,iVar18,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar7 = FUN_01ddbed8(iVar5,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x01f090e0(iVar7,0);
  if (iVar15 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x0210e5f4(iVar15,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x01e02548(iVar7,uVar16,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar8 = FUN_01ddbed8(iVar5,0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = func_0x01f090e0(iVar8,0);
  if (iVar18 == 0) {
    func_0x01384bf0();
  }
  uVar16 = func_0x0210e5f4(iVar18,0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = func_0x01e02548(iVar8,uVar16,0);
  piVar17 = *(int **)(_UNK_01e250cc + 0x1e2482c);
  if (*(int *)(*piVar17 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar9 = func_0x0244fb8c(iVar7,0,0);
  if (iVar9 == 0) {
    if (*(int *)(*piVar17 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar9 = func_0x0244fb8c(iVar8,0,0);
    if (iVar9 == 0) {
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x0244fc34(iVar7,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar10 = func_0x0244fc34(iVar8,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar16 = func_0x0244fc34(iVar7,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      FUN_01de3774(iVar5,uVar16,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar16 = func_0x0244fc34(iVar8,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      FUN_01de3774(iVar5,uVar16,0);
      iVar5 = func_0x02166108(iVar15,iVar18,0);
      if (iVar5 != 0) {
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x0229f688(iVar8,0);
      }
      piVar14 = *(int **)(_UNK_01e250d0 + 0x1e24970);
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar13 = (char *)(_UNK_01e250d4 + 0x1e2498c);
      if (*pcVar13 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e250d8 + 0x1e249a0));
        *pcVar13 = '\x01';
      }
      iVar5 = *piVar14;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar14;
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x54);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x30);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar15 = func_0x0244fb8c(iVar5,0,0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar18 = func_0x0244fc64(iVar9,0);
      if (iVar15 == 0) {
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar16 = *(undefined4 *)(iVar5 + 0x30);
        if (iVar18 == 0) {
          func_0x01384bf0();
        }
        func_0x024524fc(&fStack_74,iVar18,uVar16,0,0,0);
        fVar26 = fStack_6c;
        fVar22 = fStack_70;
        fVar27 = fStack_74;
        pcVar13 = (char *)(_UNK_01e25100 + 0x1e24c14);
        if (*pcVar13 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e25104 + 0x1e24c30));
          *pcVar13 = '\x01';
        }
        piVar17 = *(int **)(_UNK_01e25108 + 0x1e24c44);
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar10,0);
        fVar25 = fStack_6c;
        fVar24 = fStack_70;
        fVar23 = fStack_74;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar9,0);
        fVar3 = fStack_6c;
        fVar2 = fStack_70;
        fVar1 = fStack_74;
        if (*pcVar13 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e2510c + 0x1e24cc8));
          *pcVar13 = '\x01';
        }
        fVar27 = SQRT(fVar22 * fVar22 + fVar27 * fVar27 + fVar26 * fVar26);
        fVar25 = fVar25 - fVar3;
        fVar24 = fVar24 - fVar2;
        fVar23 = fVar23 - fVar1;
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x01384ab4();
        }
        pcVar13 = (char *)(_UNK_01e25110 + 0x1e24d04);
        fVar26 = SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25);
        fVar22 = fVar26 * _UNK_01e250a0;
        if (fVar27 < fVar26 * _UNK_01e250a0) {
          fVar22 = fVar27;
        }
        if (*pcVar13 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e25114 + 0x1e24d38));
          *pcVar13 = '\x01';
        }
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (fVar26 <= _UNK_01e250a4) {
          pcVar13 = (char *)(_UNK_01e25118 + 0x1e24eec);
          if (*pcVar13 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e2511c + 0x1e24f00));
            *pcVar13 = '\x01';
          }
          pfVar11 = *(float **)(**(int **)(_UNK_01e25120 + 0x1e24f14) + 0x5c);
          fVar23 = *pfVar11;
          fVar24 = pfVar11[1];
          fVar25 = pfVar11[2];
        }
        else {
          fVar25 = fVar25 / fVar26;
          fVar24 = fVar24 / fVar26;
          fVar23 = fVar23 / fVar26;
        }
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar9,0);
        fVar1 = fStack_6c;
        fVar26 = fStack_70;
        fVar27 = fStack_74;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar10,0);
        fVar4 = fStack_6c;
        fVar3 = fStack_70;
        fVar2 = fStack_74;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar9,0);
        fVar21 = fVar22 * fVar25 + fStack_6c;
        fVar20 = fVar22 * fVar24 + fStack_70;
        fVar19 = fVar22 * fVar23 + fStack_74;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar10,0);
        uVar16 = func_0x01e256f0(param_1,iVar9,iVar10,fVar27,fVar26,fVar1,fVar19,fVar20,fVar21,fVar2
                                 ,fVar3,fVar4,fStack_74 - fVar22 * fVar23,
                                 fStack_70 - fVar22 * fVar24,fStack_6c - fVar22 * fVar25);
      }
      else {
        if (iVar18 == 0) {
          func_0x01384bf0();
        }
        func_0x024524fc(&fStack_74,iVar18,0x42200000,0,0,0);
        fVar26 = fStack_6c;
        fVar22 = fStack_70;
        fVar27 = fStack_74;
        pcVar13 = (char *)(_UNK_01e250dc + 0x1e24a68);
        if (*pcVar13 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e250e0 + 0x1e24a84));
          *pcVar13 = '\x01';
        }
        piVar17 = *(int **)(_UNK_01e250e4 + 0x1e24a98);
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar10,0);
        fVar25 = fStack_6c;
        fVar24 = fStack_70;
        fVar23 = fStack_74;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar9,0);
        fVar3 = fStack_6c;
        fVar2 = fStack_70;
        fVar1 = fStack_74;
        if (*pcVar13 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e250e8 + 0x1e24b1c));
          *pcVar13 = '\x01';
        }
        fVar27 = SQRT(fVar22 * fVar22 + fVar27 * fVar27 + fVar26 * fVar26);
        fVar25 = fVar25 - fVar3;
        fVar24 = fVar24 - fVar2;
        fVar23 = fVar23 - fVar1;
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x01384ab4();
        }
        pcVar13 = (char *)(_UNK_01e250ec + 0x1e24b58);
        fVar26 = SQRT(fVar24 * fVar24 + fVar23 * fVar23 + fVar25 * fVar25);
        fVar22 = fVar26 * _UNK_01e24ed8;
        if (fVar27 < fVar26 * _UNK_01e24ed8) {
          fVar22 = fVar27;
        }
        if (*pcVar13 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e250f0 + 0x1e24b8c));
          *pcVar13 = '\x01';
        }
        if (*(int *)(*piVar17 + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (fVar26 <= _UNK_01e24edc) {
          pcVar13 = (char *)(_UNK_01e250f4 + 0x1e24d80);
          if (*pcVar13 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e250f8 + 0x1e24d94));
            *pcVar13 = '\x01';
          }
          pfVar11 = *(float **)(**(int **)(_UNK_01e250fc + 0x1e24da8) + 0x5c);
          fVar23 = *pfVar11;
          fVar24 = pfVar11[1];
          fVar25 = pfVar11[2];
        }
        else {
          fVar25 = fVar25 / fVar26;
          fVar24 = fVar24 / fVar26;
          fVar23 = fVar23 / fVar26;
        }
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar9,0);
        fVar1 = fStack_6c;
        fVar26 = fStack_70;
        fVar27 = fStack_74;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar10,0);
        fVar4 = fStack_6c;
        fVar3 = fStack_70;
        fVar2 = fStack_74;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar9,0);
        fVar21 = fVar22 * fVar25 + fStack_6c;
        fVar20 = fVar22 * fVar24 + fStack_70;
        fVar19 = fVar22 * fVar23 + fStack_74;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd3c(&fStack_74,iVar10,0);
        uVar16 = func_0x01e2512c(param_1,iVar9,iVar10,fVar27,fVar26,fVar1,fVar19,fVar20,fVar21,fVar2
                                 ,fVar3,fVar4,fStack_74 - fVar22 * fVar23,
                                 fStack_70 - fVar22 * fVar24,fStack_6c - fVar22 * fVar25);
      }
      iVar5 = *(int *)(**(int **)(_UNK_01e25124 + 0x1e25050) + 0x74);
      *(undefined4 *)(param_1 + 0x2c) = uVar16;
      if (iVar5 == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0300d558(**(undefined4 **)(_UNK_01e25128 + 0x1e25070));
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar5,0);
    }
  }
  return;
}



// ===== FAT.MatchChecker$$_BuildMatchAnim RVA 0x1e1512c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01e2512c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  pcVar7 = (char *)(_UNK_01e25690 + 0x1e2514c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e25694 + 0x1e25164));
    func_0x01384978(*(undefined4 *)(_UNK_01e25698 + 0x1e25170));
    func_0x01384978(*(undefined4 *)(_UNK_01e2569c + 0x1e2517c));
    func_0x01384978(*(undefined4 *)(_UNK_01e256a0 + 0x1e25188));
    func_0x01384978(*(undefined4 *)(_UNK_01e256a4 + 0x1e25194));
    func_0x01384978(*(undefined4 *)(_UNK_01e256a8 + 0x1e251a0));
    func_0x01384978(*(undefined4 *)(_UNK_01e256ac + 0x1e251ac));
    func_0x01384978(*(undefined4 *)(_UNK_01e256b0 + 0x1e251b8));
    func_0x01384978(*(undefined4 *)(_UNK_01e256b4 + 0x1e251c4));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5e8f,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e256b8 + 0x1e25284));
    func_0x0244f5a0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = _UNK_01e256bc;
    *(undefined4 *)(iVar2 + 0x1c) = param_5;
    *(undefined4 *)(iVar2 + 0x20) = param_6;
    *(undefined4 *)(iVar2 + 0x30) = param_12;
    cVar1 = *(char *)(iVar4 + 0x1e252b4);
    *(undefined4 *)(iVar2 + 0x18) = param_4;
    *(undefined4 *)(iVar2 + 0x24) = param_3;
    *(undefined4 *)(iVar2 + 0x28) = param_10;
    *(undefined4 *)(iVar2 + 0x2c) = param_11;
    *(undefined4 *)(iVar2 + 8) = param_2;
    if (cVar1 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e256c0 + 0x1e252ec));
      *(char *)(iVar4 + 0x1e252b4) = '\x01';
    }
    fVar10 = _UNK_01e2568c;
    iVar4 = **(int **)(_UNK_01e256c4 + 0x1e25304);
    iVar6 = *(int *)(iVar4 + 0x5c);
    uVar13 = *(undefined8 *)(iVar6 + 0xc);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
    *(undefined8 *)(iVar2 + 0xc) = uVar13;
    iVar4 = *(int *)(iVar4 + 0x5c);
    fVar12 = *(float *)(iVar4 + 0x14) * fVar10;
    fVar11 = *(float *)(iVar4 + 0x10) * fVar10;
    fVar10 = *(float *)(iVar4 + 0xc) * fVar10;
    if (*(int *)(**(int **)(_UNK_01e256c8 + 0x1e25350) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x02ce71fc(0);
    uVar5 = func_0x02cf24e8(*(undefined4 *)(iVar2 + 8),param_7,param_8,param_9,0x3f800000,0,0);
    uVar5 = func_0x0309e924(uVar5,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),
                            *(undefined4 *)(iVar2 + 0x20),1,
                            **(undefined4 **)(_UNK_01e256cc + 0x1e253a8));
    puVar9 = *(undefined4 **)(_UNK_01e256d0 + 0x1e253c8);
    uVar5 = func_0x0309f0f8(uVar5,10,*puVar9);
    func_0x02cf668c(uVar3,uVar5,0);
    uVar5 = func_0x02cf24e8(*(undefined4 *)(iVar2 + 0x24),param_13,param_14,param_15,0x3f800000,0,0)
    ;
    puVar8 = *(undefined4 **)(_UNK_01e256d4 + 0x1e25414);
    uVar5 = func_0x0309e924(uVar5,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c),
                            *(undefined4 *)(iVar2 + 0x30),1,*puVar8);
    uVar5 = func_0x0309f0f8(uVar5,10,*puVar9);
    func_0x02cf66d8(uVar3,uVar5,0);
    uVar5 = func_0x02cf3bbc(*(undefined4 *)(iVar2 + 8),fVar10,fVar11,fVar12,0x3f800000,0);
    uVar5 = func_0x0309e924(uVar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                            *(undefined4 *)(iVar2 + 0x14),1,*puVar8);
    puVar9 = *(undefined4 **)(_UNK_01e256d8 + 0x1e25490);
    uVar5 = func_0x0309f0f8(uVar5,10,*puVar9);
    func_0x02cf66d8(uVar3,uVar5,0);
    uVar5 = func_0x02cf3bbc(*(undefined4 *)(iVar2 + 0x24),fVar10,fVar11,fVar12,0x3f800000,0);
    uVar5 = func_0x0309e924(uVar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                            *(undefined4 *)(iVar2 + 0x14),1,*puVar8);
    uVar5 = func_0x0309f0f8(uVar5,10,*puVar9);
    func_0x02cf66d8(uVar3,uVar5,0);
    func_0x02ce9384(uVar3,0x3f19999a,0);
    uVar5 = func_0x02cf24e8(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x18),
                            *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),0x3f800000,0
                            ,0);
    uVar5 = func_0x0309f0f8(uVar5,10,*puVar9);
    func_0x02cf668c(uVar3,uVar5,0);
    uVar5 = func_0x02cf24e8(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28),
                            *(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x30),0x3f800000,0
                            ,0);
    uVar5 = func_0x0309f0f8(uVar5,10,*puVar9);
    func_0x02cf66d8(uVar3,uVar5,0);
    uVar5 = func_0x02cf3bbc(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                            *(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),0x3f800000,0
                           );
    uVar5 = func_0x0309f0f8(uVar5,10,*puVar9);
    func_0x02cf66d8(uVar3,uVar5,0);
    uVar5 = func_0x02cf3bbc(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0xc),
                            *(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),0x3f800000,0
                           );
    uVar5 = func_0x0309f0f8(uVar5,10,*puVar9);
    func_0x02cf66d8(uVar3,uVar5,0);
    func_0x02ce9384(uVar3,0x3e99999a,0);
    func_0x0309f548(uVar3,0xffffffff,0,**(undefined4 **)(_UNK_01e256dc + 0x1e2561c));
    func_0x03074b50(uVar3,**(undefined4 **)(_UNK_01e256e0 + 0x1e25630));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e256e4 + 0x1e25644));
    func_0x02ce3d80(uVar5,iVar2,**(undefined4 **)(_UNK_01e256e8 + 0x1e25660),0);
    func_0x0309eae8(uVar3,uVar5,**(undefined4 **)(_UNK_01e256ec + 0x1e25678));
  }
  else {
    iVar2 = func_0x0229f13c(0x5e8f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02238260(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12,param_13,param_14,param_15,0);
  }
  return uVar3;
}



// ===== FAT.MatchChecker$$_BuildMatchAnimRefactor RVA 0x1e156f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01e256f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pcVar7 = (char *)(_UNK_01e25d38 + 0x1e25718);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e25d3c + 0x1e25730));
    func_0x01384978(*(undefined4 *)(_UNK_01e25d40 + 0x1e2573c));
    func_0x01384978(*(undefined4 *)(_UNK_01e25d44 + 0x1e25748));
    func_0x01384978(*(undefined4 *)(_UNK_01e25d48 + 0x1e25754));
    func_0x01384978(*(undefined4 *)(_UNK_01e25d4c + 0x1e25760));
    func_0x01384978(*(undefined4 *)(_UNK_01e25d50 + 0x1e2576c));
    func_0x01384978(*(undefined4 *)(_UNK_01e25d54 + 0x1e25778));
    func_0x01384978(*(undefined4 *)(_UNK_01e25d58 + 0x1e25784));
    func_0x01384978(*(undefined4 *)(_UNK_01e25d5c + 0x1e25790));
    func_0x01384978(*(undefined4 *)(_UNK_01e25d60 + 0x1e2579c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5e92,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e25d64 + 0x1e25854));
    func_0x0244f5a0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(_UNK_01e25d68 + 0x1e25880);
    *(undefined4 *)(iVar2 + 0x18) = param_4;
    *(undefined4 *)(iVar2 + 0x1c) = param_5;
    *(undefined4 *)(iVar2 + 0x20) = param_6;
    *(undefined4 *)(iVar2 + 0x28) = param_10;
    iVar4 = *piVar8;
    *(undefined4 *)(iVar2 + 0x2c) = param_11;
    *(undefined4 *)(iVar2 + 0x30) = param_12;
    iVar4 = *(int *)(iVar4 + 0x74);
    *(undefined4 *)(iVar2 + 0x24) = param_3;
    *(undefined4 *)(iVar2 + 8) = param_2;
    if (iVar4 == 0) {
      func_0x01384ab4();
    }
    pcVar7 = (char *)(_UNK_01e25d6c + 0x1e258c0);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e25d70 + 0x1e258d4));
      *pcVar7 = '\x01';
    }
    iVar4 = *piVar8;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar8;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x54);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x30);
    pcVar7 = (char *)(_UNK_01e25d74 + 0x1e25918);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e25d78 + 0x1e2592c));
      *pcVar7 = '\x01';
    }
    piVar8 = *(int **)(_UNK_01e25d7c + 0x1e25944);
    iVar5 = *(int *)(*piVar8 + 0x5c);
    fVar12 = *(float *)(iVar5 + 0xc);
    fVar13 = *(float *)(iVar5 + 0x10);
    fVar14 = *(float *)(iVar5 + 0x14);
    bVar1 = false;
    if (iVar4 == 0) {
      func_0x01384bf0();
      bVar1 = *pcVar7 == '\0';
    }
    fVar11 = *(float *)(iVar4 + 0x34);
    *(float *)(iVar2 + 0x14) = fVar14 * fVar11;
    *(float *)(iVar2 + 0x10) = fVar13 * fVar11;
    *(float *)(iVar2 + 0xc) = fVar12 * fVar11;
    if (bVar1) {
      func_0x01384978(*(undefined4 *)(_UNK_01e25d80 + 0x1e2599c));
      *pcVar7 = '\x01';
    }
    fVar12 = *(float *)(iVar4 + 0x38);
    iVar5 = *(int *)(*piVar8 + 0x5c);
    fVar14 = *(float *)(iVar5 + 0x14) * fVar12;
    fVar13 = *(float *)(iVar5 + 0x10) * fVar12;
    fVar12 = *(float *)(iVar5 + 0xc) * fVar12;
    if (*(int *)(**(int **)(_UNK_01e25d84 + 0x1e259ec) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x02ce71fc(0);
    uVar6 = func_0x02cf24e8(*(undefined4 *)(iVar2 + 8),param_7,param_8,param_9,
                            *(undefined4 *)(iVar4 + 0x28),0,0);
    puVar10 = *(undefined4 **)(_UNK_01e25d88 + 0x1e25a44);
    uVar6 = func_0x0309e924(uVar6,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c),
                            *(undefined4 *)(iVar2 + 0x20),1,*puVar10);
    puVar9 = *(undefined4 **)(_UNK_01e25d8c + 0x1e25a60);
    uVar6 = func_0x0309f01c(uVar6,*(undefined4 *)(iVar4 + 0x44),*puVar9);
    func_0x02cf668c(uVar3,uVar6,0);
    uVar6 = func_0x02cf24e8(*(undefined4 *)(iVar2 + 0x24),param_13,param_14,param_15,
                            *(undefined4 *)(iVar4 + 0x28),0,0);
    uVar6 = func_0x0309e924(uVar6,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c),
                            *(undefined4 *)(iVar2 + 0x30),1,*puVar10);
    uVar6 = func_0x0309f01c(uVar6,*(undefined4 *)(iVar4 + 0x44),*puVar9);
    func_0x02cf66d8(uVar3,uVar6,0);
    uVar6 = func_0x02cf3bbc(*(undefined4 *)(iVar2 + 8),fVar12,fVar13,fVar14,
                            *(undefined4 *)(iVar4 + 0x28),0);
    uVar6 = func_0x0309e924(uVar6,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                            *(undefined4 *)(iVar2 + 0x14),1,
                            **(undefined4 **)(_UNK_01e25d90 + 0x1e25b14));
    uVar6 = func_0x0309f01c(uVar6,*(undefined4 *)(iVar4 + 0x48),
                            **(undefined4 **)(_UNK_01e25d94 + 0x1e25b2c));
    func_0x02cf66d8(uVar3,uVar6,0);
    uVar6 = func_0x02cf3bbc(*(undefined4 *)(iVar2 + 0x24),fVar12,fVar13,fVar14,
                            *(undefined4 *)(iVar4 + 0x28),0);
    uVar6 = func_0x0309e924(uVar6,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                            *(undefined4 *)(iVar2 + 0x14),1,
                            **(undefined4 **)(_UNK_01e25d98 + 0x1e25b80));
    puVar9 = *(undefined4 **)(_UNK_01e25d9c + 0x1e25b98);
    uVar6 = func_0x0309f01c(uVar6,*(undefined4 *)(iVar4 + 0x48),*puVar9);
    func_0x02cf66d8(uVar3,uVar6,0);
    func_0x02ce9384(uVar3,*(undefined4 *)(iVar4 + 0x3c),0);
    uVar6 = func_0x02cf24e8(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x18),
                            *(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x20),
                            *(undefined4 *)(iVar4 + 0x2c),0,0);
    uVar6 = func_0x0309f01c(uVar6,*(undefined4 *)(iVar4 + 0x4c),*puVar9);
    func_0x02cf668c(uVar3,uVar6,0);
    uVar6 = func_0x02cf24e8(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x28),
                            *(undefined4 *)(iVar2 + 0x2c),*(undefined4 *)(iVar2 + 0x30),
                            *(undefined4 *)(iVar4 + 0x2c),0,0);
    uVar6 = func_0x0309f01c(uVar6,*(undefined4 *)(iVar4 + 0x4c),*puVar9);
    func_0x02cf66d8(uVar3,uVar6,0);
    uVar6 = func_0x02cf3bbc(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                            *(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),
                            *(undefined4 *)(iVar4 + 0x2c),0);
    uVar6 = func_0x0309f01c(uVar6,*(undefined4 *)(iVar4 + 0x50),*puVar9);
    func_0x02cf66d8(uVar3,uVar6,0);
    uVar6 = func_0x02cf3bbc(*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0xc),
                            *(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),
                            *(undefined4 *)(iVar4 + 0x2c),0);
    uVar6 = func_0x0309f01c(uVar6,*(undefined4 *)(iVar4 + 0x50),*puVar9);
    func_0x02cf66d8(uVar3,uVar6,0);
    func_0x02ce9384(uVar3,*(undefined4 *)(iVar4 + 0x40),0);
    func_0x0309f548(uVar3,0xffffffff,0,**(undefined4 **)(_UNK_01e25da0 + 0x1e25cbc));
    func_0x03074b50(uVar3,**(undefined4 **)(_UNK_01e25da4 + 0x1e25cd4));
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e25da8 + 0x1e25ce8));
    func_0x02ce3d80(uVar6,iVar2,**(undefined4 **)(_UNK_01e25dac + 0x1e25d04),0);
    func_0x0309eae8(uVar3,uVar6,**(undefined4 **)(_UNK_01e25db0 + 0x1e25d1c));
  }
  else {
    iVar2 = func_0x0229f13c(0x5e92,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02238260(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12,param_13,param_14,param_15,0);
  }
  return uVar3;
}



// ===== FAT.MatchChecker.<>c__DisplayClass25_0$$.ctor RVA 0x1e15db4 =====

void FUN_01e25db4(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MatchChecker.<>c__DisplayClass26_0$$.ctor RVA 0x1e15dbc =====

void FUN_01e25dbc(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MatchChecker$$OnScreenStateChanged RVA 0x1e15dc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e25dc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x5f55,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      pcVar4 = (char *)(_UNK_01e23e44 + 0x1e23cf0);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e23e48 + 0x1e23d04));
        func_0x01384978(*(undefined4 *)(_UNK_01e23e4c + 0x1e23d10));
        func_0x01384978(*(undefined4 *)(_UNK_01e23e50 + 0x1e23d1c));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x5b8d,0);
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x2c) != 0) {
          func_0x02ce9e90(*(int *)(param_1 + 0x2c),0,0);
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        uVar6 = func_0x02450ef4(0);
        puVar2 = *(undefined4 **)(_UNK_01e23e54 + 0x1e23d9c);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
        iVar1 = func_0x03668dfc(*puVar2);
        iVar5 = *(int *)(param_1 + 8);
        iVar7 = *(int *)(param_1 + 0xc);
        if (iVar5 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01de380c(iVar1,iVar5,0);
        }
        if (iVar7 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01de380c(iVar1,iVar7,0);
        }
        if (*(int *)(**(int **)(_UNK_01e23e58 + 0x1e23e04) + 0x74) == 0) {
          func_0x01384ab4();
        }
        param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01e23e5c + 0x1e23e20));
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0229f06c(0x3f,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
          return;
        }
        iVar1 = func_0x0229f13c(0x3f,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x5b8d,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_30 = 0;
      func_0x0245494c(&uStack_48,0,0);
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
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
  }
  else {
    uStack_2c = param_14;
    uStack_30 = param_13;
    uStack_34 = param_12;
    uStack_38 = param_11;
    uStack_3c = param_10;
    uStack_40 = param_9;
    uStack_28 = param_3;
    iVar1 = func_0x0229f13c(0x5f55,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = uStack_2c;
    uStack_44 = 0;
    func_0x021eadcc(iVar1,param_1,param_2,uStack_28,param_4,param_5,param_6,param_7,param_8,
                    uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30);
  }
  return;
}



// ===== FAT.MatchChecker$$GetMatchPairCoords RVA 0x1e15ed4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e25ed4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01e25fe0 + 0x1e25ef0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e25fe4 + 0x1e25f04));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x931b,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_2 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,iVar3,0);
    uVar2 = uStack_24;
    uVar1 = uStack_28;
    iVar3 = *(int *)(param_2 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,iVar3,0);
    puVar4 = *(undefined4 **)(_UNK_01e25fe8 + 0x1e25fc4);
    *param_1 = 0;
    param_1[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    func_0x0391006c(param_1,uVar1,uVar2,uStack_28,uStack_24,*puVar4);
  }
  else {
    iVar3 = func_0x0229f13c(0x931b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02268884(&uStack_28,iVar3,param_2,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
    param_1[2] = uStack_20;
    param_1[3] = uStack_1c;
  }
  return;
}



// ===== FAT.MatchChecker$$HasTapTarget RVA 0x1e15fec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e25fec(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01e26160 + 0x1e26004);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e26164 + 0x1e26018));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa100,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa100,0);
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
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  piVar5 = *(int **)(_UNK_01e26168 + 0x1e26074);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_01e2616c + 0x1e26090);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e26170 + 0x1e260a4));
    *pcVar4 = '\x01';
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar7 = 0;
  if ((*(char *)(*(int *)(iVar1 + 0x5c) + 0x24) == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    fVar2 = (float)func_0x02450ef4(0);
    fVar9 = *(float *)(param_1 + 0x28);
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
    uVar7 = 0;
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x32c),(byte)(in_fpscr >> 0x16) & 3);
    if (fVar8 / _UNK_01e2615c < fVar2 - fVar9) {
      uVar7 = 1;
    }
  }
  return uVar7;
}



// ===== FAT.MatchChecker$$GetTapTargetCoord RVA 0x1e16174 =====

void FUN_01e26174(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0xa101,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_18,iVar1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa101,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218000c(&uStack_18,iVar1,param_2,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.MatchChecker$$SetMatchTid RVA 0x1e16200 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e26200(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  char *pcVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  uint uStack_74;
  uint uStack_70;
  uint uVar23;
  undefined4 uVar24;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint auStack_28 [4];
  
  iVar10 = func_0x0229f06c(0x9315,0);
  if (iVar10 != 0) {
    iVar10 = func_0x0229f13c(0x9315,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar10 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar10 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar20 = *(int *)(iVar10 + 8);
    uVar22 = *(undefined4 *)(iVar10 + 0xc);
    iVar10 = *(int *)(iVar10 + 0x10);
    if (iVar20 == 0) {
      func_0x01384bf0();
    }
    uVar16 = 3;
    if (iVar10 == 0) {
      uVar16 = 2;
    }
    func_0x0245495c(iVar20,uVar22,&uStack_38,uVar16,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  pcVar17 = (char *)(_UNK_01e26760 + 0x1e26284);
  if (*pcVar17 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e26764 + 0x1e26298));
    func_0x01384978(*(undefined4 *)(_UNK_01e26768 + 0x1e262a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2676c + 0x1e262b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e26770 + 0x1e262bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e26774 + 0x1e262c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e26778 + 0x1e262d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2677c + 0x1e262e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e26780 + 0x1e262ec));
    *pcVar17 = '\x01';
  }
  auStack_28[0] = 0;
  uStack_2c = 0;
  iVar10 = func_0x0229f06c(0x5b8b,0);
  if (iVar10 == 0) {
    FUN_01e23e60(param_1);
    iVar10 = func_0x03668dfc(**(undefined4 **)(_UNK_01e26784 + 0x1e2635c));
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar20 = *(int *)(iVar10 + 0x7c);
    *(undefined1 *)(param_1 + 0x18) = 0;
    FUN_01e23cdc(param_1);
    iVar21 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (iVar21 == 0) {
      func_0x01384bf0();
    }
    iVar14 = *(int *)(iVar21 + 0xc);
    *(undefined4 *)(iVar21 + 0xc) = 0;
    *(int *)(iVar21 + 0x10) = *(int *)(iVar21 + 0x10) + 1;
    if (0 < iVar14) {
      func_0x0145b1dc(*(undefined4 *)(iVar21 + 8),0,iVar14,0);
    }
    iVar10 = *(int *)(iVar10 + 0x7c);
    uVar22 = func_0x01384be4(**(undefined4 **)(_UNK_01e26788 + 0x1e263dc));
    func_0x03ccb96c(uVar22,param_1,**(undefined4 **)(_UNK_01e2678c + 0x1e263fc),0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x020dba14(iVar10,uVar22,0);
    func_0x01e26b18(param_1);
    piVar18 = *(int **)(_UNK_01e26790 + 0x1e26434);
    iVar21 = *(int *)(param_1 + 0x20);
    iVar10 = *piVar18;
    if (*(int *)(iVar10 + 0x74) == 0) {
      func_0x01384ab4();
      iVar10 = *piVar18;
    }
    uVar22 = **(undefined4 **)(iVar10 + 0x5c);
    if (iVar21 == 0) {
      func_0x01384bf0();
    }
    func_0x033a5bb8(iVar21,uVar22,**(undefined4 **)(_UNK_01e26794 + 0x1e26470));
    iVar10 = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    while( true ) {
      iVar21 = *(int *)(param_1 + 0x20);
      if (iVar21 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar21 + 0xc) <= iVar10) break;
      iVar21 = *(int *)(param_1 + 0x20);
      if (iVar21 == 0) {
        func_0x01384bf0();
      }
      func_0x033a3230(&uStack_50,iVar21,iVar10,**(undefined4 **)(_UNK_01e26798 + 0x1e264cc));
      uVar9 = uStack_30;
      iVar21 = iStack_34;
      uVar16 = uStack_3c;
      uVar6 = uStack_40;
      uVar4 = uStack_44;
      uVar22 = uStack_4c;
      uVar1 = uStack_50;
      if ((uStack_44 & 0x100) == 0) break;
      iVar10 = iVar10 + 1;
      uVar12 = uStack_30 & 1;
      uVar11 = uStack_40 & 1;
      iVar14 = iVar10;
      uVar23 = uStack_38;
      uVar24 = uStack_48;
      while( true ) {
        iVar19 = *(int *)(param_1 + 0x20);
        if (iVar19 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar19 + 0xc) <= iVar14) break;
        iVar19 = *(int *)(param_1 + 0x20);
        if (iVar19 == 0) {
          func_0x01384bf0();
        }
        func_0x033a3230(&uStack_50,iVar19,iVar14,**(undefined4 **)(_UNK_01e2679c + 0x1e2657c));
        uVar8 = uStack_38;
        uVar7 = uStack_3c;
        uVar5 = uStack_44;
        uVar3 = uStack_48;
        uVar2 = uStack_50;
        if ((((uVar11 & uStack_40) != 0) && (iVar21 != 0 || iStack_34 != 0)) &&
           (iVar19 = func_0x01e26e40(param_1,uVar1,uVar22,uVar24,uVar4,uVar6,uVar16,uVar23,iVar21,
                                     uVar9,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,
                                     uStack_3c,uStack_38,iStack_34,uStack_30,auStack_28,&uStack_2c),
           uVar13 = auStack_28[0], uVar15 = uStack_2c, iVar19 != 0)) goto LAB_01e26754;
        iVar19 = func_0x02164e30(uVar16,uVar24,uVar7,uVar3,uVar23,uVar8,0);
        if (iVar19 != 0) {
          if (iVar20 == 0) {
            func_0x01384bf0();
          }
          iVar19 = func_0x020e8e2c(iVar20,uVar1,uVar2,0);
          if (iVar19 != 0) {
            if ((uVar5 & 0x10000) == 0) {
              uVar13 = uVar1;
              uVar15 = uVar2;
              if (uVar12 != 0) goto LAB_01e26754;
              if (uStack_70 == 0 || uStack_74 == 0) {
                uStack_74 = uVar1;
                uStack_70 = uVar2;
              }
            }
            else {
              uStack_70 = uVar2;
              uStack_74 = uVar1;
            }
          }
        }
        iVar14 = iVar14 + 1;
      }
    }
    uVar1 = 0;
    if (uStack_70 != 0) {
      uVar1 = uStack_74;
    }
    uVar13 = uStack_74;
    uVar15 = uStack_70;
    if (uStack_70 != 0 && uVar1 != 0) {
LAB_01e26754:
      func_0x01e26fd0(param_1,uVar13,uVar15);
    }
    else {
      func_0x01e26acc(param_1);
    }
  }
  else {
    iVar10 = func_0x0229f13c(0x5b8b,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x021744a8(iVar10,param_1,0,0);
  }
  return;
}



// ===== FAT.MatchChecker$$_FindMatch RVA 0x1e16268 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e26268(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  int *piVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iStack_74;
  int iStack_70;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar20 = (char *)(_UNK_01e26760 + 0x1e26284);
  if (*pcVar20 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e26764 + 0x1e26298));
    func_0x01384978(*(undefined4 *)(_UNK_01e26768 + 0x1e262a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2676c + 0x1e262b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e26770 + 0x1e262bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e26774 + 0x1e262c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e26778 + 0x1e262d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2677c + 0x1e262e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e26780 + 0x1e262ec));
    *pcVar20 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iVar12 = func_0x0229f06c(0x5b8b,0);
  if (iVar12 == 0) {
    FUN_01e23e60(param_1);
    iVar12 = func_0x03668dfc(**(undefined4 **)(_UNK_01e26784 + 0x1e2635c));
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar12 + 0x7c);
    *(undefined1 *)(param_1 + 0x18) = 0;
    FUN_01e23cdc(param_1);
    iVar23 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (iVar23 == 0) {
      func_0x01384bf0();
    }
    iVar18 = *(int *)(iVar23 + 0xc);
    *(undefined4 *)(iVar23 + 0xc) = 0;
    *(int *)(iVar23 + 0x10) = *(int *)(iVar23 + 0x10) + 1;
    if (0 < iVar18) {
      func_0x0145b1dc(*(undefined4 *)(iVar23 + 8),0,iVar18,0);
    }
    iVar12 = *(int *)(iVar12 + 0x7c);
    uVar14 = func_0x01384be4(**(undefined4 **)(_UNK_01e26788 + 0x1e263dc));
    func_0x03ccb96c(uVar14,param_1,**(undefined4 **)(_UNK_01e2678c + 0x1e263fc),0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x020dba14(iVar12,uVar14,0);
    func_0x01e26b18(param_1);
    piVar21 = *(int **)(_UNK_01e26790 + 0x1e26434);
    iVar23 = *(int *)(param_1 + 0x20);
    iVar12 = *piVar21;
    if (*(int *)(iVar12 + 0x74) == 0) {
      func_0x01384ab4();
      iVar12 = *piVar21;
    }
    uVar14 = **(undefined4 **)(iVar12 + 0x5c);
    if (iVar23 == 0) {
      func_0x01384bf0();
    }
    func_0x033a5bb8(iVar23,uVar14,**(undefined4 **)(_UNK_01e26794 + 0x1e26470));
    iVar12 = 0;
    iStack_70 = 0;
    iStack_74 = 0;
    while( true ) {
      iVar23 = *(int *)(param_1 + 0x20);
      if (iVar23 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar23 + 0xc) <= iVar12) break;
      iVar23 = *(int *)(param_1 + 0x20);
      if (iVar23 == 0) {
        func_0x01384bf0();
      }
      func_0x033a3230(&iStack_50,iVar23,iVar12,**(undefined4 **)(_UNK_01e26798 + 0x1e264cc));
      uVar11 = uStack_30;
      iVar18 = iStack_34;
      uVar9 = uStack_38;
      uVar7 = uStack_3c;
      uVar6 = uStack_40;
      uVar4 = uStack_44;
      uVar2 = uStack_48;
      uVar14 = uStack_4c;
      iVar23 = iStack_50;
      if ((uStack_44 & 0x100) == 0) break;
      iVar12 = iVar12 + 1;
      uVar17 = uStack_30 & 1;
      uVar15 = uStack_40 & 1;
      iVar24 = iVar12;
      while( true ) {
        iVar22 = *(int *)(param_1 + 0x20);
        if (iVar22 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar22 + 0xc) <= iVar24) break;
        iVar22 = *(int *)(param_1 + 0x20);
        if (iVar22 == 0) {
          func_0x01384bf0();
        }
        func_0x033a3230(&iStack_50,iVar22,iVar24,**(undefined4 **)(_UNK_01e2679c + 0x1e2657c));
        uVar10 = uStack_38;
        uVar8 = uStack_3c;
        uVar5 = uStack_44;
        uVar3 = uStack_48;
        iVar1 = iStack_50;
        if ((((param_2 == 0) && ((uVar15 & uStack_40) != 0)) && (iVar18 != 0 || iStack_34 != 0)) &&
           (iVar16 = func_0x01e26e40(param_1,iVar23,uVar14,uVar2,uVar4,uVar6,uVar7,uVar9,iVar18,
                                     uVar11,iStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,
                                     uStack_3c,uStack_38,iStack_34,uStack_30,&iStack_28,&iStack_2c),
           iVar22 = iStack_28, iVar19 = iStack_2c, iVar16 != 0)) goto LAB_01e26754;
        iVar22 = func_0x02164e30(uVar7,uVar2,uVar8,uVar3,uVar9,uVar10,0);
        if (iVar22 != 0) {
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar22 = func_0x020e8e2c(iVar13,iVar23,iVar1,0);
          if (iVar22 != 0) {
            if ((uVar5 & 0x10000) == 0) {
              iVar22 = iVar23;
              iVar19 = iVar1;
              if (uVar17 != 0) goto LAB_01e26754;
              if (iStack_70 == 0 || iStack_74 == 0) {
                iStack_74 = iVar23;
                iStack_70 = iVar1;
              }
            }
            else {
              iStack_70 = iVar1;
              iStack_74 = iVar23;
            }
          }
        }
        iVar24 = iVar24 + 1;
      }
    }
    iVar12 = 0;
    if (iStack_70 != 0) {
      iVar12 = iStack_74;
    }
    iVar22 = iStack_74;
    iVar19 = iStack_70;
    if (iStack_70 != 0 && iVar12 != 0) {
LAB_01e26754:
      func_0x01e26fd0(param_1,iVar22,iVar19);
    }
    else {
      func_0x01e26acc(param_1);
    }
  }
  else {
    iVar12 = func_0x0229f13c(0x5b8b,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x021744a8(iVar12,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MatchChecker$$FindMatch RVA 0x1e167a0 =====

/* WARNING: Possible PIC construction at 0x01e26340: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e26344) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e267a0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  char *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar10;
  int unaff_r7;
  undefined4 unaff_r8;
  int iVar11;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  uint uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  int iStack_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  uint uStack_a0;
  int *piStack_9c;
  int *piStack_98;
  int iStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int aiStack_28 [4];
  
  iVar5 = func_0x0229f06c(0x5b8a,0);
  if (iVar5 == 0) {
    unaff_r4 = (char *)(_UNK_01e26760 + 0x1e26284);
    iStack_5c = param_2;
    if (*unaff_r4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e26764 + 0x1e26298));
      func_0x01384978(*(undefined4 *)(_UNK_01e26768 + 0x1e262a4));
      func_0x01384978(*(undefined4 *)(_UNK_01e2676c + 0x1e262b0));
      func_0x01384978(*(undefined4 *)(_UNK_01e26770 + 0x1e262bc));
      func_0x01384978(*(undefined4 *)(_UNK_01e26774 + 0x1e262c8));
      func_0x01384978(*(undefined4 *)(_UNK_01e26778 + 0x1e262d4));
      func_0x01384978(*(undefined4 *)(_UNK_01e2677c + 0x1e262e0));
      func_0x01384978(*(undefined4 *)(_UNK_01e26780 + 0x1e262ec));
      *unaff_r4 = '\x01';
    }
    aiStack_28[0] = 0;
    iStack_2c = 0;
    iVar5 = func_0x0229f06c(0x5b8b,0);
    if (iVar5 == 0) {
      FUN_01e23e60(param_1);
      iVar5 = func_0x03668dfc(**(undefined4 **)(_UNK_01e26784 + 0x1e2635c));
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iStack_6c = *(int *)(iVar5 + 0x7c);
      *(undefined1 *)(param_1 + 0x18) = 0;
      FUN_01e23cdc(param_1);
      iVar6 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar6 + 0xc);
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      if (0 < iVar7) {
        func_0x0145b1dc(*(undefined4 *)(iVar6 + 8),0,iVar7,0);
      }
      iVar5 = *(int *)(iVar5 + 0x7c);
      uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01e26788 + 0x1e263dc));
      func_0x03ccb96c(uVar10,param_1,**(undefined4 **)(_UNK_01e2678c + 0x1e263fc),0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x020dba14(iVar5,uVar10,0);
      func_0x01e26b18(param_1);
      piVar9 = *(int **)(_UNK_01e26790 + 0x1e26434);
      iVar6 = *(int *)(param_1 + 0x20);
      iVar5 = *piVar9;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar9;
      }
      uVar10 = **(undefined4 **)(iVar5 + 0x5c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x033a5bb8(iVar6,uVar10,**(undefined4 **)(_UNK_01e26794 + 0x1e26470));
      iStack_70 = 0;
      iStack_74 = 0;
      iVar5 = 0;
      while( true ) {
        iVar6 = *(int *)(param_1 + 0x20);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar5) break;
        iVar6 = *(int *)(param_1 + 0x20);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x033a3230(&iStack_50,iVar6,iVar5,**(undefined4 **)(_UNK_01e26798 + 0x1e264cc));
        uVar10 = uStack_3c;
        uStack_78 = uStack_44;
        if ((uStack_44 & 0x100) == 0) break;
        iVar11 = iVar5 + 1;
        iStack_60 = iStack_50;
        uStack_80 = uStack_4c;
        uStack_54 = uStack_48;
        iStack_64 = iStack_34;
        uStack_58 = uStack_38;
        uStack_7c = uStack_30;
        uStack_88 = uStack_30 & 1;
        uStack_84 = uStack_40;
        uStack_68 = uStack_40 & 1;
        iStack_8c = iVar11;
        while( true ) {
          iVar6 = *(int *)(param_1 + 0x20);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar5 = iStack_8c;
          if (*(int *)(iVar6 + 0xc) <= iVar11) break;
          iVar5 = *(int *)(param_1 + 0x20);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x033a3230(&iStack_50,iVar5,iVar11,**(undefined4 **)(_UNK_01e2679c + 0x1e2657c));
          uVar3 = uStack_38;
          uVar2 = uStack_3c;
          uVar1 = uStack_44;
          uVar8 = uStack_48;
          iVar5 = iStack_50;
          if (((iStack_5c == 0) && ((uStack_68 & uStack_40) != 0)) &&
             (iStack_64 != 0 || iStack_34 != 0)) {
            piStack_98 = &iStack_2c;
            uStack_b0 = uStack_40;
            uStack_ac = uStack_3c;
            uStack_a8 = uStack_38;
            piStack_9c = aiStack_28;
            uStack_d8 = uStack_78;
            iStack_a4 = iStack_34;
            uStack_d4 = uStack_84;
            uStack_d0 = uVar10;
            uStack_cc = uStack_58;
            iStack_c8 = iStack_64;
            uStack_c4 = uStack_7c;
            iStack_c0 = iStack_50;
            uStack_bc = uStack_4c;
            uStack_a0 = uStack_30;
            uStack_b8 = uStack_48;
            uStack_b4 = uStack_44;
            iVar4 = func_0x01e26e40(param_1,iStack_60,uStack_80,uStack_54);
            iVar6 = aiStack_28[0];
            iVar7 = iStack_2c;
            if (iVar4 != 0) goto LAB_01e26754;
          }
          uStack_d8 = uStack_58;
          uStack_d4 = uVar3;
          uStack_d0 = 0;
          iVar7 = func_0x02164e30(uVar10,uStack_54,uVar2,uVar8);
          iVar6 = iStack_6c;
          if (iVar7 != 0) {
            if (iStack_6c == 0) {
              func_0x01384bf0();
            }
            iVar6 = func_0x020e8e2c(iVar6,iStack_60,iVar5,0);
            if (iVar6 != 0) {
              if ((uVar1 & 0x10000) == 0) {
                iVar6 = iStack_60;
                iVar7 = iVar5;
                if (uStack_88 != 0) goto LAB_01e26754;
                if (iStack_70 == 0 || iStack_74 == 0) {
                  iStack_74 = iStack_60;
                  iStack_70 = iVar5;
                }
              }
              else {
                iStack_70 = iVar5;
                iStack_74 = iStack_60;
              }
            }
          }
          iVar11 = iVar11 + 1;
        }
      }
      iVar5 = 0;
      if (iStack_70 != 0) {
        iVar5 = iStack_74;
      }
      iVar6 = iStack_74;
      iVar7 = iStack_70;
      if (iStack_70 != 0 && iVar5 != 0) {
LAB_01e26754:
        func_0x01e26fd0(param_1,iVar6,iVar7);
      }
      else {
        func_0x01e26acc(param_1);
      }
      return;
    }
    iVar5 = func_0x0229f13c(0x5b8b,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e26344;
    param_2 = iStack_5c;
    unaff_r5 = iVar5;
    unaff_r7 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_d8;
  }
  else {
    iVar5 = func_0x0229f13c(0x5b8a,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(char **)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar6 = *(int *)(iVar5 + 0x10);
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
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485228((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar5 + 8);
  uVar10 = *(undefined4 *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 3;
  if (iVar5 == 0) {
    uVar8 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar10,(undefined1 *)((int)register0x00000054 + -0x38),uVar8);
  return;
}



// ===== FAT.MatchChecker$$GetMatchItem RVA 0x1e16804 =====

undefined4 FUN_01e26804(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
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
  
  uVar5 = func_0x0229f06c(0x93d5,0);
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
    }
    if (iVar3 == 0 || iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x246,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(iVar3 + 0xc);
    }
    iVar1 = func_0x0229f13c(0x246,0);
    param_1 = iVar3;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x93d5,0);
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.MatchChecker$$CheckHint RVA 0x1e16878 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e26878(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01e26ab8 + 0x1e26894);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e26abc + 0x1e268a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e26ac0 + 0x1e268b4));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x5e72,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01e26ac4 + 0x1e26918) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = FUN_01deae60(0);
    iVar5 = *(int *)(param_1 + 8);
    if (((((iVar5 != 0) && (param_2 == 0)) && (iVar6 = *(int *)(param_1 + 0xc), iVar6 != 0)) &&
        ((iVar2 = func_0x02116a8c(iVar5,0), iVar2 == 0 &&
         (iVar2 = func_0x02116a8c(iVar6,0), iVar2 == 0)))) &&
       ((iVar2 = func_0x0210cd28(iVar5,0), iVar2 != 0 &&
        (iVar2 = func_0x0210cd28(iVar6,0), iVar2 != 0)))) {
      func_0x0210cd7c(&uStack_24,iVar5,0);
      iVar2 = FUN_01e24118(param_1,uStack_24,uStack_20);
      if (iVar2 == 0) {
        func_0x0210cd7c(&uStack_24,iVar6,0);
        iVar2 = FUN_01e24118(param_1,uStack_24,uStack_20);
        if ((iVar1 != 0) && (iVar2 == 0)) {
          uVar3 = func_0x0210e2d4(iVar5,0);
          puVar7 = *(undefined4 **)(_UNK_01e26ac8 + 0x1e26a18);
          iVar2 = func_0x03d5bb20(iVar1,uVar3,&uStack_1c,*puVar7);
          if (iVar2 == 0) {
            uVar3 = func_0x0210e2d4(iVar6,0);
            iVar1 = func_0x03d5bb20(iVar1,uVar3,&uStack_1c,*puVar7);
            if (iVar1 == 0) {
              iVar1 = func_0x0210e250(iVar5,2,0,0);
              if (iVar1 != 0) {
                return;
              }
              iVar1 = func_0x0210e250(iVar5,1,0,0);
              if (iVar1 != 0) {
                return;
              }
              iVar1 = func_0x0210e250(iVar5,3,0,0);
              if (iVar1 != 0) {
                return;
              }
            }
          }
        }
      }
    }
    FUN_01e26268(param_1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5e72,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021744a8(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MatchChecker$$_TryFindTapTarget RVA 0x1e16acc =====

void FUN_01e26acc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ba7,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5ba7,0);
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



// ===== FAT.MatchChecker$$_BuildScanCache RVA 0x1e16b18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e26b18(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar12 = (char *)(_UNK_01e26e14 + 0x1e26b38);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e26e18 + 0x1e26b4c));
    func_0x01384978(*(undefined4 *)(_UNK_01e26e1c + 0x1e26b58));
    func_0x01384978(*(undefined4 *)(_UNK_01e26e20 + 0x1e26b64));
    func_0x01384978(*(undefined4 *)(_UNK_01e26e24 + 0x1e26b70));
    func_0x01384978(*(undefined4 *)(_UNK_01e26e28 + 0x1e26b7c));
    func_0x01384978(*(undefined4 *)(_UNK_01e26e2c + 0x1e26b88));
    *pcVar12 = '\x01';
  }
  iVar9 = func_0x0229f06c(0x5b9b,0);
  if (iVar9 != 0) {
    iVar9 = func_0x0229f13c(0x5b9b,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar9 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar9 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar14 = *(int *)(iVar9 + 8);
    uVar15 = *(undefined4 *)(iVar9 + 0xc);
    iVar9 = *(int *)(iVar9 + 0x10);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar11 = 2;
    if (iVar9 == 0) {
      uVar11 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar14,uVar15,&uStack_30,uVar11);
    return;
  }
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar14 = *(int *)(iVar9 + 0xc);
  *(undefined4 *)(iVar9 + 0xc) = 0;
  *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
  if (0 < iVar14) {
    func_0x0145b1dc(*(undefined4 *)(iVar9 + 8),0,iVar14,0);
  }
  iVar9 = *(int *)(param_1 + 0x20);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x033a3070(iVar9,**(undefined4 **)(_UNK_01e26e30 + 0x1e26c3c));
  iVar14 = *(int *)(param_1 + 0x1c);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  if (iVar9 < *(int *)(iVar14 + 0xc)) {
    iVar14 = *(int *)(param_1 + 0x1c);
    iVar9 = *(int *)(param_1 + 0x20);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar15 = *(undefined4 *)(iVar14 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x033a308c(iVar9,uVar15,**(undefined4 **)(_UNK_01e26e34 + 0x1e26c98));
  }
  uVar15 = 0;
  uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar17 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar9 = 0;
  while( true ) {
    iVar14 = *(int *)(param_1 + 0x1c);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar14 + 0xc) <= iVar9) break;
    iVar14 = *(int *)(param_1 + 0x1c);
    iVar16 = *(int *)(param_1 + 0x20);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0328eea8(iVar14,iVar9,**(undefined4 **)(_UNK_01e26e38 + 0x1e26cec));
    uStack_40 = 0;
    uStack_60 = uVar15;
    uStack_5c = uVar11;
    uStack_58 = uVar17;
    uStack_54 = uVar18;
    uStack_50 = uVar15;
    uStack_4c = uVar11;
    uStack_48 = uVar17;
    uStack_44 = uVar18;
    func_0x01e270b0(&uStack_60,uVar10);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    uVar8 = uStack_40;
    uVar7 = uStack_44;
    uVar6 = uStack_48;
    uVar5 = uStack_4c;
    uVar4 = uStack_50;
    uVar3 = uStack_54;
    uVar2 = uStack_58;
    uVar1 = uStack_5c;
    uVar10 = uStack_60;
    iVar14 = *(int *)(iVar16 + 8);
    uVar13 = *(uint *)(iVar16 + 0xc);
    *(int *)(iVar16 + 0x10) = *(int *)(iVar16 + 0x10) + 1;
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    if (uVar13 < *(uint *)(iVar14 + 0xc)) {
      *(uint *)(iVar16 + 0xc) = uVar13 + 1;
      iVar14 = iVar14 + uVar13 * 0x24;
      *(undefined4 *)(iVar14 + 0x30) = uVar8;
      *(undefined4 *)(iVar14 + 0x10) = uVar10;
      *(undefined4 *)(iVar14 + 0x14) = uVar1;
      *(undefined4 *)(iVar14 + 0x18) = uVar2;
      *(undefined4 *)(iVar14 + 0x1c) = uVar3;
      *(undefined4 *)(iVar14 + 0x20) = uVar4;
      *(undefined4 *)(iVar14 + 0x24) = uVar5;
      *(undefined4 *)(iVar14 + 0x28) = uVar6;
      *(undefined4 *)(iVar14 + 0x2c) = uVar7;
    }
    else {
      func_0x033a364c(iVar16);
    }
    iVar9 = iVar9 + 1;
  }
  return;
}



// ===== FAT.MatchChecker$$_TryGetConsumeMatch RVA 0x1e16e40 =====

undefined4
FUN_01e26e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
            int param_18,undefined4 param_19,undefined4 *param_20,undefined4 *param_21)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x5b9c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b9c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02233ae8(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16,
                            param_17,param_18,param_19,param_20,param_21,0);
    return uVar2;
  }
  *param_20 = 0;
  *param_21 = 0;
  if ((param_9 == 0) || (iVar1 = func_0x021238b8(param_9,param_11,0), iVar1 == 0)) {
    if (param_18 == 0) {
      return 0;
    }
    iVar1 = func_0x021238b8(param_18,param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
    *param_20 = param_2;
    *param_21 = param_11;
  }
  else {
    *param_20 = param_11;
    *param_21 = param_2;
  }
  return 1;
}



// ===== FAT.MatchChecker$$_SetMatch RVA 0x1e16fd0 =====

void FUN_01e26fd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x5b9e,0);
  if (iVar1 == 0) {
    uVar2 = func_0x02450ef4(0);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined1 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
  }
  else {
    iVar1 = func_0x0229f13c(0x5b9e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MatchChecker$$ReverseMatch RVA 0x1e17054 =====

void FUN_01e27054(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x931a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x931a,0);
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
  uVar4 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  return;
}



// ===== FAT.MatchChecker.HintScanItem$$.ctor RVA 0x1e170b0 =====

void FUN_01e270b0(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar2 = func_0x0210e5f4(0,0);
    param_1[1] = iVar2;
    func_0x01384bf0();
    iVar2 = func_0x0210e2d4(0,0);
    param_1[2] = iVar2;
    func_0x01384bf0();
  }
  else {
    iVar2 = func_0x0210e5f4(param_2,0);
    param_1[1] = iVar2;
    iVar2 = func_0x0210e2d4(param_2,0);
    param_1[2] = iVar2;
  }
  uVar1 = func_0x02116a8c(param_2,0);
  *(undefined1 *)(param_1 + 3) = uVar1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x02116ae0(param_2,0);
  *(undefined1 *)((int)param_1 + 0xd) = uVar1;
  if (param_2 == 0) {
    func_0x01384bf0();
    uVar1 = func_0x02116a38(0,0);
    *(undefined1 *)((int)param_1 + 0xe) = uVar1;
    func_0x01384bf0();
  }
  else {
    uVar1 = func_0x02116a38(param_2,0);
    *(undefined1 *)((int)param_1 + 0xe) = uVar1;
  }
  bVar3 = false;
  iVar2 = func_0x02119be0(param_2,0,0);
  *(bool *)((int)param_1 + 0xf) = iVar2 != 0;
  if ((char)param_1[3] == '\0') {
    bVar3 = *(char *)((int)param_1 + 0xd) != '\0' && iVar2 == 0;
  }
  *(bool *)(param_1 + 4) = bVar3;
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar2 = func_0x02119c84(0,0,0);
    param_1[5] = iVar2;
    func_0x01384bf0();
    iVar2 = func_0x02119d28(0,0,0);
    param_1[6] = iVar2;
    func_0x01384bf0();
  }
  else {
    iVar2 = func_0x02119c84(param_2,0,0);
    param_1[5] = iVar2;
    iVar2 = func_0x02119d28(param_2,0,0);
    param_1[6] = iVar2;
  }
  iVar2 = func_0x02119dcc(param_2,0,0);
  bVar3 = true;
  param_1[7] = iVar2;
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar2 = func_0x02119e70(0,0,0);
      if (iVar2 != 0) goto LAB_01e2724c;
      func_0x01384bf0();
    }
    else {
      iVar2 = func_0x02119e70(param_2,0,0);
      if (iVar2 != 0) goto LAB_01e2724c;
    }
    iVar2 = func_0x02119f14(param_2,0,0);
    bVar3 = iVar2 != 0;
  }
LAB_01e2724c:
  *(bool *)(param_1 + 8) = bVar3;
  return;
}



// ===== FAT.MatchChecker$$_FillItem RVA 0x1e172b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e272b8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
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
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01e27484 + 0x1e272d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e27488 + 0x1e272e8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2748c + 0x1e272f4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b94,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_20,param_2,0);
  iVar1 = FUN_01e24118(param_1,uStack_20,uStack_1c);
  if (iVar1 == 0) {
    iVar1 = func_0x02166c84(param_2,0);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0210e2d4(param_2,0);
      if (*(int *)(**(int **)(_UNK_01e27490 + 0x1e273bc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = FUN_01dead70(uVar6,0);
      if (iVar1 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (0 < iVar1) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0210e2d4(param_2,0);
      if (iVar1 != iVar4) {
        return;
      }
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(uint *)(iVar1 + 0xc);
    piVar2 = *(int **)(_UNK_01e27494 + 0x1e2743c);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar8 = *piVar2;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (uVar7 < *(uint *)(iVar4 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar7 + 1;
      *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
    }
    else {
      func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38))
      ;
    }
  }
  return;
}



// ===== FAT.MatchChecker$$.ctor RVA 0x1e17498 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e27498(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01e27554 + 0x1e274ac);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e27558 + 0x1e274c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2755c + 0x1e274cc));
    func_0x01384978(*(undefined4 *)(_UNK_01e27560 + 0x1e274d8));
    func_0x01384978(*(undefined4 *)(_UNK_01e27564 + 0x1e274e4));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e27568 + 0x1e274f8));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01e2756c + 0x1e2750c));
  puVar2 = *(undefined4 **)(_UNK_01e27570 + 0x1e27520);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x033a2cd8(uVar1,**(undefined4 **)(_UNK_01e27574 + 0x1e27538));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MatchChecker$$.cctor RVA 0x1e17578 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e27578(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01e275e4 + 0x1e27588);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e275e8 + 0x1e2759c));
    func_0x01384978(*(undefined4 *)(_UNK_01e275ec + 0x1e275a8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e275f0 + 0x1e275bc));
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(**(int **)(_UNK_01e275f4 + 0x1e275d8) + 0x5c) = uVar1;
  return;
}



// ===== FAT.MatchChecker.HintScanItemComparer$$.ctor RVA 0x1e175f8 =====

void FUN_01e275f8(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MatchChecker.HintScanItemComparer$$Compare RVA 0x1e17600 =====

int FUN_01e27600(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10,undefined4 param_11,int param_12,undefined4 param_13,
                uint param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                undefined4 param_18,undefined4 param_19)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xa102,0);
  if (iVar1 == 0) {
    param_3 = param_3 - param_12;
    if ((param_5 & 0x100) == 0) {
      if ((param_14 & 0x100) != 0) {
        param_3 = 1;
      }
    }
    else if ((param_14 & 0x100) == 0) {
      param_3 = -1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa102,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_3 = func_0x0228bc84(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_9,param_10,param_11,param_12,param_13,param_14,param_15,param_16
                              ,param_17,param_18,param_19,0);
  }
  return param_3;
}



// ===== FAT.MatchChecker.<>c__DisplayClass25_0$$<_BuildMatchAnim>b__0 RVA 0x1e1770c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2770c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar2 = (char *)(_UNK_01e27878 + 0x1e27724);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2787c + 0x1e27738));
    *pcVar2 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01e27880 + 0x1e2774c);
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar3,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024503a4(iVar1,uVar3,uVar4,uVar5,0);
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024503d4(iVar1,uVar3,uVar4,uVar5,0);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar3,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024503a4(iVar1,uVar5,uVar3,uVar4,0);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x24);
    uVar4 = *(undefined4 *)(param_1 + 0x28);
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024503d4(iVar1,uVar4,uVar5,uVar3,0);
  }
  return;
}



// ===== FAT.MatchChecker.<>c__DisplayClass26_0$$<_BuildMatchAnimRefactor>b__0 RVA 0x1e17884 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e27884(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar2 = (char *)(_UNK_01e279f0 + 0x1e2789c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e279f4 + 0x1e278b0));
    *pcVar2 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01e279f8 + 0x1e278c4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar3,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024503a4(iVar1,uVar3,uVar4,uVar5,0);
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024503d4(iVar1,uVar3,uVar4,uVar5,0);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar3,0,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024503a4(iVar1,uVar5,uVar3,uVar4,0);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x24);
    uVar4 = *(undefined4 *)(param_1 + 0x28);
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024503d4(iVar1,uVar4,uVar5,uVar3,0);
  }
  return;
}


