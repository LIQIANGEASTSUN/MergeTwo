/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.Cloud$$get_CanShow RVA 0x20fb3cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0210b3cc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_0210b46c + 0x210b3e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210b470 + 0x210b3f4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b7e,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x10) < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uint)(*(char *)(param_1 + 0x10) == '\0');
    }
    return uVar2;
  }
  iVar1 = func_0x0229f13c(0x5b7e,0);
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
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.Merge.Cloud$$get_CloudArea RVA 0x20fb474 =====

undefined4 FUN_0210b474(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.Cloud$$get_UnlockLevel RVA 0x20fb47c =====

undefined4 FUN_0210b47c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.Merge.Cloud$$set_UnlockLevel RVA 0x20fb484 =====

void FUN_0210b484(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.Merge.Cloud$$get_IsUnlock RVA 0x20fb48c =====

undefined1 FUN_0210b48c(int param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



// ===== FAT.Merge.Cloud$$set_IsUnlock RVA 0x20fb494 =====

void FUN_0210b494(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.Merge.Cloud$$get_Type RVA 0x20fb49c =====

undefined4 FUN_0210b49c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.Merge.Cloud$$set_Type RVA 0x20fb4a4 =====

void FUN_0210b4a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.Merge.Cloud$$get_ConfId RVA 0x20fb4ac =====

undefined4 FUN_0210b4ac(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.Merge.Cloud$$set_ConfId RVA 0x20fb4b4 =====

void FUN_0210b4b4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== FAT.Merge.Cloud$$CreateCloud RVA 0x20fb4bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210b4bc(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_0210b5b0 + 0x210b4dc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210b5b4 + 0x210b4f0));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5bde,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    if (param_1 != 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0210b5b8 + 0x210b564));
      func_0x0210b5bc();
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *param_3 = iVar1;
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0x14) = param_2;
      *(undefined4 *)(iVar1 + 0x18) = uVar4;
      func_0x0210b69c(iVar1,uVar2);
      uVar4 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5bde,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x022343b0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.Merge.Cloud$$.ctor RVA 0x20fb5bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210b5bc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0210b678 + 0x210b5d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210b67c + 0x210b5e4));
    func_0x01384978(*(undefined4 *)(_UNK_0210b680 + 0x210b5f0));
    func_0x01384978(*(undefined4 *)(_UNK_0210b684 + 0x210b5fc));
    func_0x01384978(*(undefined4 *)(_UNK_0210b688 + 0x210b608));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0210b68c + 0x210b61c));
  func_0x024548d4(uVar1,**(undefined4 **)(_UNK_0210b690 + 0x210b630));
  puVar2 = *(undefined4 **)(_UNK_0210b694 + 0x210b644);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_0210b698 + 0x210b65c));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.Cloud$$_InitCoordConfigList RVA 0x20fb69c =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210b69c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_0210bb28 + 0x210b6b8);
  iStack_28 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210bb2c + 0x210b6cc));
    func_0x01384978(*(undefined4 *)(_UNK_0210bb30 + 0x210b6d8));
    func_0x01384978(*(undefined4 *)(_UNK_0210bb34 + 0x210b6e4));
    func_0x01384978(*(undefined4 *)(_UNK_0210bb38 + 0x210b6f0));
    func_0x01384978(*(undefined4 *)(_UNK_0210bb3c + 0x210b6fc));
    func_0x01384978(*(undefined4 *)(_UNK_0210bb40 + 0x210b708));
    func_0x01384978(*(undefined4 *)(_UNK_0210bb44 + 0x210b714));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5be2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5be2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = iStack_28;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar9,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uVar10 = func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return uVar10;
  }
  iVar1 = *(int *)(iStack_28 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar9) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar9,0);
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0210bb48 + 0x210b7c8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0210b810;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0210bb48 + 0x210b7c8),0);
LAB_0210b810:
  piVar4 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
  piVar8 = *(int **)(_UNK_0210bb4c + 0x210b830);
  piVar12 = *(int **)(_UNK_0210bb50 + 0x210b838);
