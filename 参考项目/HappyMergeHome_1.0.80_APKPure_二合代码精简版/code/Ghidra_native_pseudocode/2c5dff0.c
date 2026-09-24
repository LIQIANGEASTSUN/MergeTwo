
/* WARNING: Possible PIC construction at 0x02c6e1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c6e448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c6e44c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c6dff0(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_r4;
  int *piVar7;
  undefined4 uVar8;
  int *unaff_r5;
  char *pcVar9;
  undefined4 uVar10;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  int *piVar12;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar5 = param_5;
  piVar4 = &iStack_30;
  pcVar9 = (char *)(_UNK_02c6e450 + 0x2c6e010);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6e454 + 0x2c6e02c));
    func_0x01438628(*(undefined4 *)(_UNK_02c6e458 + 0x2c6e038));
    func_0x01438628(*(undefined4 *)(_UNK_02c6e45c + 0x2c6e044));
    func_0x01438628(*(undefined4 *)(_UNK_02c6e460 + 0x2c6e050));
    func_0x01438628(*(undefined4 *)(_UNK_02c6e464 + 0x2c6e05c));
    func_0x01438628(*(undefined4 *)(_UNK_02c6e468 + 0x2c6e068));
    func_0x01438628(*(undefined4 *)(_UNK_02c6e46c + 0x2c6e074));
    func_0x01438628(*(undefined4 *)(_UNK_02c6e470 + 0x2c6e080));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5953,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5953,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iStack_2c = iVar5;
    uStack_28 = 0;
    iStack_30 = param_4;
    func_0x028f45fc(iVar2,param_1,param_2,param_3);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024eecb8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024eff78(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x014e94d8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar2,param_2 ^ 1,0);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x014e94d8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar2,param_2,0);
  if (param_2 == 0) {
    iVar2 = func_0x01523adc(param_3,0);
    if (iVar2 == 0) {
      piVar7 = *(int **)(param_1 + 0x18);
      if (piVar7 == (int *)0x0) {
        func_0x014388e4();
      }
      unaff_lr = 0x2c6e1f4;
      iVar2 = 0;
      unaff_r5 = piVar7;
      iVar1 = unaff_r6;
      iVar3 = param_3;
      piVar4 = &iStack_30;
      goto SUB_0202e208;
    }
    piVar7 = *(int **)(_UNK_02c6e474 + 0x2c6e200);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar11 = *(undefined4 **)(_UNK_02c6e478 + 0x2c6e21c);
    iVar2 = func_0x014e9518(*puVar11);
    uVar10 = *(undefined4 *)(param_1 + 0x78);
    uVar8 = FUN_02c6b6f0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02baed80(iVar2,uVar10,uVar8,0);
    iVar3 = *(int *)(param_1 + 0x8c);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0x70);
    }
    if ((iVar3 != 0 && iVar2 != 0) && (1 < *(int *)(iVar2 + 0xc))) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(*puVar11);
      iVar3 = *(int *)(param_1 + 0x78);
      uVar8 = FUN_02c6b6f0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar6 = FUN_02bd12f0(iVar2,iVar3,uVar8,0);
      if ((iVar1 < 1) && (iVar6 == 0)) {
        iVar6 = *(int *)(param_1 + 0x8c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar6 + 0x4c) < 1) {
          piVar7 = *(int **)(param_1 + 0x18);
          if (piVar7 == (int *)0x0) {
            func_0x014388e4();
          }
          piVar12 = *(int **)(_UNK_02c6e47c + 0x2c6e440);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x8c);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          if (((*(int *)(iVar6 + 0x1c) == 2) && (*(int *)(param_1 + 0x90) != 0)) &&
             (0 < *(int *)(*(int *)(param_1 + 0x90) + 0x28))) {
            piVar7 = *(int **)(param_1 + 0x18);
            if (piVar7 == (int *)0x0) {
              func_0x014388e4();
            }
            piVar12 = *(int **)(_UNK_02c6e480 + 0x2c6e408);
          }
          else {
            piVar7 = *(int **)(param_1 + 0x18);
            if (piVar7 == (int *)0x0) {
              func_0x014388e4();
            }
            piVar12 = *(int **)(_UNK_02c6e484 + 0x2c6e424);
          }
        }
        param_3 = *piVar12;
        unaff_lr = 0x2c6e44c;
        unaff_r5 = piVar7;
        goto SUB_0202e208;
      }
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02032130(iVar2,param_3,1,0);
  }
  if (param_4 == 0) {
    if (iVar5 == 0) {
      if (((*(int *)(param_1 + 0x8c) == 0) || (*(int *)(*(int *)(param_1 + 0x8c) + 0x1c) != 2)) ||
         ((*(int *)(param_1 + 0x90) == 0 || (*(int *)(*(int *)(param_1 + 0x90) + 0x28) < 1)))) {
        piVar7 = *(int **)(param_1 + 0x30);
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        piVar4 = *(int **)(_UNK_02c6e494 + 0x2c6e31c);
      }
      else {
        piVar7 = *(int **)(param_1 + 0x18);
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        piVar4 = *(int **)(_UNK_02c6e490 + 0x2c6e300);
      }
    }
    else {
      piVar7 = *(int **)(param_1 + 0x30);
      if (piVar7 == (int *)0x0) {
        func_0x014388e4();
      }
      piVar4 = *(int **)(_UNK_02c6e48c + 0x2c6e2b4);
    }
  }
  else {
    piVar7 = *(int **)(param_1 + 0x30);
    if (piVar7 == (int *)0x0) {
      func_0x014388e4();
    }
    piVar4 = *(int **)(_UNK_02c6e488 + 0x2c6e290);
  }
  param_3 = *piVar4;
  param_1 = unaff_r4;
  iVar1 = unaff_r6;
  iVar2 = unaff_r7;
  iVar3 = unaff_r8;
  param_4 = unaff_r9;
  iVar5 = unaff_r10;
  piVar4 = (int *)register0x00000054;
SUB_0202e208:
  *(undefined4 *)((int)piVar4 + -4) = unaff_lr;
  *(int *)((int)piVar4 + -8) = iVar1;
  *(int **)((int)piVar4 + -0xc) = unaff_r5;
  piVar12 = (int *)((int)piVar4 + -0x10);
  *piVar12 = param_1;
  iVar1 = func_0x02953fd4(0x93e,0,0);
  if (iVar1 == 0) {
    piVar7[4] = param_3;
    func_0x014385cc(piVar7 + 4,param_3);
                    /* WARNING: Could not recover jumptable at 0x0202e280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar7 + 0xe0))(piVar7,*(undefined4 *)(*piVar7 + 0xe4));
    return;
  }
  iVar1 = func_0x029540a4(0x93e,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar6 = *piVar12;
  uVar8 = *(undefined4 *)((int)piVar4 + -0xc);
  uVar10 = *(undefined4 *)((int)piVar4 + -8);
  *(undefined4 *)((int)piVar4 + -4) = *(undefined4 *)((int)piVar4 + -4);
  *(int *)((int)piVar4 + -8) = iVar5;
  *(int *)((int)piVar4 + -0xc) = param_4;
  *piVar12 = iVar3;
  *(int *)((int)piVar4 + -0x14) = iVar2;
  *(undefined4 *)((int)piVar4 + -0x18) = uVar10;
  *(undefined4 *)((int)piVar4 + -0x1c) = uVar8;
  *(int *)((int)piVar4 + -0x20) = iVar6;
  *(undefined4 *)((int)piVar4 + -0x38) = 0;
  *(undefined4 *)((int)piVar4 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)piVar4 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)piVar4 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)piVar4 + -0x28) = 0;
  func_0x024f56c0((undefined4 *)((int)piVar4 + -0x50),0,param_3,0);
  iVar5 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)piVar4 + -0x38) = *(undefined4 *)((int)piVar4 + -0x50);
  *(undefined4 *)((int)piVar4 + -0x34) = *(undefined4 *)((int)piVar4 + -0x4c);
  *(undefined4 *)((int)piVar4 + -0x30) = *(undefined4 *)((int)piVar4 + -0x48);
  *(undefined4 *)((int)piVar4 + -0x2c) = *(undefined4 *)((int)piVar4 + -0x44);
  *(undefined4 *)((int)piVar4 + -0x28) = *(undefined4 *)((int)piVar4 + -0x40);
  if (iVar5 != 0) {
    func_0x01523a6c((undefined1 *)((int)piVar4 + -0x38),iVar5,0);
  }
  func_0x01523a6c((undefined1 *)((int)piVar4 + -0x38),piVar7,0);
  func_0x01523a6c((undefined1 *)((int)piVar4 + -0x38),param_3,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar5 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar10 = 3;
  if (iVar5 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)piVar4 + -0x58) = 0;
  *(undefined4 *)((int)piVar4 + -0x54) = 0;
  func_0x024f56d0(iVar2,uVar8,(undefined1 *)((int)piVar4 + -0x38),uVar10);
  return;
}

