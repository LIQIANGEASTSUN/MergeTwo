/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBItemResHolder$$ClearRes RVA 0x1e048c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e148c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  pcVar3 = (char *)(_UNK_01e149b0 + 0x1e148d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e149b4 + 0x1e148e8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5d97,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d97,0);
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
  func_0x01e1b7e0(param_1);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_01e149b8 + 0x1e14948) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar6,0,0);
  if (iVar1 != 0) {
    piVar4 = *(int **)(param_1 + 0x14);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar4 + 0x100))(piVar4,*(undefined4 *)(*piVar4 + 0x104));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// ===== FAT.MBItemResHolder$$LoadRes RVA 0x1e0587c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1587c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  pcVar7 = (char *)(_UNK_01e159ec + 0x1e1589c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e159f0 + 0x1e158b4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1612,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1612,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02178970(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01e159f4 + 0x1e15944)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x108);
        goto LAB_01e1598c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01e159f4 + 0x1e15944),9);
LAB_01e1598c:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(iVar1 + 0x38);
  uVar4 = func_0x01e1b628(param_1,param_2);
  uVar4 = func_0x01e1b704(param_1,uVar8,uVar4,param_2);
  (*(code *)&UNK_0518b080)(param_1,uVar4,0);
  return;
}



// ===== FAT.MBItemResHolder$$SetOnLoadAction RVA 0x1e05d40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e15d40(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01e15e1c + 0x1e15d58);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e15e20 + 0x1e15d6c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ff3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ff3,0);
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
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01e15e24 + 0x1e15dc8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x18) = param_2;
  }
  else if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e15e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0xc))
              (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_2 + 0x14));
    return;
  }
  return;
}



// ===== FAT.MBItemResHolder$$SetAlpha RVA 0x1e06220 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e16220(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01e16350 + 0x1e1623c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e16354 + 0x1e16250));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1681,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1681,0);
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
    func_0x01485258(&uStack_38,param_2,0);
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
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)(**(int **)(_UNK_01e16358 + 0x1e162b0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar6,0,0);
  if (iVar1 != 0) {
    piVar5 = *(int **)(param_1 + 0x28);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar5 + 0x170))(&uStack_30,piVar5,*(undefined4 *)(*piVar5 + 0x174));
    piVar5 = *(int **)(param_1 + 0x28);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)(*piVar5 + 0x17c);
    uStack_38 = param_2;
    (**(code **)(*piVar5 + 0x178))(piVar5,uStack_30,uStack_2c,uStack_28);
  }
  return;
}



// ===== FAT.MBItemResHolder$$get_ResHolder RVA 0x1e0b5d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e1b5d4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f82,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022398c8 + 0x22397e8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022398cc + 0x22397fc),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022398d0 + 0x22398b8));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MBItemResHolder$$_GetDisplayPrefabKey RVA 0x1e0b628 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1b628(undefined4 param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01e1b6f0 + 0x1e1b644);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1b6f4 + 0x1e1b658));
    func_0x01384978(*(undefined4 *)(_UNK_01e1b6f8 + 0x1e1b664));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1613,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1613,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02198f18 + 0x2198e24);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02198f1c + 0x2198e38),param_1,param_2,0);
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
    func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02198f20 + 0x2198f08));
    return;
  }
  uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_01e1b6fc + 0x1e1b6c8),&stack0xffffffec);
  func_0x0244f6a0(**(undefined4 **)(_UNK_01e1b700 + 0x1e1b6e4),uVar5,0);
  return;
}



// ===== FAT.MBItemResHolder$$_CoLoadRes RVA 0x1e0b704 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e1b704(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01e1b7d4 + 0x1e1b724);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1b7d8 + 0x1e1b73c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1614,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e1b7dc + 0x1e1b7a4));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    *(undefined4 *)(iVar1 + 0x14) = param_1;
    *(undefined4 *)(iVar1 + 0x18) = param_4;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0x1614,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02198208(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}



