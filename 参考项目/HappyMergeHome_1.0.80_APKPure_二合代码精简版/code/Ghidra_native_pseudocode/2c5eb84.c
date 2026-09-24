
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c6eb84(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02c6efa8 + 0x2c6eb9c);
  if (*pcVar3 == '\0') {
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
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x02953fd4(0x6013,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6013,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
    return;
  }
  bVar5 = *(int *)(param_1 + 0x8c) != 0;
  iVar1 = 0;
  if (bVar5) {
    iVar1 = *(int *)(param_1 + 0x90);
  }
  if (!bVar5 || iVar1 == 0) {
    return;
  }
  FUN_02c6da8c(param_1);
  func_0x02c6effc(param_1);
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
  iVar4 = *(int *)(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uStack_14 = *(undefined4 *)(iVar4 + 0x74);
  uVar2 = func_0x01524ffc(&uStack_14,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02032130(iVar1,uVar2,1,0);
LAB_02c6edec:
  func_0x02c6f968(param_1,*(undefined4 *)(param_1 + 0x8c));
  func_0x02c6ffa4(param_1,0);
  func_0x02c70134(param_1,0);
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_14 = *(undefined4 *)(iVar1 + 0xc);
  switch(uStack_14) {
  case 0:
    func_0x02c702b0(param_1,*(undefined4 *)(param_1 + 0x8c));
    break;
  case 1:
    func_0x02c709a0(param_1,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    break;
  case 2:
    func_0x02c7046c(param_1,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    break;
  case 3:
    iVar1 = func_0x02c7106c(param_1,*(undefined4 *)(param_1 + 0x8c));
    if (0 < *(int *)(param_1 + 0x74)) {
      bVar5 = iVar1 == 4;
      if (bVar5) {
        iVar1 = *(int *)(param_1 + 0x78);
      }
      if (bVar5 && *(int *)(param_1 + 0x74) == iVar1) {
        if (*(int *)(**(int **)(&UNK_02c6eec4 + _UNK_02c6efec) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(&UNK_02c6eee0 + _UNK_02c6eff0));
        uVar2 = FUN_02c6b6f0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02baeb18(iVar1,uVar2,0);
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
            func_0x02c7152c(param_1);
          }
        }
      }
    }
    break;
  case 6:
    func_0x02c70864(param_1,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
  }
  return;
}

