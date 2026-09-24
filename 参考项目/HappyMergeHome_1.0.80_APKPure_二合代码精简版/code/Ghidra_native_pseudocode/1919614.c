
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01929614(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_019299f8 + 0x192962c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019299fc + 0x1929640));
    func_0x01438628(*(undefined4 *)(_UNK_01929a00 + 0x192964c));
    func_0x01438628(*(undefined4 *)(_UNK_01929a04 + 0x1929658));
    func_0x01438628(*(undefined4 *)(_UNK_01929a08 + 0x1929664));
    func_0x01438628(*(undefined4 *)(_UNK_01929a0c + 0x1929670));
    func_0x01438628(*(undefined4 *)(_UNK_01929a10 + 0x192967c));
    func_0x01438628(*(undefined4 *)(_UNK_01929a14 + 0x1929688));
    func_0x01438628(*(undefined4 *)(_UNK_01929a18 + 0x1929694));
    func_0x01438628(*(undefined4 *)(_UNK_01929a1c + 0x19296a0));
    func_0x01438628(*(undefined4 *)(_UNK_01929a20 + 0x19296ac));
    func_0x01438628(*(undefined4 *)(_UNK_01929a24 + 0x19296b8));
    func_0x01438628(*(undefined4 *)(_UNK_01929a28 + 0x19296c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x979d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x979d,0);
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
  if (*(int *)(**(int **)(_UNK_01929a2c + 0x1929720) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01929a30 + 0x192973c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01929a34 + 0x192975c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x3ac);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01929a38 + 0x1929790));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01929a3c + 0x19297a8));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_01929a40 + 0x19297c0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_01929a44 + 0x19297ec);
    puVar8 = *(undefined4 **)(_UNK_01929a48 + 0x19297f4);
    do {
      if (*(int *)(**(int **)(_UNK_01929a4c + 0x19297fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01929a50 + 0x1929818));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01929a54 + 0x1929838));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x3ac);
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
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_01929a58 + 0x1929910));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_01929a5c + 0x1929948) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01929a60 + 0x1929964));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01929a64 + 0x1929984));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x3ac);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_01929a68 + 0x19299dc));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

