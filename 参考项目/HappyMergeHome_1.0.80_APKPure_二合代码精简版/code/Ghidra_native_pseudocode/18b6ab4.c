
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018c6ab4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_018c6e98 + 0x18c6acc);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c6e9c + 0x18c6ae0));
    func_0x01438628(*(undefined4 *)(_UNK_018c6ea0 + 0x18c6aec));
    func_0x01438628(*(undefined4 *)(_UNK_018c6ea4 + 0x18c6af8));
    func_0x01438628(*(undefined4 *)(_UNK_018c6ea8 + 0x18c6b04));
    func_0x01438628(*(undefined4 *)(_UNK_018c6eac + 0x18c6b10));
    func_0x01438628(*(undefined4 *)(_UNK_018c6eb0 + 0x18c6b1c));
    func_0x01438628(*(undefined4 *)(_UNK_018c6eb4 + 0x18c6b28));
    func_0x01438628(*(undefined4 *)(_UNK_018c6eb8 + 0x18c6b34));
    func_0x01438628(*(undefined4 *)(_UNK_018c6ebc + 0x18c6b40));
    func_0x01438628(*(undefined4 *)(_UNK_018c6ec0 + 0x18c6b4c));
    func_0x01438628(*(undefined4 *)(_UNK_018c6ec4 + 0x18c6b58));
    func_0x01438628(*(undefined4 *)(_UNK_018c6ec8 + 0x18c6b64));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9534,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9534,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_018c6ecc + 0x18c6bc0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c6ed0 + 0x18c6bdc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018c6ed4 + 0x18c6bfc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x348);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_018c6ed8 + 0x18c6c30));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018c6edc + 0x18c6c48));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_018c6ee0 + 0x18c6c60));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_018c6ee4 + 0x18c6c8c);
    puVar8 = *(undefined4 **)(_UNK_018c6ee8 + 0x18c6c94);
    do {
      if (*(int *)(**(int **)(_UNK_018c6eec + 0x18c6c9c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_018c6ef0 + 0x18c6cb8));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_018c6ef4 + 0x18c6cd8));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x348);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04d4(iVar5,uVar7,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x014e9678(iVar2,uVar7,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_018c6ef8 + 0x18c6db0));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_018c6efc + 0x18c6de8) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_018c6f00 + 0x18c6e04));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_018c6f04 + 0x18c6e24));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x348);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_018c6f08 + 0x18c6e7c));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

