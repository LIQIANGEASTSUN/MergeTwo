/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.RewardCommitData$$.ctor RVA 0x1c24e84 =====

void FUN_01c34e84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  uVar1 = func_0x01c34eb8();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}



// ===== FAT.RewardCommitData$$ToString RVA 0x1c24fb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c34fb0(int param_1)

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
  
  pcVar4 = (char *)(_UNK_01c352b4 + 0x1c34fc8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c352b8 + 0x1c34fdc));
    func_0x01384978(*(undefined4 *)(_UNK_01c352bc + 0x1c34fe8));
    func_0x01384978(*(undefined4 *)(_UNK_01c352c0 + 0x1c34ff4));
    func_0x01384978(*(undefined4 *)(_UNK_01c352c4 + 0x1c35000));
    func_0x01384978(*(undefined4 *)(_UNK_01c352c8 + 0x1c3500c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9251,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9251,0);
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
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c352cc + 0x1c3506c),6);
  uStack_1c = *(undefined4 *)(param_1 + 8);
  puVar7 = *(undefined4 **)(_UNK_01c352d0 + 0x1c35084);
  iVar1 = func_0x01384abc(*puVar7,&uStack_1c);
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
  uStack_20 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c352d4 + 0x1c350f0),&uStack_20);
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if ((uint)piVar2[3] < 2) {
    func_0x01384bf4();
  }
  piVar2[5] = iVar1;
  uStack_24 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = func_0x01384abc(*puVar7,&uStack_24);
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if ((uint)piVar2[3] < 3) {
    func_0x01384bf4();
  }
  piVar2[6] = iVar1;
  puVar7 = *(undefined4 **)(_UNK_01c352d8 + 0x1c351a8);
  uStack_28 = CONCAT13(*(undefined1 *)(param_1 + 0x30),(undefined3)uStack_28);
  iVar1 = func_0x01384abc(*puVar7,(int)&uStack_28 + 3);
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if ((uint)piVar2[3] < 4) {
    func_0x01384bf4();
  }
  piVar2[7] = iVar1;
  uStack_28._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0x24),(undefined2)uStack_28);
  iVar1 = func_0x01384abc(*puVar7,(int)&uStack_28 + 2);
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if ((uint)piVar2[3] < 5) {
    func_0x01384bf4();
  }
  piVar2[8] = iVar1;
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0))
  {
    uVar6 = func_0x01384c10();
    func_0x01384aa0(uVar6,0);
  }
  if ((uint)piVar2[3] < 6) {
    func_0x01384bf4();
  }
  piVar2[9] = iVar1;
  func_0x0244f708(**(undefined4 **)(_UNK_01c352dc + 0x1c352a8),piVar2,0);
  return;
}



// ===== FAT.RewardCommitData$$<>iFixBaseProxy_ToString RVA 0x1c252e0 =====

void FUN_01c352e0(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}


