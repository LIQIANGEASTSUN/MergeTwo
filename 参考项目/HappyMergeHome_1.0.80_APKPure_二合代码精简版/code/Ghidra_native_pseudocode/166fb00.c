
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167fb00(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0167fee4 + 0x167fb18);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167fee8 + 0x167fb2c));
    func_0x01438628(*(undefined4 *)(_UNK_0167feec + 0x167fb38));
    func_0x01438628(*(undefined4 *)(_UNK_0167fef0 + 0x167fb44));
    func_0x01438628(*(undefined4 *)(_UNK_0167fef4 + 0x167fb50));
    func_0x01438628(*(undefined4 *)(_UNK_0167fef8 + 0x167fb5c));
    func_0x01438628(*(undefined4 *)(_UNK_0167fefc + 0x167fb68));
    func_0x01438628(*(undefined4 *)(_UNK_0167ff00 + 0x167fb74));
    func_0x01438628(*(undefined4 *)(_UNK_0167ff04 + 0x167fb80));
    func_0x01438628(*(undefined4 *)(_UNK_0167ff08 + 0x167fb8c));
    func_0x01438628(*(undefined4 *)(_UNK_0167ff0c + 0x167fb98));
    func_0x01438628(*(undefined4 *)(_UNK_0167ff10 + 0x167fba4));
    func_0x01438628(*(undefined4 *)(_UNK_0167ff14 + 0x167fbb0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x879a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x879a,0);
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
  if (*(int *)(**(int **)(_UNK_0167ff18 + 0x167fc0c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0167ff1c + 0x167fc28));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_0167ff20 + 0x167fc48));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x398);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_0167ff24 + 0x167fc7c));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0167ff28 + 0x167fc94));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_0167ff2c + 0x167fcac));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_0167ff30 + 0x167fcd8);
    puVar8 = *(undefined4 **)(_UNK_0167ff34 + 0x167fce0);
    do {
      if (*(int *)(**(int **)(_UNK_0167ff38 + 0x167fce8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_0167ff3c + 0x167fd04));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04cc(iVar5,**(undefined4 **)(_UNK_0167ff40 + 0x167fd24));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x398);
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
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_0167ff44 + 0x167fdfc));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_0167ff48 + 0x167fe34) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_0167ff4c + 0x167fe50));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x024f04cc(iVar5,**(undefined4 **)(_UNK_0167ff50 + 0x167fe70));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x398);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_0167ff54 + 0x167fec8));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

