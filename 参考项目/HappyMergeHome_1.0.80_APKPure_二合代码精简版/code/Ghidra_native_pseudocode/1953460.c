
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01963460(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_01963844 + 0x1963478);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01963848 + 0x196348c));
    func_0x01438628(*(undefined4 *)(_UNK_0196384c + 0x1963498));
    func_0x01438628(*(undefined4 *)(_UNK_01963850 + 0x19634a4));
    func_0x01438628(*(undefined4 *)(_UNK_01963854 + 0x19634b0));
    func_0x01438628(*(undefined4 *)(_UNK_01963858 + 0x19634bc));
    func_0x01438628(*(undefined4 *)(_UNK_0196385c + 0x19634c8));
    func_0x01438628(*(undefined4 *)(_UNK_01963860 + 0x19634d4));
    func_0x01438628(*(undefined4 *)(_UNK_01963864 + 0x19634e0));
    func_0x01438628(*(undefined4 *)(_UNK_01963868 + 0x19634ec));
    func_0x01438628(*(undefined4 *)(_UNK_0196386c + 0x19634f8));
    func_0x01438628(*(undefined4 *)(_UNK_01963870 + 0x1963504));
    func_0x01438628(*(undefined4 *)(_UNK_01963874 + 0x1963510));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9923,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9923,0);
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
  if (*(int *)(**(int **)(_UNK_01963878 + 0x196356c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0196387c + 0x1963588));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01963880 + 0x19635a8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x39c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01963884 + 0x19635dc));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01963888 + 0x19635f4));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_0196388c + 0x196360c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_01963890 + 0x1963638);
    puVar8 = *(undefined4 **)(_UNK_01963894 + 0x1963640);
    do {
      if (*(int *)(**(int **)(_UNK_01963898 + 0x1963648) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_0196389c + 0x1963664));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_019638a0 + 0x1963684));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x39c);
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
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_019638a4 + 0x196375c));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_019638a8 + 0x1963794) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_019638ac + 0x19637b0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_019638b0 + 0x19637d0));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x39c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_019638b4 + 0x1963828));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

