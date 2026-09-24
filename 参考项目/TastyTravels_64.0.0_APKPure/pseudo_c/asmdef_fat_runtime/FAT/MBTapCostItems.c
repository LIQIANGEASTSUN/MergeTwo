/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBTapCostItems$$get_ItemRoot RVA 0x205186c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0206186c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb051,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb051,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0218b1e0 + 0x218b100);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218b1e4 + 0x218b114),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218b1e8 + 0x218b1d0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.MBTapCostItems$$Awake RVA 0x20518c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020618c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
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
  
  pcVar3 = (char *)(_UNK_020619fc + 0x20618d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02061a00 + 0x20618e8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb052,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb052,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar5 = *(int **)(_UNK_02061a04 + 0x2061940);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02450910(uVar6,0);
  if (iVar1 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02450910(uVar6,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450148(iVar1,0);
    if (0 < iVar1) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450158(iVar1,0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0244ffd4(iVar1,0);
      *(undefined4 *)(param_1 + 0x14) = uVar6;
    }
  }
  return;
}



// ===== FAT.MBTapCostItems$$OnEnable RVA 0x2051a08 =====

/* WARNING: Possible PIC construction at 0x02061b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02061b5c) */
/* WARNING: Removing unreachable block (ram,0x02061b68) */
/* WARNING: Removing unreachable block (ram,0x02061bcc) */
/* WARNING: Removing unreachable block (ram,0x02061bd0) */
/* WARNING: Removing unreachable block (ram,0x02061c1c) */
/* WARNING: Removing unreachable block (ram,0x02061c20) */
/* WARNING: Removing unreachable block (ram,0x020d8a00) */
/* WARNING: Removing unreachable block (ram,0x020d8a20) */
/* WARNING: Removing unreachable block (ram,0x020d8a34) */
/* WARNING: Removing unreachable block (ram,0x020d8a40) */
/* WARNING: Removing unreachable block (ram,0x020d8a5c) */
/* WARNING: Removing unreachable block (ram,0x020d8a78) */
/* WARNING: Removing unreachable block (ram,0x020d8a88) */
/* WARNING: Removing unreachable block (ram,0x020d8aa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061a08(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *unaff_r5;
  char *pcVar5;
  char *pcVar6;
  int unaff_r6;
  undefined4 uVar7;
  int unaff_r7;
  undefined4 *puVar8;
  int unaff_r8;
  undefined4 *puVar9;
  int unaff_lr;
  int iStack_18;
  char *pcStack_14;
  
  iVar2 = func_0x0229f06c(0xb053,0);
  if (iVar2 == 0) {
    pcVar5 = (char *)(_UNK_02061c38 + 0x2061a74);
    iStack_18 = unaff_r4;
    pcStack_14 = unaff_r5;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02061c3c + 0x2061a88));
      func_0x01384978(*(undefined4 *)(_UNK_02061c40 + 0x2061a94));
      func_0x01384978(*(undefined4 *)(_UNK_02061c44 + 0x2061aa0));
      func_0x01384978(*(undefined4 *)(_UNK_02061c48 + 0x2061aac));
      func_0x01384978(*(undefined4 *)(_UNK_02061c4c + 0x2061ab8));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0xa506,0);
    if (iVar2 == 0) {
      iVar2 = func_0x02450440(param_1,0);
      cVar1 = '\0';
      if (iVar2 != 0) {
        cVar1 = *(char *)(param_1 + 0x1c);
      }
      iVar3 = iStack_18;
      pcVar6 = pcStack_14;
      if (iVar2 != 0 && cVar1 != '\0') {
        iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_02061c50 + 0x2061b38));
        if (iVar2 != 0) {
          pcVar5 = *(char **)(iVar2 + 0x7c);
        }
        if (iVar2 == 0) {
          pcVar5 = (char *)0x0;
        }
        if (pcVar5 == *(char **)(param_1 + 0x4c)) {
          return;
        }
        unaff_lr = 0x2061b5c;
        iVar3 = param_1;
        pcVar6 = pcVar5;
        register0x00000054 = (BADSPACEBASE *)&iStack_18;
      }
      *(int *)((int)register0x00000054 + -4) = unaff_lr;
      *(int *)((int)register0x00000054 + -8) = unaff_r8;
      *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
      *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
      *(char **)((int)register0x00000054 + -0x14) = pcVar6;
      *(int *)((int)register0x00000054 + -0x18) = iVar3;
      pcVar5 = (char *)(_UNK_02061ff0 + 0x2061e8c);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02061ff4 + 0x2061ea0));
        func_0x01384978(*(undefined4 *)(_UNK_02061ff8 + 0x2061eac));
        func_0x01384978(*(undefined4 *)(_UNK_02061ffc + 0x2061eb8));
        func_0x01384978(*(undefined4 *)(_UNK_02062000 + 0x2061ec4));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x0229f06c(0xa507,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x4c);
        if (iVar2 != 0) {
          puVar9 = *(undefined4 **)(_UNK_02062004 + 0x2061f28);
          uVar7 = func_0x01384be4(*puVar9);
          puVar8 = *(undefined4 **)(_UNK_02062008 + 0x2061f44);
          func_0x03ccb96c(uVar7,param_1,*puVar8,0);
          func_0x020da470(iVar2,uVar7,0);
          iVar2 = *(int *)(param_1 + 0x4c);
          uVar7 = func_0x01384be4(*puVar9);
          func_0x03ccb96c(uVar7,param_1,*puVar8,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x020da310(iVar2,uVar7,0);
          iVar2 = *(int *)(param_1 + 0x4c);
          uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_0206200c + 0x2061fa8));
          func_0x03cd51ec(uVar7,param_1,**(undefined4 **)(_UNK_02062010 + 0x2061fc4),0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x020d8ab0(iVar2,uVar7,0);
          *(undefined4 *)(param_1 + 0x4c) = 0;
        }
        return;
      }
      iVar2 = func_0x0229f13c(0xa507,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      unaff_r6 = *(int *)((int)register0x00000054 + -0x10);
      unaff_r7 = *(int *)((int)register0x00000054 + -0xc);
      unaff_r8 = *(int *)((int)register0x00000054 + -8);
      unaff_lr = *(int *)((int)register0x00000054 + -4);
      unaff_r4 = *(int *)((int)register0x00000054 + -0x18);
      unaff_r5 = *(char **)((int)register0x00000054 + -0x14);
    }
    else {
      iVar2 = func_0x0229f13c(0xa506,0);
      unaff_r4 = iStack_18;
      unaff_r5 = pcStack_14;
      if (iVar2 == 0) {
        func_0x01384bf0();
        unaff_r4 = iStack_18;
        unaff_r5 = pcStack_14;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb053,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(char **)((int)register0x00000054 + -0x14) = unaff_r5;
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



// ===== FAT.MBTapCostItems$$RefreshBoardItemCountListener RVA 0x2051a60 =====

/* WARNING: Possible PIC construction at 0x02061b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02061b5c) */
/* WARNING: Removing unreachable block (ram,0x02061b68) */
/* WARNING: Removing unreachable block (ram,0x02061bcc) */
/* WARNING: Removing unreachable block (ram,0x02061bd0) */
/* WARNING: Removing unreachable block (ram,0x02061c1c) */
/* WARNING: Removing unreachable block (ram,0x02061c20) */
/* WARNING: Removing unreachable block (ram,0x020d8a00) */
/* WARNING: Removing unreachable block (ram,0x020d8a20) */
/* WARNING: Removing unreachable block (ram,0x020d8a34) */
/* WARNING: Removing unreachable block (ram,0x020d8a40) */
/* WARNING: Removing unreachable block (ram,0x020d8a5c) */
/* WARNING: Removing unreachable block (ram,0x020d8a78) */
/* WARNING: Removing unreachable block (ram,0x020d8a88) */
/* WARNING: Removing unreachable block (ram,0x020d8aa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061a60(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *unaff_r5;
  char *pcVar5;
  int unaff_r6;
  undefined4 uVar6;
  int unaff_r7;
  undefined4 *puVar7;
  int unaff_r8;
  undefined4 *puVar8;
  int unaff_lr;
  int *piVar9;
  
  piVar9 = (int *)&stack0xffffffe8;
  pcVar5 = (char *)(_UNK_02061c38 + 0x2061a74);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02061c3c + 0x2061a88));
    func_0x01384978(*(undefined4 *)(_UNK_02061c40 + 0x2061a94));
    func_0x01384978(*(undefined4 *)(_UNK_02061c44 + 0x2061aa0));
    func_0x01384978(*(undefined4 *)(_UNK_02061c48 + 0x2061aac));
    func_0x01384978(*(undefined4 *)(_UNK_02061c4c + 0x2061ab8));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa506,0);
  if (iVar2 == 0) {
    iVar2 = func_0x02450440(param_1,0);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(param_1 + 0x1c);
    }
    if (iVar2 != 0 && cVar1 != '\0') {
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_02061c50 + 0x2061b38));
      unaff_r5 = pcVar5;
      if (iVar2 != 0) {
        unaff_r5 = *(char **)(iVar2 + 0x7c);
      }
      if (iVar2 == 0) {
        unaff_r5 = (char *)0x0;
      }
      if (unaff_r5 == *(char **)(param_1 + 0x4c)) {
        return;
      }
      unaff_lr = 0x2061b5c;
      unaff_r4 = param_1;
      register0x00000054 = (BADSPACEBASE *)piVar9;
    }
    *(int *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r8;
    *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
    *(char **)((int)register0x00000054 + -0x14) = unaff_r5;
    piVar9 = (int *)((int)register0x00000054 + -0x18);
    *piVar9 = unaff_r4;
    pcVar5 = (char *)(_UNK_02061ff0 + 0x2061e8c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02061ff4 + 0x2061ea0));
      func_0x01384978(*(undefined4 *)(_UNK_02061ff8 + 0x2061eac));
      func_0x01384978(*(undefined4 *)(_UNK_02061ffc + 0x2061eb8));
      func_0x01384978(*(undefined4 *)(_UNK_02062000 + 0x2061ec4));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0xa507,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x4c);
      if (iVar2 != 0) {
        puVar8 = *(undefined4 **)(_UNK_02062004 + 0x2061f28);
        uVar6 = func_0x01384be4(*puVar8);
        puVar7 = *(undefined4 **)(_UNK_02062008 + 0x2061f44);
        func_0x03ccb96c(uVar6,param_1,*puVar7,0);
        func_0x020da470(iVar2,uVar6,0);
        iVar2 = *(int *)(param_1 + 0x4c);
        uVar6 = func_0x01384be4(*puVar8);
        func_0x03ccb96c(uVar6,param_1,*puVar7,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x020da310(iVar2,uVar6,0);
        iVar2 = *(int *)(param_1 + 0x4c);
        uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0206200c + 0x2061fa8));
        func_0x03cd51ec(uVar6,param_1,**(undefined4 **)(_UNK_02062010 + 0x2061fc4),0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x020d8ab0(iVar2,uVar6,0);
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      return;
    }
    iVar2 = func_0x0229f13c(0xa507,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_r4 = *piVar9;
    unaff_r5 = *(char **)((int)register0x00000054 + -0x14);
    unaff_r6 = *(int *)((int)register0x00000054 + -0x10);
    unaff_r7 = *(int *)((int)register0x00000054 + -0xc);
    unaff_r8 = *(int *)((int)register0x00000054 + -8);
    unaff_lr = *(int *)((int)register0x00000054 + -4);
  }
  else {
    iVar2 = func_0x0229f13c(0xa506,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  piVar9[5] = unaff_lr;
  piVar9[4] = unaff_r8;
  piVar9[3] = unaff_r7;
  piVar9[2] = unaff_r6;
  piVar9[1] = (int)unaff_r5;
  *piVar9 = unaff_r4;
  piVar9[-6] = 0;
  piVar9[-5] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piVar9[-4] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piVar9[-3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar9[-2] = 0;
  func_0x0245494c(piVar9 + -0xc,0,0);
  iVar3 = *(int *)(iVar2 + 0x10);
  piVar9[-6] = piVar9[-0xc];
  piVar9[-5] = piVar9[-0xb];
  piVar9[-4] = piVar9[-10];
  piVar9[-3] = piVar9[-9];
  piVar9[-2] = piVar9[-8];
  if (iVar3 != 0) {
    func_0x01485278(piVar9 + -6,iVar3,0);
  }
  func_0x01485278(piVar9 + -6,param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  piVar9[-0xe] = 0;
  piVar9[-0xd] = 0;
  func_0x0245495c(iVar3,uVar6,piVar9 + -6,uVar4);
  return;
}



// ===== FAT.MBTapCostItems$$OnDisable RVA 0x2051c64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061c64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  iVar1 = func_0x0229f06c(0xb054,0);
  if (iVar1 == 0) {
    func_0x02061cc4(param_1);
    pcVar3 = (char *)(_UNK_02061ff0 + 0x2061e8c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02061ff4 + 0x2061ea0));
      func_0x01384978(*(undefined4 *)(_UNK_02061ff8 + 0x2061eac));
      func_0x01384978(*(undefined4 *)(_UNK_02061ffc + 0x2061eb8));
      func_0x01384978(*(undefined4 *)(_UNK_02062000 + 0x2061ec4));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa507,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 != 0) {
        puVar7 = *(undefined4 **)(_UNK_02062004 + 0x2061f28);
        uVar5 = func_0x01384be4(*puVar7);
        puVar6 = *(undefined4 **)(_UNK_02062008 + 0x2061f44);
        func_0x03ccb96c(uVar5,param_1,*puVar6,0);
        func_0x020da470(iVar1,uVar5,0);
        iVar1 = *(int *)(param_1 + 0x4c);
        uVar5 = func_0x01384be4(*puVar7);
        func_0x03ccb96c(uVar5,param_1,*puVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x020da310(iVar1,uVar5,0);
        iVar1 = *(int *)(param_1 + 0x4c);
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0206200c + 0x2061fa8));
        func_0x03cd51ec(uVar5,param_1,**(undefined4 **)(_UNK_02062010 + 0x2061fc4),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x020d8ab0(iVar1,uVar5,0);
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa507,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb054,0);
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



// ===== FAT.MBTapCostItems$$ClearAllItemTween RVA 0x2051cc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061cc4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar4 = (char *)(_UNK_02061e64 + 0x2061cd8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02061e68 + 0x2061cec));
    func_0x01384978(*(undefined4 *)(_UNK_02061e6c + 0x2061cf8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb055,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb055,0);
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
  piVar7 = *(int **)(_UNK_02061e70 + 0x2061d50);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = 0;
  iVar1 = func_0x02450910(uVar6,0);
  if (iVar1 != 0) {
    puVar8 = *(undefined4 **)(_UNK_02061e74 + 0x2061d88);
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450148(iVar1,0);
      if (iVar1 <= iVar5) break;
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450158(iVar1,iVar5,0);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x02450910(iVar1,0);
      if (iVar2 != 0) {
        func_0x02cf90a0(iVar1,0,0);
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x02f67194(iVar1,*puVar8);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02450910(uVar6,0);
      if (iVar1 != 0) {
        func_0x02cf90a0(uVar6,0,0);
      }
      iVar5 = iVar5 + 1;
    }
  }
  return;
}



// ===== FAT.MBTapCostItems$$RemoveBoardItemCountListener RVA 0x2051e78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061e78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar3 = (char *)(_UNK_02061ff0 + 0x2061e8c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02061ff4 + 0x2061ea0));
    func_0x01384978(*(undefined4 *)(_UNK_02061ff8 + 0x2061eac));
    func_0x01384978(*(undefined4 *)(_UNK_02061ffc + 0x2061eb8));
    func_0x01384978(*(undefined4 *)(_UNK_02062000 + 0x2061ec4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa507,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa507,0);
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
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
    puVar7 = *(undefined4 **)(_UNK_02062004 + 0x2061f28);
    uVar5 = func_0x01384be4(*puVar7);
    puVar6 = *(undefined4 **)(_UNK_02062008 + 0x2061f44);
    func_0x03ccb96c(uVar5,param_1,*puVar6,0);
    func_0x020da470(iVar1,uVar5,0);
    iVar1 = *(int *)(param_1 + 0x4c);
    uVar5 = func_0x01384be4(*puVar7);
    func_0x03ccb96c(uVar5,param_1,*puVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020da310(iVar1,uVar5,0);
    iVar1 = *(int *)(param_1 + 0x4c);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0206200c + 0x2061fa8));
    func_0x03cd51ec(uVar5,param_1,**(undefined4 **)(_UNK_02062010 + 0x2061fc4),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8ab0(iVar1,uVar5,0);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  return;
}



// ===== FAT.MBTapCostItems$$OnDestroy RVA 0x2052014 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02062014(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  iVar1 = func_0x0229f06c(0xb056,0);
  if (iVar1 == 0) {
    FUN_02061cc4(param_1);
    pcVar3 = (char *)(_UNK_02061ff0 + 0x2061e8c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02061ff4 + 0x2061ea0));
      func_0x01384978(*(undefined4 *)(_UNK_02061ff8 + 0x2061eac));
      func_0x01384978(*(undefined4 *)(_UNK_02061ffc + 0x2061eb8));
      func_0x01384978(*(undefined4 *)(_UNK_02062000 + 0x2061ec4));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa507,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 != 0) {
        puVar7 = *(undefined4 **)(_UNK_02062004 + 0x2061f28);
        uVar5 = func_0x01384be4(*puVar7);
        puVar6 = *(undefined4 **)(_UNK_02062008 + 0x2061f44);
        func_0x03ccb96c(uVar5,param_1,*puVar6,0);
        func_0x020da470(iVar1,uVar5,0);
        iVar1 = *(int *)(param_1 + 0x4c);
        uVar5 = func_0x01384be4(*puVar7);
        func_0x03ccb96c(uVar5,param_1,*puVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x020da310(iVar1,uVar5,0);
        iVar1 = *(int *)(param_1 + 0x4c);
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0206200c + 0x2061fa8));
        func_0x03cd51ec(uVar5,param_1,**(undefined4 **)(_UNK_02062010 + 0x2061fc4),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x020d8ab0(iVar1,uVar5,0);
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa507,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb056,0);
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



// ===== FAT.MBTapCostItems$$Update RVA 0x2052074 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02062074(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
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
  
  pcVar4 = (char *)(_UNK_02062150 + 0x206208c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02062154 + 0x20620a0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb057,0);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x48) != 0) && (1 < *(int *)(*(int *)(param_1 + 0x48) + 0xc))) {
      fVar8 = *(float *)(param_1 + 0x40);
      fVar2 = (float)func_0x024503b4(0);
      fVar8 = fVar8 + fVar2;
      *(float *)(param_1 + 0x40) = fVar8;
      if (*(float *)(param_1 + 0x24) <= fVar8) {
        *(undefined4 *)(param_1 + 0x40) = 0;
        pcVar4 = (char *)(_UNK_020622ec + 0x206216c);
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_020622f0 + 0x2062180));
          *pcVar4 = '\x01';
        }
        iVar1 = func_0x0229f06c(0xb058,0);
        if (iVar1 == 0) {
          if ((*(int *)(param_1 + 0x48) != 0) &&
             (iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0xc), 0 < iVar1)) {
            iVar5 = 0;
            iVar6 = *(int *)(param_1 + 0x44) + 1;
            if (iVar1 <= iVar6) {
              iVar6 = 0;
            }
            *(int *)(param_1 + 0x44) = iVar6;
            while( true ) {
              iVar1 = *(int *)(param_1 + 0x48);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              if (*(int *)(iVar1 + 0xc) <= iVar5) break;
              iVar1 = *(int *)(param_1 + 0x10);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x02450158(iVar1,iVar5,0);
              if (iVar5 == *(int *)(param_1 + 0x44)) {
                func_0x02062c9c(param_1,iVar1,1);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = func_0x0244ffd4(iVar1,0);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244ffe4(iVar1,1,0);
              }
              else {
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar6 = func_0x0244ffd4(iVar1,0);
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                iVar6 = func_0x02450114(iVar6,0);
                if (iVar6 != 0) {
                  func_0x02062c9c(param_1,iVar1,0);
                }
              }
              iVar5 = iVar5 + 1;
            }
          }
          return;
        }
        iVar1 = func_0x0229f13c(0xb058,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb057,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
SUB_02173f80:
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
  return;
}



// ===== FAT.MBTapCostItems$$SwitchDisplayItem RVA 0x2052158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02062158(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  
  pcVar3 = (char *)(_UNK_020622ec + 0x206216c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020622f0 + 0x2062180));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb058,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb058,0);
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
    return;
  }
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0xc), 0 < iVar1)) {
    iVar4 = 0;
    iVar5 = *(int *)(param_1 + 0x44) + 1;
    if (iVar1 <= iVar5) {
      iVar5 = 0;
    }
    *(int *)(param_1 + 0x44) = iVar5;
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar4) break;
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450158(iVar1,iVar4,0);
      if (iVar4 == *(int *)(param_1 + 0x44)) {
        func_0x02062c9c(param_1,iVar1,1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244ffd4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,1,0);
      }
      else {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244ffd4(iVar1,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02450114(iVar5,0);
        if (iVar5 != 0) {
          func_0x02062c9c(param_1,iVar1,0);
        }
      }
      iVar4 = iVar4 + 1;
    }
  }
  return;
}



// ===== FAT.MBTapCostItems$$Refresh RVA 0x20522f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020622f4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_02062524 + 0x2062314);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02062528 + 0x2062328));
    func_0x01384978(*(undefined4 *)(_UNK_0206252c + 0x2062334));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa505,0);
  if (iVar1 == 0) {
    piVar6 = *(int **)(_UNK_02062530 + 0x2062398);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02450910(uVar5,0);
    if (iVar1 != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02450910(uVar5,0);
      if (param_2 != 0) {
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = *(int *)(param_2 + 0xc);
        }
        if (iVar1 != 0 && iVar2 != 0) {
          *(int *)(param_1 + 0x48) = param_2;
          FUN_02061a60(param_1);
          if (param_3 == 0) {
            iVar1 = *(int *)(param_1 + 0x44);
          }
          else {
            iVar1 = 0;
            *(undefined4 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x44) = 0;
          }
          iVar2 = *(int *)(param_1 + 0x48);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = 0;
          if (iVar1 < *(int *)(iVar2 + 0xc)) {
            uVar3 = *(uint *)(param_1 + 0x44) & ~((int)*(uint *)(param_1 + 0x44) >> 0x1f);
          }
          *(uint *)(param_1 + 0x44) = uVar3;
          func_0x02062534(param_1);
          uVar5 = *(undefined4 *)(param_1 + 0x10);
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x02450910(uVar5,0);
          if (iVar1 != 0) {
            iVar1 = *(int *)(param_1 + 0x48);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            while( true ) {
              iVar2 = *(int *)(param_1 + 0x10);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x02450148(iVar2,0);
              if (iVar2 <= iVar1) break;
              iVar2 = *(int *)(param_1 + 0x10);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x02450158(iVar2,iVar1,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = func_0x0244ffd4(iVar2,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              func_0x0244ffe4(iVar2,0,0);
              iVar1 = iVar1 + 1;
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa505,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175630(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBTapCostItems$$RefreshAllItems RVA 0x2052534 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02062534(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_020627b4 + 0x206254c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020627b8 + 0x2062560));
    func_0x01384978(*(undefined4 *)(_UNK_020627bc + 0x206256c));
    func_0x01384978(*(undefined4 *)(_UNK_020627c0 + 0x2062578));
    func_0x01384978(*(undefined4 *)(_UNK_020627c4 + 0x2062584));
    func_0x01384978(*(undefined4 *)(_UNK_020627c8 + 0x2062590));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa50a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa50a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar5 = 0;
    puVar7 = *(undefined4 **)(_UNK_020627cc + 0x206260c);
    piVar8 = *(int **)(_UNK_020627d0 + 0x2062614);
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar5) break;
      iVar1 = *(int *)(param_1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x03259410(iVar1,iVar5,*puVar7);
      iVar1 = func_0x020627dc(param_1,iVar5);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x02450910(iVar1,0);
      if (iVar2 != 0) {
        if (*(char *)(param_1 + 0x1c) == '\0') {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01ee6038(iVar1,uVar6,1,0);
        }
        else {
          uStack_28 = func_0x020629d0(param_1,uVar6);
          uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_020627d4 + 0x20626a8),&uStack_28);
          uVar3 = func_0x0244f6a0(**(undefined4 **)(_UNK_020627d8 + 0x20626cc),uVar3,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01ee57ac(iVar1,uVar6,uVar3,0);
        }
        if (*(int *)(param_1 + 0x18) == 2) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01ee61d0(iVar1,uVar6,0);
        }
        else if (*(int *)(param_1 + 0x18) == 1) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01ee633c(iVar1,uVar6,1,0);
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x0244fc34(iVar1,0);
        func_0x02062b78(param_1,uVar6,iVar5 == *(int *)(param_1 + 0x44));
      }
      iVar1 = *(int *)(param_1 + 0x48);
      iVar5 = iVar5 + 1;
    }
  }
  return;
}



// ===== FAT.MBTapCostItems$$GetOrCreateItem RVA 0x20527dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020627dc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_020629ac + 0x20627f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020629b0 + 0x2062808));
    func_0x01384978(*(undefined4 *)(_UNK_020629b4 + 0x2062814));
    func_0x01384978(*(undefined4 *)(_UNK_020629b8 + 0x2062820));
    func_0x01384978(*(undefined4 *)(_UNK_020629bc + 0x206282c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa50b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa50b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0229207c + 0x2291f88);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02292080 + 0x2291f9c),param_1,param_2,0);
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
    func_0x01485238(&uStack_38,param_2,0);
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
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02292084 + 0x229206c));
    return uVar6;
  }
  piVar7 = *(int **)(_UNK_020629c0 + 0x2062888);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02450910(uVar6,0);
  if (iVar1 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02450910(uVar6,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450148(iVar1,0);
      if (param_2 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450158(iVar1,param_2,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = **(int **)(_UNK_020629c4 + 0x206293c);
        iVar2 = *(int *)(iVar4 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384978(*(undefined4 *)(_UNK_02f67230 + 0x2f671bc));
          iVar2 = *(int *)(iVar4 + 0x1c);
          if (iVar2 == 0) {
            func_0x0140024c(iVar4);
            iVar2 = *(int *)(iVar4 + 0x1c);
          }
        }
        uVar6 = *(undefined4 *)(iVar2 + 4);
        if (*(int *)(**(int **)(_UNK_02f67234 + 0x2f671e4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar6 = func_0x04836854(uVar6,0);
        func_0x02457324(iVar1,uVar6,(uint)&stack0xffffffe8 | 4,0);
        return 0;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar3 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x03015f4c(uVar3,uVar6,**(undefined4 **)(_UNK_020629c8 + 0x206297c));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = **(int **)(_UNK_020629cc + 0x20629a0);
      iVar2 = *(int *)(iVar4 + 0x1c);
      if (iVar2 == 0) {
        func_0x01384978(*(undefined4 *)(_UNK_02fe2854 + 0x2fe27e0));
        iVar2 = *(int *)(iVar4 + 0x1c);
        if (iVar2 == 0) {
          func_0x0140024c(iVar4);
          iVar2 = *(int *)(iVar4 + 0x1c);
        }
      }
      uVar6 = *(undefined4 *)(iVar2 + 4);
      if (*(int *)(**(int **)(_UNK_02fe2858 + 0x2fe2808) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar6 = func_0x04836854(uVar6,0);
      func_0x02457524(iVar1,uVar6,(uint)&stack0xffffffe8 | 4,0);
      return 0;
    }
  }
  return 0;
}



// ===== FAT.MBTapCostItems$$GetItemDisplayCount RVA 0x20529d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020629d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_02062b6c + 0x20629ec);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02062b70 + 0x2062a00));
    *pcVar7 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0xa50c,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if ((0 < param_2) && (*(char *)(param_1 + 0x1c) != '\0')) {
      iVar8 = *(int *)(param_1 + 0x20);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01dbb4bc(iVar1,0);
      if (iVar8 == 0) {
        if (iVar1 == 0) {
          return 0;
        }
        piVar3 = (int *)func_0x0214d864(iVar1,0);
      }
      else {
        if (iVar1 == 0) {
          return 0;
        }
        piVar3 = (int *)func_0x0214da98(iVar1,0);
      }
      uVar2 = 0;
      if (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_02062b74 + 0x2062af4)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xf8);
              goto LAB_02062b3c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02062b74 + 0x2062af4),7);
LAB_02062b3c:
        iVar1 = (*(code *)*puVar4)(piVar3,param_2,&uStack_1c,puVar4[1]);
        uVar2 = uStack_1c;
        if (iVar1 == 0) {
          uVar2 = 0;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa50c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02175ef0(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.MBTapCostItems$$DoDisplayItem RVA 0x2052b78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02062b78(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02062c90 + 0x2062b98);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02062c94 + 0x2062bac));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa50d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02062c98 + 0x2062c10) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02450910(param_2,0);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,param_3,0);
      if (param_3 != 0) {
        pcVar5 = (char *)(_UNK_02063218 + 0x2063078);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_0206321c + 0x206308c));
          func_0x01384978(*(undefined4 *)(_UNK_02063220 + 0x2063098));
          *pcVar5 = '\x01';
        }
        iVar1 = func_0x0229f06c(0xa50e,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0xa50e,0);
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
        piVar7 = *(int **)(_UNK_02063224 + 0x20630f8);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x02450910(param_2,0);
        if (iVar1 != 0) {
          pcVar5 = (char *)(_UNK_02063228 + 0x2063128);
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_0206322c + 0x206313c));
            *pcVar5 = '\x01';
          }
          iVar1 = *(int *)(**(int **)(_UNK_02063230 + 0x2063154) + 0x5c);
          uVar6 = *(undefined4 *)(iVar1 + 0xc);
          uVar2 = *(undefined4 *)(iVar1 + 0x10);
          uVar4 = *(undefined4 *)(iVar1 + 0x14);
          if (param_2 == 0) {
            func_0x01384bf0();
            uStack_20 = 0;
            func_0x024503a4(0,uVar6,uVar2,uVar4);
            func_0x01384bf0();
          }
          else {
            uStack_20 = 0;
            func_0x024503a4(param_2,uVar6,uVar2,uVar4);
          }
          iVar1 = func_0x02f67194(param_2,**(undefined4 **)(_UNK_02063234 + 0x20631b8));
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x02450910(iVar1,0);
          if (iVar3 != 0) {
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            (*(code *)&UNK_054069c8)(iVar1,0x3f800000,0);
            return;
          }
        }
        return;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa50d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02175630(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.MBTapCostItems$$DoItemEffect RVA 0x2052c9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02062c9c(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_02063014 + 0x2062cbc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02063018 + 0x2062cd0));
    func_0x01384978(*(undefined4 *)(_UNK_0206301c + 0x2062cdc));
    func_0x01384978(*(undefined4 *)(_UNK_02063020 + 0x2062ce8));
    func_0x01384978(*(undefined4 *)(_UNK_02063024 + 0x2062cf4));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb059,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb059,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02175630(iVar2,param_1,param_2,param_3,0);
    return iVar2;
  }
  piVar6 = *(int **)(_UNK_02063028 + 0x2062d58);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x02450910(param_2,0);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      puVar7 = *(undefined4 **)(_UNK_0206304c + 0x2062e64);
      uVar3 = func_0x02f67194(param_2,*puVar7);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(uVar3,0,0);
      if (iVar2 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x02f67194(param_2,*puVar7);
        func_0x0206305c(param_1,param_2);
        iVar2 = func_0x01987d84(uVar3,0,*(undefined4 *)(param_1 + 0x38),0);
        uVar3 = *(undefined4 *)(param_1 + 0x3c);
        goto LAB_02062ed8;
      }
    }
    func_0x0206305c(param_1,param_2);
    pcVar5 = (char *)(_UNK_02063050 + 0x2062fb0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02063054 + 0x2062fc4));
      *pcVar5 = '\x01';
    }
    puVar7 = *(undefined4 **)(**(int **)(_UNK_02063058 + 0x2062fd8) + 0x5c);
    iVar2 = func_0x02cf3bbc(param_2,*puVar7,puVar7[1],puVar7[2],*(undefined4 *)(param_1 + 0x38),0);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      puVar7 = *(undefined4 **)(_UNK_0206302c + 0x2062dac);
      uVar3 = func_0x02f67194(param_2,*puVar7);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(uVar3,0,0);
      if (iVar2 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02f67194(param_2,*puVar7);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd8c(iVar2,0,0);
        iVar2 = func_0x01987d84(iVar2,0x3f800000,*(undefined4 *)(param_1 + 0x2c),0);
        uVar3 = *(undefined4 *)(param_1 + 0x30);
LAB_02062ed8:
        puVar7 = *(undefined4 **)(_UNK_02063030 + 0x2062ee4);
        goto LAB_02063004;
      }
    }
    pcVar5 = (char *)(_UNK_02063034 + 0x2062ef0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02063038 + 0x2062f04));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(_UNK_0206303c + 0x2062f1c);
    puVar7 = *(undefined4 **)(*piVar6 + 0x5c);
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    uVar8 = puVar7[2];
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x024503a4(param_2,uVar3,uVar4,uVar8,0);
    pcVar5 = (char *)(_UNK_02063040 + 0x2062f54);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02063044 + 0x2062f68));
      *pcVar5 = '\x01';
    }
    iVar2 = *(int *)(*piVar6 + 0x5c);
    iVar2 = func_0x02cf3bbc(param_2,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),
                            *(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(param_1 + 0x2c),0);
    uVar3 = *(undefined4 *)(param_1 + 0x30);
  }
  puVar7 = *(undefined4 **)(_UNK_02063048 + 0x2063008);
LAB_02063004:
  pcVar5 = (char *)(_UNK_0309f0dc + 0x309f034);
  cVar1 = *pcVar5;
  if (cVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0309f0e0 + 0x309f048),uVar3,*puVar7);
    func_0x01384978(*(undefined4 *)(_UNK_0309f0e4 + 0x309f054));
    func_0x01384978(*(undefined4 *)(_UNK_0309f0e8 + 0x309f060));
    cVar1 = '\x01';
    *pcVar5 = '\x01';
  }
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x94);
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    puVar7 = *(undefined4 **)(_UNK_0309f0ec + 0x309f088);
    *(undefined4 *)(iVar2 + 0x74) = 0x25;
    uVar4 = func_0x01384be4(*puVar7);
    func_0x02d1b0e0(uVar4,uVar3,0);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0309f0f0 + 0x309f0ac));
    func_0x02ce3e5c(uVar3,uVar4,**(undefined4 **)(_UNK_0309f0f4 + 0x309f0c8),0,unaff_r4,unaff_r5,
                    unaff_r6,unaff_lr);
    *(undefined4 *)(iVar2 + 0x78) = uVar3;
  }
  return iVar2;
}



// ===== FAT.MBTapCostItems$$ResetItem RVA 0x205305c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0206305c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02063218 + 0x2063078);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0206321c + 0x206308c));
    func_0x01384978(*(undefined4 *)(_UNK_02063220 + 0x2063098));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa50e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa50e,0);
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
  piVar7 = *(int **)(_UNK_02063224 + 0x20630f8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02450910(param_2,0);
  if (iVar1 != 0) {
    pcVar4 = (char *)(_UNK_02063228 + 0x2063128);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0206322c + 0x206313c));
      *pcVar4 = '\x01';
    }
    iVar1 = *(int *)(**(int **)(_UNK_02063230 + 0x2063154) + 0x5c);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = *(undefined4 *)(iVar1 + 0x14);
    if (param_2 == 0) {
      func_0x01384bf0();
      uStack_20 = 0;
      func_0x024503a4(0,uVar6,uVar2,uVar5);
      func_0x01384bf0();
    }
    else {
      uStack_20 = 0;
      func_0x024503a4(param_2,uVar6,uVar2,uVar5);
    }
    iVar1 = func_0x02f67194(param_2,**(undefined4 **)(_UNK_02063234 + 0x20631b8));
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x02450910(iVar1,0);
    if (iVar3 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_054069c8)(iVar1,0x3f800000,0);
      return;
    }
  }
  return;
}



// ===== FAT.MBTapCostItems$$OnBoardItemCountMayChange RVA 0x2053238 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02063238(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int unaff_r7;
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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0xa508,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa508,0);
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
    uVar5 = func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return uVar5;
  }
  pcVar4 = (char *)(_UNK_02063374 + 0x20632b4);
  uStack_18 = unaff_r4;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02063378 + 0x20632c8));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0xa509,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      unaff_r7 = *(int *)(param_1 + 0x48);
    }
    if (param_2 != 0 && unaff_r7 != 0) {
      uVar5 = 0;
      uVar2 = func_0x0210e5f4(param_2,0);
      iVar1 = func_0x03259a6c(unaff_r7,uVar2,**(undefined4 **)(_UNK_0206337c + 0x2063354));
      if (iVar1 != 0) {
        FUN_02062534(param_1);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0xa509,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_18;
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
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.MBTapCostItems$$TryRefreshItems RVA 0x205329c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0206329c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int unaff_r7;
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
  
  pcVar4 = (char *)(_UNK_02063374 + 0x20632b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02063378 + 0x20632c8));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0xa509,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      unaff_r7 = *(int *)(param_1 + 0x48);
    }
    if (param_2 != 0 && unaff_r7 != 0) {
      uVar5 = 0;
      uVar2 = func_0x0210e5f4(param_2,0);
      iVar1 = func_0x03259a6c(unaff_r7,uVar2,**(undefined4 **)(_UNK_0206337c + 0x2063354));
      if (iVar1 != 0) {
        FUN_02062534(param_1);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0xa509,0);
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
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.MBTapCostItems$$OnBoardItemStateMayChange RVA 0x2053380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02063380(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int unaff_r7;
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
  
  iVar1 = func_0x0229f06c(0xa50f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa50f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x02174858(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  pcVar5 = (char *)(_UNK_02063374 + 0x20632b4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02063378 + 0x20632c8));
    *pcVar5 = '\x01';
  }
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0xa509,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      unaff_r7 = *(int *)(param_1 + 0x48);
    }
    if (param_2 != 0 && unaff_r7 != 0) {
      uVar2 = 0;
      uVar3 = func_0x0210e5f4(param_2,0);
      iVar1 = func_0x03259a6c(unaff_r7,uVar3,**(undefined4 **)(_UNK_0206337c + 0x2063354));
      if (iVar1 != 0) {
        FUN_02062534(param_1);
        uVar2 = 1;
      }
    }
    return uVar2;
  }
  iVar1 = func_0x0229f13c(0xa509,0);
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
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar2,&uStack_38,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_38,0,0);
  return uVar2;
}



// ===== FAT.MBTapCostItems$$.ctor RVA 0x20533fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020633fc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_020634dc + 0x2063414);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020634e0 + 0x2063428));
    func_0x01384978(*(undefined4 *)(_UNK_020634e4 + 0x2063434));
    *pcVar3 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x24) = 0x40000000;
  uVar1 = func_0x02452498(0,0,0x3f800000,0x3f800000,0);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0x3e19999a;
  uVar1 = func_0x024506bc(0,0,0x3f800000,0x3f800000,0);
  puVar2 = *(undefined4 **)(_UNK_020634e8 + 0x20634a0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_020634ec + 0x20634bc));
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