LAB_0210b834:
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar4;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar8) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_0210b890;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar4,*piVar8,0);
LAB_0210b890:
  iVar1 = (*(code *)*puVar2)(piVar4,puVar2[1]);
  if (iVar1 != 0) {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0210bb54 + 0x210b8c4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_0210b90c;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0210bb54 + 0x210b8c4),0);
LAB_0210b90c:
    uVar10 = (*(code *)*puVar2)(piVar4,puVar2[1]);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x025664c4(uVar10,0);
    if (iVar1 != 0) {
      iVar9 = *(int *)(iStack_28 + 0x1c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar9 + 8);
      uVar3 = *(uint *)(iVar9 + 0xc);
      piVar5 = *(int **)(_UNK_0210bb58 + 0x210b980);
      *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
      iVar11 = *piVar5;
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      if (uVar3 < *(uint *)(iVar13 + 0xc)) {
        *(uint *)(iVar9 + 0xc) = uVar3 + 1;
        *(int *)(iVar13 + uVar3 * 4 + 0x10) = iVar1;
      }
      else {
        func_0x0328f170(iVar9,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    goto LAB_0210b834;
  }
  uVar10 = 0;
  if (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0210bb5c + 0x210b9e4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_0210ba2c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0210bb5c + 0x210b9e4),0);
LAB_0210ba2c:
    uVar10 = (*(code *)*puVar2)(piVar4,puVar2[1]);
  }
  return uVar10;
}



// ===== FAT.Merge.Cloud$$CreateCloud RVA 0x20fbb64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210bb64(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_0210bc58 + 0x210bb84);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210bc5c + 0x210bb98));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5be5,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    if (param_1 != 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0210bc60 + 0x210bc0c));
      FUN_0210b5bc();
      uVar4 = *(undefined4 *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *param_3 = iVar1;
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(iVar1 + 0x14) = param_2;
      *(undefined4 *)(iVar1 + 0x18) = uVar4;
      func_0x0210bc64(iVar1,uVar2);
      uVar4 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5be5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x022343b0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.Merge.Cloud$$_InitCoordConfigList_TL RVA 0x20fbc64 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210bc64(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_0210c0f0 + 0x210bc80);
  iStack_28 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210c0f4 + 0x210bc94));
    func_0x01384978(*(undefined4 *)(_UNK_0210c0f8 + 0x210bca0));
    func_0x01384978(*(undefined4 *)(_UNK_0210c0fc + 0x210bcac));
    func_0x01384978(*(undefined4 *)(_UNK_0210c100 + 0x210bcb8));
    func_0x01384978(*(undefined4 *)(_UNK_0210c104 + 0x210bcc4));
    func_0x01384978(*(undefined4 *)(_UNK_0210c108 + 0x210bcd0));
    func_0x01384978(*(undefined4 *)(_UNK_0210c10c + 0x210bcdc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5be6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5be6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = iStack_28;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar9,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uVar10 = func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return uVar10;
  }
  iVar1 = *(int *)(iStack_28 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar9) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar9,0);
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0210c110 + 0x210bd90)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0210bdd8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0210c110 + 0x210bd90),0);
LAB_0210bdd8:
  piVar4 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
  piVar8 = *(int **)(_UNK_0210c114 + 0x210bdf8);
  piVar12 = *(int **)(_UNK_0210c118 + 0x210be00);
LAB_0210bdfc:
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar4;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar8) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_0210be58;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar4,*piVar8,0);
LAB_0210be58:
  iVar1 = (*(code *)*puVar2)(piVar4,puVar2[1]);
  if (iVar1 != 0) {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0210c11c + 0x210be8c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_0210bed4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0210c11c + 0x210be8c),0);
