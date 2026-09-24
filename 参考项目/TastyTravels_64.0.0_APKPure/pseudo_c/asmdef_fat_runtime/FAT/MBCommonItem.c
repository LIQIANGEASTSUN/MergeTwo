/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBCommonItem$$ShowRewardCommitData RVA 0x204a2dc =====

/* WARNING: Possible PIC construction at 0x02080184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02080188) */
/* WARNING: Removing unreachable block (ram,0x02080190) */
/* WARNING: Removing unreachable block (ram,0x02080194) */
/* WARNING: Removing unreachable block (ram,0x020801a0) */
/* WARNING: Removing unreachable block (ram,0x020801a4) */
/* WARNING: Removing unreachable block (ram,0x020801c8) */
/* WARNING: Removing unreachable block (ram,0x020801cc) */
/* WARNING: Removing unreachable block (ram,0x02080208) */
/* WARNING: Removing unreachable block (ram,0x0208020c) */
/* WARNING: Removing unreachable block (ram,0x0244ffb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0205a2dc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
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
  
  iVar1 = func_0x0229f06c(0xb021,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb021,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  pcVar6 = (char *)(_UNK_0205a58c + 0x205a370);
  uStack_20 = unaff_r4;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0205a590 + 0x205a384));
    func_0x01384978(*(undefined4 *)(_UNK_0205a594 + 0x205a390));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x34b0,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_0205a598 + 0x205a3f4);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar7,0,0);
    if (iVar1 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      if (*(int *)(**(int **)(_UNK_0205a59c + 0x205a42c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207f6b4(uVar7,uVar5,uVar2,0);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar7,0,0);
    if (iVar1 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(**(int **)(_UNK_0205a5a0 + 0x205a490) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207fa3c(uVar7,uVar5,uVar2,0);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar7,0,0);
    if (iVar1 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(**(int **)(_UNK_0205a5a4 + 0x205a4f4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207fd48(uVar7,uVar5,uVar2,0);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar2,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (*(int *)(**(int **)(_UNK_0205a5a8 + 0x205a558) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uStack_18 = uStack_20;
      pcVar6 = (char *)(_UNK_02080230 + 0x208006c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02080234 + 0x2080080),uVar5,0);
        func_0x01384978(*(undefined4 *)(_UNK_02080238 + 0x208008c));
        func_0x01384978(*(undefined4 *)(_UNK_0208023c + 0x2080098));
        func_0x01384978(*(undefined4 *)(_UNK_02080240 + 0x20800a4));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x34bb,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x34bb,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = uStack_18;
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
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,uVar5,0);
        iVar4 = *(int *)(iVar3 + 8);
        uVar5 = *(undefined4 *)(iVar3 + 0xc);
        iVar1 = *(int *)(iVar3 + 0x10);
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
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02080244 + 0x2080100));
      func_0x0244f5a0(iVar3,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar8 = *(int **)(_UNK_02080248 + 0x2080128);
      *(undefined4 *)(iVar3 + 8) = uVar5;
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0208025c(uVar5);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&SUB_05189da8)(iVar1,iVar3 != 0,0);
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x34b0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02179a68(iVar1,param_1,uVar5,uVar2);
  }
  return;
}



// ===== FAT.MBCommonItem$$ShowItemNormal RVA 0x204a350 =====

/* WARNING: Possible PIC construction at 0x02080184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02080188) */
/* WARNING: Removing unreachable block (ram,0x02080190) */
/* WARNING: Removing unreachable block (ram,0x02080194) */
/* WARNING: Removing unreachable block (ram,0x020801a0) */
/* WARNING: Removing unreachable block (ram,0x020801a4) */
/* WARNING: Removing unreachable block (ram,0x020801c8) */
/* WARNING: Removing unreachable block (ram,0x020801cc) */
/* WARNING: Removing unreachable block (ram,0x02080208) */
/* WARNING: Removing unreachable block (ram,0x0208020c) */
/* WARNING: Removing unreachable block (ram,0x0244ffb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0205a350(int param_1,undefined4 param_2,undefined4 param_3)

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
  
  pcVar5 = (char *)(_UNK_0205a58c + 0x205a370);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0205a590 + 0x205a384));
    func_0x01384978(*(undefined4 *)(_UNK_0205a594 + 0x205a390));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x34b0,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(_UNK_0205a598 + 0x205a3f4);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      if (*(int *)(**(int **)(_UNK_0205a59c + 0x205a42c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207f6b4(uVar6,param_2,param_3,0);
    }
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(**(int **)(_UNK_0205a5a0 + 0x205a490) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207fa3c(uVar6,param_2,param_3,0);
    }
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(**(int **)(_UNK_0205a5a4 + 0x205a4f4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207fd48(uVar6,param_2,param_3,0);
    }
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (*(int *)(**(int **)(_UNK_0205a5a8 + 0x205a558) + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar5 = (char *)(_UNK_02080230 + 0x208006c);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02080234 + 0x2080080),param_2,0);
        func_0x01384978(*(undefined4 *)(_UNK_02080238 + 0x208008c));
        func_0x01384978(*(undefined4 *)(_UNK_0208023c + 0x2080098));
        func_0x01384978(*(undefined4 *)(_UNK_02080240 + 0x20800a4));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x34bb,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x34bb,0);
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
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,param_2,0);
        iVar4 = *(int *)(iVar2 + 8);
        uVar6 = *(undefined4 *)(iVar2 + 0xc);
        iVar1 = *(int *)(iVar2 + 0x10);
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
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02080244 + 0x2080100));
      func_0x0244f5a0(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar7 = *(int **)(_UNK_02080248 + 0x2080128);
      *(undefined4 *)(iVar2 + 8) = param_2;
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0208025c(param_2);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&SUB_05189da8)(iVar1,iVar2 != 0,0);
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x34b0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.MBCommonItem$$ShowRewardConfig RVA 0x204a5ac =====

/* WARNING: Possible PIC construction at 0x02080184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02080188) */
/* WARNING: Removing unreachable block (ram,0x02080190) */
/* WARNING: Removing unreachable block (ram,0x02080194) */
/* WARNING: Removing unreachable block (ram,0x020801a0) */
/* WARNING: Removing unreachable block (ram,0x020801a4) */
/* WARNING: Removing unreachable block (ram,0x020801c8) */
/* WARNING: Removing unreachable block (ram,0x020801cc) */
/* WARNING: Removing unreachable block (ram,0x02080208) */
/* WARNING: Removing unreachable block (ram,0x0208020c) */
/* WARNING: Removing unreachable block (ram,0x0244ffb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0205a5ac(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
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
  
  iVar1 = func_0x0229f06c(0x34af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x34af,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  pcVar6 = (char *)(_UNK_0205a58c + 0x205a370);
  uStack_20 = unaff_r4;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0205a590 + 0x205a384));
    func_0x01384978(*(undefined4 *)(_UNK_0205a594 + 0x205a390));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x34b0,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_0205a598 + 0x205a3f4);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar7,0,0);
    if (iVar1 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      if (*(int *)(**(int **)(_UNK_0205a59c + 0x205a42c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207f6b4(uVar7,uVar5,uVar2,0);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar7,0,0);
    if (iVar1 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x14);
      if (*(int *)(**(int **)(_UNK_0205a5a0 + 0x205a490) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207fa3c(uVar7,uVar5,uVar2,0);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar7,0,0);
    if (iVar1 != 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(**(int **)(_UNK_0205a5a4 + 0x205a4f4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207fd48(uVar7,uVar5,uVar2,0);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar2,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (*(int *)(**(int **)(_UNK_0205a5a8 + 0x205a558) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uStack_18 = uStack_20;
      pcVar6 = (char *)(_UNK_02080230 + 0x208006c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02080234 + 0x2080080),uVar5,0);
        func_0x01384978(*(undefined4 *)(_UNK_02080238 + 0x208008c));
        func_0x01384978(*(undefined4 *)(_UNK_0208023c + 0x2080098));
        func_0x01384978(*(undefined4 *)(_UNK_02080240 + 0x20800a4));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x34bb,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x34bb,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = uStack_18;
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
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,uVar5,0);
        iVar4 = *(int *)(iVar3 + 8);
        uVar5 = *(undefined4 *)(iVar3 + 0xc);
        iVar1 = *(int *)(iVar3 + 0x10);
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
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02080244 + 0x2080100));
      func_0x0244f5a0(iVar3,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      piVar8 = *(int **)(_UNK_02080248 + 0x2080128);
      *(undefined4 *)(iVar3 + 8) = uVar5;
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0208025c(uVar5);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&SUB_05189da8)(iVar1,iVar3 != 0,0);
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x34b0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02179a68(iVar1,param_1,uVar5,uVar2);
  }
  return;
}



// ===== FAT.MBCommonItem$$ShowItemFromRes RVA 0x204a620 =====

/* WARNING: Possible PIC construction at 0x0208059c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x020806a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x020805a0) */
/* WARNING: Removing unreachable block (ram,0x020805ac) */
/* WARNING: Removing unreachable block (ram,0x020805b0) */
/* WARNING: Removing unreachable block (ram,0x020805bc) */
/* WARNING: Removing unreachable block (ram,0x020805c0) */
/* WARNING: Removing unreachable block (ram,0x020805e4) */
/* WARNING: Removing unreachable block (ram,0x020805e8) */
/* WARNING: Removing unreachable block (ram,0x020806ac) */
/* WARNING: Removing unreachable block (ram,0x020806b8) */
/* WARNING: Removing unreachable block (ram,0x020806bc) */
/* WARNING: Removing unreachable block (ram,0x020806c8) */
/* WARNING: Removing unreachable block (ram,0x020806cc) */
/* WARNING: Removing unreachable block (ram,0x020806f0) */
/* WARNING: Removing unreachable block (ram,0x020806f4) */
/* WARNING: Removing unreachable block (ram,0x02080608) */
/* WARNING: Removing unreachable block (ram,0x02080624) */
/* WARNING: Removing unreachable block (ram,0x02080628) */
/* WARNING: Removing unreachable block (ram,0x0244ffb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0205a620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
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
  
  pcVar3 = (char *)(_UNK_0205a860 + 0x205a640);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0205a864 + 0x205a658));
    func_0x01384978(*(undefined4 *)(_UNK_0205a868 + 0x205a664));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa78e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa78e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    uStack_28 = param_4;
    func_0x0217fd9c(iVar1,param_1,param_2,param_3);
    return;
  }
  piVar6 = *(int **)(_UNK_0205a86c + 0x205a6cc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar4,0,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(**(int **)(_UNK_0205a870 + 0x205a704) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0207f52c(uVar4,param_2,0);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar4,0,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_0205a874 + 0x205a764) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0207fa3c(uVar4,param_3,param_4,0);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar4,0,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(**(int **)(_UNK_0205a878 + 0x205a7c8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0207fd48(uVar4,param_3,param_4,0);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar4,0,0);
  if (iVar1 == 0) {
    return;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_0205a87c + 0x205a82c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_02080728 + 0x2080438);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0208072c + 0x208044c),param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_02080730 + 0x2080458));
    func_0x01384978(*(undefined4 *)(_UNK_02080734 + 0x2080464));
    func_0x01384978(*(undefined4 *)(_UNK_02080738 + 0x2080470));
    func_0x01384978(*(undefined4 *)(_UNK_0208073c + 0x208047c));
    func_0x01384978(*(undefined4 *)(_UNK_02080740 + 0x2080488));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x63ed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x63ed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,uVar4,0);
    func_0x01485238(&uStack_38,param_3,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02080744 + 0x20804e4));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar6 = *(int **)(_UNK_02080748 + 0x208050c);
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 8) = uVar4;
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = func_0x0207ebf0(param_3,0);
  if (iVar5 == 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0207cde4(uVar4,0);
    if (iVar5 == 0) {
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(**(int **)(_UNK_02080754 + 0x2080648) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0208025c(uVar4);
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      goto SUB_0244ffe4;
    }
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 1;
SUB_0244ffe4:
  (*(code *)&SUB_05189da8)(iVar1,uVar4,0);
  return;
}



// ===== FAT.MBCommonItem$$ShowItemReward RVA 0x204a880 =====

/* WARNING: Possible PIC construction at 0x0208059c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x020806a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x020805a0) */
/* WARNING: Removing unreachable block (ram,0x020805ac) */
/* WARNING: Removing unreachable block (ram,0x020805b0) */
/* WARNING: Removing unreachable block (ram,0x020805bc) */
/* WARNING: Removing unreachable block (ram,0x020805c0) */
/* WARNING: Removing unreachable block (ram,0x020805e4) */
/* WARNING: Removing unreachable block (ram,0x020805e8) */
/* WARNING: Removing unreachable block (ram,0x020806ac) */
/* WARNING: Removing unreachable block (ram,0x020806b8) */
/* WARNING: Removing unreachable block (ram,0x020806bc) */
/* WARNING: Removing unreachable block (ram,0x020806c8) */
/* WARNING: Removing unreachable block (ram,0x020806cc) */
/* WARNING: Removing unreachable block (ram,0x020806f0) */
/* WARNING: Removing unreachable block (ram,0x020806f4) */
/* WARNING: Removing unreachable block (ram,0x02080608) */
/* WARNING: Removing unreachable block (ram,0x02080624) */
/* WARNING: Removing unreachable block (ram,0x02080628) */
/* WARNING: Removing unreachable block (ram,0x0244ffb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0205a880(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
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
  
  pcVar4 = (char *)(_UNK_0205aabc + 0x205a8a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0205aac0 + 0x205a8b4));
    func_0x01384978(*(undefined4 *)(_UNK_0205aac4 + 0x205a8c0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x63ec,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x63ec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
    return;
  }
  piVar6 = *(int **)(_UNK_0205aac8 + 0x205a924);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(**(int **)(_UNK_0205aacc + 0x205a95c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0207f6b4(uVar5,param_2,param_3,0);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_0205aad0 + 0x205a9c0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0207fa3c(uVar5,param_2,param_3,0);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(**(int **)(_UNK_0205aad4 + 0x205aa24) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0207fd48(uVar5,param_2,param_3,0);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 == 0) {
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_0205aad8 + 0x205aa88) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_02080728 + 0x2080438);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0208072c + 0x208044c),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_02080730 + 0x2080458));
    func_0x01384978(*(undefined4 *)(_UNK_02080734 + 0x2080464));
    func_0x01384978(*(undefined4 *)(_UNK_02080738 + 0x2080470));
    func_0x01384978(*(undefined4 *)(_UNK_0208073c + 0x208047c));
    func_0x01384978(*(undefined4 *)(_UNK_02080740 + 0x2080488));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x63ed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x63ed,0);
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
    func_0x01485278(&uStack_38,uVar5,0);
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
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02080744 + 0x20804e4));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar6 = *(int **)(_UNK_02080748 + 0x208050c);
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  *(undefined4 *)(iVar1 + 8) = uVar5;
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0207ebf0(param_2,0);
  if (iVar3 == 0) {
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0207cde4(uVar5,0);
    if (iVar3 == 0) {
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(**(int **)(_UNK_02080754 + 0x2080648) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0208025c(uVar5);
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      goto SUB_0244ffe4;
    }
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 1;
SUB_0244ffe4:
  (*(code *)&SUB_05189da8)(iVar1,uVar5,0);
  return;
}



// ===== FAT.MBCommonItem$$.ctor RVA 0x204aadc =====

void FUN_0205aadc(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


