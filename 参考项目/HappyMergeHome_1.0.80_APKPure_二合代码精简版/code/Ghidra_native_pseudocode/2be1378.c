
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf1378(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
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
  
  pcVar6 = (char *)(iRam02bf1538 + 0x2bf1390);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf153c + 0x2bf13a4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d43,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  if ((param_2 != 0 && iVar1 != 0) && (2 < *(int *)(iVar1 + 0xc))) {
    puVar9 = *(undefined4 **)(_UNK_02bf1540 + 0x2bf1420);
    piVar8 = *(int **)(iVar1 + 0x10);
    iVar1 = param_1[4];
    piVar7 = (int *)*puVar9;
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if (*(int *)(*piVar8 + 0x20) == piVar7[8]) {
      piVar7 = (int *)func_0x014387b0(piVar8);
      if (*piVar7 != iVar1) {
        return;
      }
      iVar1 = *(int *)(param_2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) < 2) {
        func_0x014388e8();
      }
      piVar7 = *(int **)(iVar1 + 0x14);
      piVar8 = (int *)*puVar9;
      if (piVar7 == (int *)0x0) {
        func_0x014388e4();
      }
      if (*(int *)(*piVar7 + 0x20) == piVar8[8]) {
        puVar2 = (undefined4 *)func_0x014387b0(piVar7);
        iVar1 = *(int *)(param_2 + 0xc);
        uVar5 = *puVar2;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) < 3) {
          func_0x014388e8();
        }
        piVar7 = *(int **)(iVar1 + 0x18);
        piVar8 = (int *)*puVar9;
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        if (*(int *)(*piVar7 + 0x20) == piVar8[8]) {
          puVar9 = (undefined4 *)func_0x014387b0(piVar7);
                    /* WARNING: Could not recover jumptable at 0x02bf151c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0xf0))(param_1,uVar5,*puVar9,*(undefined4 *)(*param_1 + 0xf4));
          return;
        }
      }
    }
    else {
      func_0x01438ca8(piVar8,piVar7);
    }
    func_0x01438ca8(piVar7,piVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