LAB_0210bed4:
    uVar10 = (*(code *)*puVar2)(piVar4,puVar2[1]);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x025665a8(uVar10,0);
    if (iVar1 != 0) {
      iVar9 = *(int *)(iStack_28 + 0x1c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar9 + 8);
      uVar3 = *(uint *)(iVar9 + 0xc);
      piVar5 = *(int **)(_UNK_0210c120 + 0x210bf48);
      *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
      iVar11 = *piVar5;
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      if (uVar3 < *(uint *)(iVar13 + 0xc)) {
        *(uint *)(iVar9 + 0xc) = uVar3 + 1;
        *(int *)(iVar13 + uVar3 * 4 + 0x10) = iVar1;
      }
      else {
        func_0x0328f170(iVar9,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    goto LAB_0210bdfc;
  }
  uVar10 = 0;
  if (piVar4 != (int *)0x0) {
    iVar1 = *piVar4;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0210c124 + 0x210bfac)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
          goto LAB_0210bff4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0210c124 + 0x210bfac),0);
LAB_0210bff4:
    uVar10 = (*(code *)*puVar2)(piVar4,puVar2[1]);
  }
  return uVar10;
}



// ===== FAT.Merge.Cloud$$RefreshCloudArea RVA 0x20fc12c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210c12c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_0210c3f4 + 0x210c14c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210c3f8 + 0x210c160));
    func_0x01384978(*(undefined4 *)(_UNK_0210c3fc + 0x210c16c));
    func_0x01384978(*(undefined4 *)(_UNK_0210c400 + 0x210c178));
    func_0x01384978(*(undefined4 *)(_UNK_0210c404 + 0x210c184));
    func_0x01384978(*(undefined4 *)(_UNK_0210c408 + 0x210c190));
    func_0x01384978(*(undefined4 *)(_UNK_0210c40c + 0x210c19c));
    func_0x01384978(*(undefined4 *)(_UNK_0210c410 + 0x210c1a8));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iVar1 = func_0x0229f06c(0x57d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024548d8(iVar1,**(undefined4 **)(_UNK_0210c414 + 0x210c234));
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_50,iVar1,**(undefined4 **)(_UNK_0210c418 + 0x210c260));
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    puVar4 = *(undefined4 **)(_UNK_0210c41c + 0x210c288);
    while (iVar2 = func_0x03f5f428(&uStack_38,*puVar4), iVar1 = iStack_2c, iVar2 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0210c438(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                              &uStack_3c,&uStack_40,param_2,param_3);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x024548d8(iVar2,**(undefined4 **)(_UNK_0210c428 + 0x210c33c));
        break;
      }
      uStack_4c = 0;
      uStack_50 = 0;
      func_0x038fd264(&uStack_50,uStack_3c,uStack_40,**(undefined4 **)(_UNK_0210c420 + 0x210c2e8));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x024548dc(iVar2,uStack_50,uStack_4c,**(undefined4 **)(_UNK_0210c424 + 0x210c318));
    }
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_0210c42c + 0x210c350));
  }
  else {
    iVar1 = func_0x0229f13c(0x57d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Cloud$$_TransCoord RVA 0x20fc438 =====

uint FUN_0210c438(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,int *param_5,
                 int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x57f,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_5 = 0;
    if (*(int *)(param_1 + 0x14) == 1) {
      uVar2 = 1;
      *param_4 = param_2;
      *param_5 = param_3;
    }
    else if (*(int *)(param_1 + 0x14) == 0) {
      uVar2 = param_3 - param_7;
      iVar1 = -1;
      if ((int)uVar2 < param_6) {
        iVar1 = ~uVar2 + param_6;
      }
      *param_4 = param_2;
      if (0x7fffffff < uVar2) {
        iVar1 = -1;
      }
      *param_5 = iVar1;
      uVar2 = (uint)(iVar1 != -1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x57f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0218e6f0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Cloud$$RefreshUnlockState RVA 0x20fc518 =====

void FUN_0210c518(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x581,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x581,0);
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
    return;
  }
  *(bool *)(param_1 + 0x10) = *(int *)(param_1 + 0xc) <= param_2;
  return;
}



// ===== FAT.Merge.Cloud$$SetForceUnlock RVA 0x20fc584 =====

void FUN_0210c584(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8806,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8806,0);
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
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}