// ===== FAT.MBItemResHolder$$_TryReleaseDisplayPrefab RVA 0x1e0b7e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1b7e0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01e1b904 + 0x1e1b7f4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1b908 + 0x1e1b808));
    func_0x01384978(*(undefined4 *)(_UNK_01e1b90c + 0x1e1b814));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5d98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d98,0);
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
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01e1b910 + 0x1e1b86c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if ((iVar1 != 0) && (0 < *(int *)(param_1 + 0x1c))) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1b914 + 0x1e1b8b4));
    uVar5 = FUN_01e1b628(param_1,*(undefined4 *)(param_1 + 0x1c));
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244adcc(iVar1,uVar5,uVar2,0);
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// ===== FAT.MBItemResHolder$$_AddDisplayPrefab RVA 0x1e0b918 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1b918(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
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
  
  pcVar6 = (char *)(_UNK_01e1bc80 + 0x1e1b934);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1bc84 + 0x1e1b948));
    func_0x01384978(*(undefined4 *)(_UNK_01e1bc88 + 0x1e1b954));
    func_0x01384978(*(undefined4 *)(_UNK_01e1bc8c + 0x1e1b960));
    func_0x01384978(*(undefined4 *)(_UNK_01e1bc90 + 0x1e1b96c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1618,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1618,0);
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
  if (*(int *)(param_1 + 0x1c) == param_2) {
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(**(int **)(_UNK_01e1bc94 + 0x1e1b9d8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar7,0,0);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x20) != 0)) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1bc98 + 0x1e1ba1c));
      uVar7 = FUN_01e1b628(param_1,param_2);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ad68(iVar1,uVar7,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x024504c0(iVar1,0);
      uVar7 = *(undefined4 *)(param_1 + 0x24);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x024505b4(iVar5,uVar7,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x024504c0(iVar1,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0245069c(iVar5,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x024504c0(iVar1,0);
      pcVar6 = (char *)(_UNK_01e1bc9c + 0x1e1baec);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1bca0 + 0x1e1bb00));
        *pcVar6 = '\x01';
      }
      piVar9 = *(int **)(_UNK_01e1bca4 + 0x1e1bb18);
      puVar2 = *(undefined4 **)(*piVar9 + 0x5c);
      uVar7 = *puVar2;
      uVar4 = puVar2[1];
      uVar8 = puVar2[2];
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      func_0x0245068c(iVar5,uVar7,uVar4,uVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x024504c0(iVar1,0);
      pcVar6 = (char *)(_UNK_01e1bca8 + 0x1e1bb6c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1bcac + 0x1e1bb80));
        *pcVar6 = '\x01';
      }
      iVar3 = *(int *)(*piVar9 + 0x5c);
      uVar7 = *(undefined4 *)(iVar3 + 0xc);
      uVar4 = *(undefined4 *)(iVar3 + 0x10);
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      func_0x024503a4(iVar5,uVar7,uVar4,uVar8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar7 = func_0x02fe2a20(iVar1,**(undefined4 **)(_UNK_01e1bcb0 + 0x1e1bbd8));
      *(undefined4 *)(param_1 + 0x28) = uVar7;
      *(int *)(param_1 + 0x10) = iVar1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02fe3bd8(iVar1,param_1 + 0x14,**(undefined4 **)(_UNK_01e1bcb4 + 0x1e1bc08));
      if (iVar5 != 0) {
        piVar9 = *(int **)(param_1 + 0x14);
        uVar7 = *(undefined4 *)(param_1 + 0x20);
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar9 + 0xf8))(piVar9,uVar7,*(undefined4 *)(*piVar9 + 0xfc));
      }
      iVar5 = *(int *)(param_1 + 0x18);
      if (iVar5 == 0) {
        func_0x01e1bcb8(iVar1);
      }
      else {
        (**(code **)(iVar5 + 0xc))
                  (*(undefined4 *)(iVar5 + 0x20),iVar1,*(undefined4 *)(iVar5 + 0x14));
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}



