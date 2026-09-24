
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031ea2c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar4 = (char *)(_UNK_031ea608 + 0x31ea2d8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031ea60c + 0x31ea2ec));
    func_0x01438628(*(undefined4 *)(_UNK_031ea610 + 0x31ea2f8));
    func_0x01438628(*(undefined4 *)(_UNK_031ea614 + 0x31ea304));
    func_0x01438628(*(undefined4 *)(_UNK_031ea618 + 0x31ea310));
    func_0x01438628(*(undefined4 *)(_UNK_031ea61c + 0x31ea31c));
    func_0x01438628(*(undefined4 *)(_UNK_031ea620 + 0x31ea328));
    func_0x01438628(*(undefined4 *)(_UNK_031ea624 + 0x31ea334));
    func_0x01438628(*(undefined4 *)(_UNK_031ea628 + 0x31ea340));
    func_0x01438628(*(undefined4 *)(_UNK_031ea62c + 0x31ea34c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x49a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x49a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    goto LAB_028713b0;
  }
  FUN_031e6094(param_1);
  piVar7 = *(int **)(_UNK_031ea630 + 0x31ea3ac);
  piVar5 = *(int **)(_UNK_031ea634 + 0x31ea3b8);
  uVar6 = **(undefined4 **)(*piVar7 + 0x5c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024ef144(uVar6,0,0);
  if (iVar1 == 0) {
LAB_031ea4e0:
    if (*(int *)(**(int **)(_UNK_031ea648 + 0x31ea4ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031ea64c + 0x31ea508));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_031ea654 + 0x31ea534),
                            **(undefined4 **)(_UNK_031ea650 + 0x31ea528));
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024ef144(iVar1,0,0);
    if (iVar3 != 0) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x014e94d8(iVar1,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x024efc2c(iVar3,0);
      if (iVar3 != 0) goto LAB_031ea5a8;
    }
    piVar5 = *(int **)(_UNK_031ea658 + 0x31ea5d0);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar5;
    }
    param_1 = **(int **)(iVar1 + 0x5c);
    if (param_1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02953fd4(0x495,0);
    if (iVar1 != 0) {
      iVar1 = func_0x029540a4(0x495,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
LAB_028713b0:
      pcVar4 = (char *)(_UNK_028714ac + 0x28713cc);
      if (*pcVar4 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_028714b0 + 0x28713e0),param_1,0);
        *pcVar4 = '\x01';
      }
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_30 = 0;
      uStack_20 = 0;
      func_0x024f56c0(&uStack_48,0);
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      uStack_24 = uStack_3c;
      uStack_20 = uStack_38;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01523a6c(&uStack_30,param_1,0);
      iVar3 = *(int *)(iVar1 + 8);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar2 = 2;
      if (iVar1 == 0) {
        uVar2 = 1;
      }
      func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
      func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028714b4 + 0x287149c));
      return;
    }
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar1 = **(int **)(*piVar7 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024ef984(iVar1,0);
    if (iVar1 == 0) goto LAB_031ea4e0;
    if (*(int *)(**(int **)(_UNK_031ea638 + 0x31ea43c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031ea63c + 0x31ea458));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_031ea644 + 0x31ea484),
                            **(undefined4 **)(_UNK_031ea640 + 0x31ea478));
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x024efb9c(iVar1,0);
    if (iVar3 == 0) {
      param_1 = **(int **)(*piVar7 + 0x5c);
      if (param_1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02953fd4(0x48b,0);
      if (iVar1 != 0) {
        iVar1 = func_0x029540a4(0x48b,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        goto LAB_028713b0;
      }
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      goto SUB_024eecb8;
    }
LAB_031ea5a8:
    if (iVar1 == 0) {
      func_0x014388e4();
    }
  }
SUB_024eecb8:
  (*(code *)&UNK_05d3ad2c)(iVar1,0);
  return;
}

