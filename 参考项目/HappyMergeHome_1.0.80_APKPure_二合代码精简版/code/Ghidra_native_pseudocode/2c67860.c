
/* WARNING: Possible PIC construction at 0x02c6ec68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c6ec6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c77860(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  bool bVar6;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02c77970 + 0x2c77874);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c77974 + 0x2c77888));
    func_0x01438628(*(undefined4 *)(_UNK_02c77978 + 0x2c77894));
    func_0x01438628(*(undefined4 *)(_UNK_02c7797c + 0x2c778a0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x603f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x603f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
SUB_02868e1c:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar2 = *(int *)(iVar1 + 0x10);
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
    if (iVar2 != 0) {
      func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
    }
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar2 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x024f56d0(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c77980 + 0x2c778f8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c77984 + 0x2c77914));
  uVar5 = FUN_02c6b6f0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02baeb18(iVar1,uVar5,0);
  if (iVar1 != 0) {
    return;
  }
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c77988 + 0x2c7795c),0);
  pcVar4 = (char *)(_UNK_02c6efa8 + 0x2c6eb9c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c6efac + 0x2c6ebb0));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efb0 + 0x2c6ebbc));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efb4 + 0x2c6ebc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efb8 + 0x2c6ebd4));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efbc + 0x2c6ebe0));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efc0 + 0x2c6ebec));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efc4 + 0x2c6ebf8));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efc8 + 0x2c6ec04));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efcc + 0x2c6ec10));
    func_0x01438628(*(undefined4 *)(_UNK_02c6efd0 + 0x2c6ec1c));
    *pcVar4 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x02953fd4(0x6013,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6013,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x2c6ec6c;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
    goto SUB_02868e1c;
  }
  bVar6 = *(int *)(param_1 + 0x8c) != 0;
  iVar1 = 0;
  if (bVar6) {
    iVar1 = *(int *)(param_1 + 0x90);
  }
  if (!bVar6 || iVar1 == 0) {
    return;
  }
  FUN_02c6da8c(param_1);
  FUN_02c6effc(param_1);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efd4 + 0x2c6ecac),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efd8 + 0x2c6ecc4),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efdc + 0x2c6ecdc),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efe0 + 0x2c6ecf4),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efe4 + 0x2c6ed0c),0);
  func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c6efe8 + 0x2c6ed24),0);
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0x1c) != 0x13) {
    iVar1 = *(int *)(param_1 + 0x8c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0x1c) != 0x12) {
      iVar1 = *(int *)(param_1 + 0x8c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x1c) != 0x21) {
        iVar1 = *(int *)(param_1 + 0x94);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x014e94e8(iVar1,0,0);
        goto LAB_02c6edec;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar1,1,0);
  iVar2 = *(int *)(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_14 = *(undefined4 *)(iVar2 + 0x74);
  uVar5 = func_0x01524ffc(&uStack_14,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02032130(iVar1,uVar5,1,0);
LAB_02c6edec:
  FUN_02c6f968(param_1,*(undefined4 *)(param_1 + 0x8c));
  FUN_02c6ffa4(param_1,0);
  FUN_02c70134(param_1,0);
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_14 = *(undefined4 *)(iVar1 + 0xc);
  switch(uStack_14) {
  case 0:
    FUN_02c702b0(param_1,*(undefined4 *)(param_1 + 0x8c));
    break;
  case 1:
    FUN_02c709a0(param_1,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    break;
  case 2:
    FUN_02c7046c(param_1,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    break;
  case 3:
    iVar1 = FUN_02c7106c(param_1,*(undefined4 *)(param_1 + 0x8c));
    if (0 < *(int *)(param_1 + 0x74)) {
      bVar6 = iVar1 == 4;
      if (bVar6) {
        iVar1 = *(int *)(param_1 + 0x78);
      }
      if (bVar6 && *(int *)(param_1 + 0x74) == iVar1) {
        if (*(int *)(**(int **)(&UNK_02c6eec4 + _UNK_02c6efec) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(&UNK_02c6eee0 + _UNK_02c6eff0));
        uVar5 = FUN_02c6b6f0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02baeb18(iVar1,uVar5,0);
        if (iVar1 == 0) {
          if (*(int *)(**(int **)(&UNK_02c6ef24 + _UNK_02c6eff4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(&UNK_02c6ef40 + _UNK_02c6eff8));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x029ca78c(iVar1,0);
          if (2 < iVar1) {
            FUN_02c7152c(param_1);
          }
        }
      }
    }
    break;
  case 6:
    FUN_02c70864(param_1,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
  }
  return;
}