// ===== FAT.MBItemResHolder$$SetBoard RVA 0x1e0bcb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1bcb8(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *piStack_14;
  
  pcVar3 = (char *)(_UNK_01e1bd90 + 0x1e1bcd0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1bd94 + 0x1e1bce4));
    *pcVar3 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar2 = func_0x0229f06c(0x161a,0);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02fe3bd8(param_1,&piStack_14,**(undefined4 **)(_UNK_01e1bd98 + 0x1e1bd54));
    piVar1 = piStack_14;
    if (iVar2 != 0) {
      if (piStack_14 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      (**(code **)(iVar2 + 0x108))(piVar1,*(undefined4 *)(iVar2 + 0x10c));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x161a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBItemResHolder$$SetReward RVA 0x1e0bd9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1bd9c(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *piStack_14;
  
  pcVar3 = (char *)(_UNK_01e1be74 + 0x1e1bdb4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1be78 + 0x1e1bdc8));
    *pcVar3 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar2 = func_0x0229f06c(0xa0b2,0);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02fe3bd8(param_1,&piStack_14,**(undefined4 **)(_UNK_01e1be7c + 0x1e1be38));
    piVar1 = piStack_14;
    if (iVar2 != 0) {
      if (piStack_14 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      (**(code **)(iVar2 + 0x118))(piVar1,*(undefined4 *)(iVar2 + 0x11c));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa0b2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBItemResHolder$$SetBorn RVA 0x1e0be80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1be80(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int *piStack_14;
  
  pcVar3 = (char *)(_UNK_01e1bf58 + 0x1e1be98);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1bf5c + 0x1e1beac));
    *pcVar3 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar2 = func_0x0229f06c(0x9ff1,0);
  if (iVar2 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02fe3bd8(param_1,&piStack_14,**(undefined4 **)(_UNK_01e1bf60 + 0x1e1bf1c));
    piVar1 = piStack_14;
    if (iVar2 != 0) {
      if (piStack_14 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      (**(code **)(iVar2 + 0x110))(piVar1,*(undefined4 *)(iVar2 + 0x114));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9ff1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBItemResHolder.<_CoLoadRes>d__19$$.ctor RVA 0x1e0bf64 =====

void FUN_01e1bf64(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBItemResHolder$$.ctor RVA 0x1e0bf80 =====

void FUN_01e1bf80(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBItemResHolder.<_CoLoadRes>d__19$$System.IDisposable.Dispose RVA 0x1e0bf88 =====

void FUN_01e1bf88(void)

{
  return;
}



// ===== FAT.MBItemResHolder.<_CoLoadRes>d__19$$MoveNext RVA 0x1e0bf8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e1bf8c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  
  pcVar4 = (char *)(_UNK_01e1c238 + 0x1e1bfa0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1c23c + 0x1e1bfb4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1c240 + 0x1e1bfc0));
    func_0x01384978(*(undefined4 *)(_UNK_01e1c244 + 0x1e1bfcc));
    func_0x01384978(*(undefined4 *)(_UNK_01e1c248 + 0x1e1bfd8));
    func_0x01384978(*(undefined4 *)(_UNK_01e1c24c + 0x1e1bfe4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1c250 + 0x1e1bff0));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 8) == 1) {
    iVar2 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0;
    iVar2 = func_0x028bc4d8(iVar2,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 0;
      uVar9 = func_0x029dd460(iVar2,0);
      if (*(int *)(**(int **)(_UNK_01e1c264 + 0x1e1c0dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(uVar9,0,0);
      if (iVar2 != 0) {
        iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1c268 + 0x1e1c110));
        iVar7 = *(int *)(param_1 + 0x20);
        uVar9 = *(undefined4 *)(param_1 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x029dd460(iVar7,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar8 = (int *)0x0;
        if ((piVar3 != (int *)0x0) &&
           (piVar8 = piVar3, *piVar3 != **(int **)(_UNK_01e1c26c + 0x1e1c160))) {
          piVar8 = (int *)0x0;
        }
        uVar6 = 0;
        func_0x0244a6f8(iVar2,uVar9,piVar8,0);
        uVar9 = *(undefined4 *)(param_1 + 0x18);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_01e1b918(iVar5,uVar9);
      }
    }
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_01e1c254 + 0x1e1c024);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      iVar2 = func_0x034aaa34(*puVar1);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0244a3f8(iVar2,uVar6,0);
      if (iVar2 == 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(**(int **)(_UNK_01e1c258 + 0x1e1c1b4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = func_0x025550ec(uVar6,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(iVar5 + 8);
        uVar9 = *(undefined4 *)(iVar5 + 0xc);
        if (*(int *)(**(int **)(_UNK_01e1c25c + 0x1e1c1f0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar9 = func_0x0303a044(uVar6,uVar9,**(undefined4 **)(_UNK_01e1c260 + 0x1e1c218));
        uVar6 = 1;
        *(undefined4 *)(param_1 + 0x20) = uVar9;
        *(undefined4 *)(param_1 + 8) = 1;
        *(undefined4 *)(param_1 + 0xc) = uVar9;
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x18);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_01e1b918(iVar5,uVar6);
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}



// ===== FAT.MBItemResHolder.<_CoLoadRes>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1e0c270 =====

undefined4 FUN_01e1c270(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBItemResHolder.<_CoLoadRes>d__19$$System.Collections.IEnumerator.Reset RVA 0x1e0c278 =====

undefined4 FUN_01e1c278(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam01e1c2b4 + 0x1e1c288));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01e1c2b8 + 0x1e1c2a4));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.MBItemResHolder.<_CoLoadRes>d__19$$System.Collections.IEnumerator.get_Current RVA 0x1e0c2bc =====

undefined4 FUN_01e1c2bc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


