
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018fc054(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_018fc438 + 0x18fc06c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fc43c + 0x18fc080));
    func_0x01438628(*(undefined4 *)(_UNK_018fc440 + 0x18fc08c));
    func_0x01438628(*(undefined4 *)(_UNK_018fc444 + 0x18fc098));
    func_0x01438628(*(undefined4 *)(_UNK_018fc448 + 0x18fc0a4));
    func_0x01438628(*(undefined4 *)(_UNK_018fc44c + 0x18fc0b0));
    func_0x01438628(*(undefined4 *)(_UNK_018fc450 + 0x18fc0bc));
    func_0x01438628(*(undefined4 *)(_UNK_018fc454 + 0x18fc0c8));
    func_0x01438628(*(undefined4 *)(_UNK_018fc458 + 0x18fc0d4));
    func_0x01438628(*(undefined4 *)(_UNK_018fc45c + 0x18fc0e0));
    func_0x01438628(*(undefined4 *)(_UNK_018fc460 + 0x18fc0ec));
    func_0x01438628(*(undefined4 *)(_UNK_018fc464 + 0x18fc0f8));
    func_0x01438628(*(undefined4 *)(_UNK_018fc468 + 0x18fc104));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x967f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x967f,0);
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
  if (*(int *)(**(int **)(_UNK_018fc46c + 0x18fc160) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018fc470 + 0x18fc17c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018fc474 + 0x18fc19c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2b4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_018fc478 + 0x18fc1d0));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018fc47c + 0x18fc1e8));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_018fc480 + 0x18fc200));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_018fc484 + 0x18fc22c);
    puVar8 = *(undefined4 **)(_UNK_018fc488 + 0x18fc234);
    do {
      if (*(int *)(**(int **)(_UNK_018fc48c + 0x18fc23c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_018fc490 + 0x18fc258));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_018fc494 + 0x18fc278));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x2b4);
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
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_018fc498 + 0x18fc350));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_018fc49c + 0x18fc388) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_018fc4a0 + 0x18fc3a4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_018fc4a4 + 0x18fc3c4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x2b4);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_018fc4a8 + 0x18fc41c));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

