/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.GirdRewardData$$.ctor RVA 0x2101808 =====

void FUN_02111808(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  func_0x0244f5a0(param_1,0);
  *(undefined1 *)(param_1 + 0x18) = param_6;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  return;
}



// ===== FAT.Merge.GirdRewardData$$TryBeginReward RVA 0x2101844 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02111844(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
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
  
  pcVar4 = (char *)(_UNK_021119d4 + 0x2111860);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021119d8 + 0x2111874));
    func_0x01384978(*(undefined4 *)(_UNK_021119dc + 0x2111880));
    func_0x01384978(*(undefined4 *)(_UNK_021119e0 + 0x211188c));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar2 = func_0x0229f06c(0x9fde,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9fde,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02202898 + 0x2202780);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0220289c + 0x2202794),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485278(&uStack_38,0,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar5,&uStack_38,uVar3,1,0);
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022028a0 + 0x2202874));
    *param_2 = uVar5;
    uVar5 = func_0x0245496c(&uStack_38,1,0);
    return uVar5;
  }
  cVar1 = *(char *)(param_1 + 0x18);
  *param_2 = 0;
  if (cVar1 == '\0') {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar7 = *(int **)(_UNK_021119e4 + 0x2111918);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    iVar6 = *piVar7;
    iVar2 = *(int *)(iVar2 + 0x40);
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = *piVar7;
    }
    uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(_UNK_021119e8 + 0x2111960);
    uStack_2c = **(undefined4 **)(_UNK_021119ec + 0x211196c);
    uStack_34 = 0x116;
    uStack_28 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uVar5 = func_0x01cdcbac(iVar2,uVar5,uVar3,uVar8);
    *param_2 = uVar5;
    uVar5 = func_0x02122640(param_1 + 8,0,0,0);
    func_0x019a28c4(uVar5,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
    uVar5 = 1;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return uVar5;
}



// ===== FAT.Merge.GirdRewardData$$ToString RVA 0x21019f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021119f0(int param_1)

{
  int iVar1;
  int *piVar2;
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
  
  pcVar4 = (char *)(_UNK_02111c60 + 0x2111a08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02111c64 + 0x2111a1c));
    func_0x01384978(*(undefined4 *)(_UNK_02111c68 + 0x2111a28));
    func_0x01384978(*(undefined4 *)(_UNK_02111c6c + 0x2111a34));
    func_0x01384978(*(undefined4 *)(_UNK_02111c70 + 0x2111a40));
    func_0x01384978(*(undefined4 *)(_UNK_02111c74 + 0x2111a4c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb331,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb331,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02111c78 + 0x2111aac),4);
  uStack_20 = *(undefined4 *)(param_1 + 8);
  uStack_1c = *(undefined4 *)(param_1 + 0xc);
  iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02111c7c + 0x2111ac8),&uStack_20);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = iVar1;
  uStack_24 = *(undefined4 *)(param_1 + 0x10);
  puVar7 = *(undefined4 **)(_UNK_02111c80 + 0x2111b38);
  iVar1 = func_0x01384abc(*puVar7,&uStack_24);
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if ((uint)piVar2[3] < 2) {
    func_0x01384bf4();
  }
  piVar2[5] = iVar1;
  uStack_28 = *(undefined4 *)(param_1 + 0x14);
  iVar1 = func_0x01384abc(*puVar7,&uStack_28);
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if ((uint)piVar2[3] < 3) {
    func_0x01384bf4();
  }
  piVar2[6] = iVar1;
  uStack_2c = CONCAT13(*(undefined1 *)(param_1 + 0x18),(undefined3)uStack_2c);
  iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02111c84 + 0x2111bf0),(int)&uStack_2c + 3);
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if ((uint)piVar2[3] < 4) {
    func_0x01384bf4();
  }
  piVar2[7] = iVar1;
  func_0x0244f708(**(undefined4 **)(_UNK_02111c88 + 0x2111c54),piVar2,0);
  return;
}



// ===== FAT.Merge.GirdRewardData$$<>iFixBaseProxy_ToString RVA 0x2101c8c =====

void FUN_02111c8c(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}


