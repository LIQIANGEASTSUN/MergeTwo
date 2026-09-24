
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c5e0a4(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
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
  
  pcVar7 = (char *)(_UNK_02c5e1bc + 0x2c5e0bc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c5e1c0 + 0x2c5e0d0));
    *pcVar7 = '\x01';
  }
  uVar8 = func_0x02953fd4(0x5f72,0);
  iVar1 = (int)((ulonglong)uVar8 >> 0x20);
  if ((int)uVar8 != 0) {
    iVar1 = func_0x029540a4(0x5f72,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
SUB_02869298:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  if ((param_2 != (int *)0x0) && (*(int *)(param_1 + 0x3c) == 0xc)) {
    iVar5 = param_2[3];
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      piVar2 = *(int **)(iVar5 + 0x10);
      param_2 = (int *)0x0;
      if (piVar2 != (int *)0x0) {
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_02c5e1c4 + 0x2c5e168) + 0xb8);
        if ((*(byte *)(*piVar2 + 0xb8) < uVar4) ||
           (param_2 = piVar2,
           *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) !=
           **(int **)(_UNK_02c5e1c4 + 0x2c5e168))) {
          func_0x01438ca8();
          param_2 = (int *)0x0;
        }
      }
      param_1 = *(int *)(param_1 + 0x24);
      if (param_1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02953fd4(0x5f73,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x014e94d8(iVar1,0);
        piVar2 = *(int **)(param_1 + 0x54);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        (*(code *)&UNK_05d3ec04)(iVar1,param_2 == piVar2,0);
        return;
      }
      iVar1 = func_0x029540a4(0x5f73,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      goto SUB_02869298;
    }
  }
  return;
}

