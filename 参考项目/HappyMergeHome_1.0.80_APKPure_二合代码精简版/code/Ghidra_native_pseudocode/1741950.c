
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01751950(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_01751d34 + 0x1751968);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01751d38 + 0x175197c));
    func_0x01438628(*(undefined4 *)(_UNK_01751d3c + 0x1751988));
    func_0x01438628(*(undefined4 *)(_UNK_01751d40 + 0x1751994));
    func_0x01438628(*(undefined4 *)(_UNK_01751d44 + 0x17519a0));
    func_0x01438628(*(undefined4 *)(_UNK_01751d48 + 0x17519ac));
    func_0x01438628(*(undefined4 *)(_UNK_01751d4c + 0x17519b8));
    func_0x01438628(*(undefined4 *)(_UNK_01751d50 + 0x17519c4));
    func_0x01438628(*(undefined4 *)(_UNK_01751d54 + 0x17519d0));
    func_0x01438628(*(undefined4 *)(_UNK_01751d58 + 0x17519dc));
    func_0x01438628(*(undefined4 *)(_UNK_01751d5c + 0x17519e8));
    func_0x01438628(*(undefined4 *)(_UNK_01751d60 + 0x17519f4));
    func_0x01438628(*(undefined4 *)(_UNK_01751d64 + 0x1751a00));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8d05,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8d05,0);
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
  if (*(int *)(**(int **)(_UNK_01751d68 + 0x1751a5c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01751d6c + 0x1751a78));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01751d70 + 0x1751a98));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x394);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01751d74 + 0x1751acc));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01751d78 + 0x1751ae4));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_01751d7c + 0x1751afc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_01751d80 + 0x1751b28);
    puVar8 = *(undefined4 **)(_UNK_01751d84 + 0x1751b30);
    do {
      if (*(int *)(**(int **)(_UNK_01751d88 + 0x1751b38) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01751d8c + 0x1751b54));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01751d90 + 0x1751b74));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x394);
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
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_01751d94 + 0x1751c4c));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_01751d98 + 0x1751c84) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01751d9c + 0x1751ca0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01751da0 + 0x1751cc0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x394);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_01751da4 + 0x1751d18));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

