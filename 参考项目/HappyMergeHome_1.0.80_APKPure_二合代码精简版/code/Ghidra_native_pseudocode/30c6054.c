
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030d6054(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_030d6438 + 0x30d606c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d643c + 0x30d6080));
    func_0x01438628(*(undefined4 *)(_UNK_030d6440 + 0x30d608c));
    func_0x01438628(*(undefined4 *)(_UNK_030d6444 + 0x30d6098));
    func_0x01438628(*(undefined4 *)(_UNK_030d6448 + 0x30d60a4));
    func_0x01438628(*(undefined4 *)(_UNK_030d644c + 0x30d60b0));
    func_0x01438628(*(undefined4 *)(_UNK_030d6450 + 0x30d60bc));
    func_0x01438628(*(undefined4 *)(_UNK_030d6454 + 0x30d60c8));
    func_0x01438628(*(undefined4 *)(_UNK_030d6458 + 0x30d60d4));
    func_0x01438628(*(undefined4 *)(_UNK_030d645c + 0x30d60e0));
    func_0x01438628(*(undefined4 *)(_UNK_030d6460 + 0x30d60ec));
    func_0x01438628(*(undefined4 *)(_UNK_030d6464 + 0x30d60f8));
    func_0x01438628(*(undefined4 *)(_UNK_030d6468 + 0x30d6104));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x771d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x771d,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_030d646c + 0x30d6160) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d6470 + 0x30d617c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_030d6474 + 0x30d619c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x388);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_030d6478 + 0x30d61d0));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030d647c + 0x30d61e8));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_030d6480 + 0x30d6200));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_030d6484 + 0x30d622c);
    puVar8 = *(undefined4 **)(_UNK_030d6488 + 0x30d6234);
    do {
      if (*(int *)(**(int **)(_UNK_030d648c + 0x30d623c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_030d6490 + 0x30d6258));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_030d6494 + 0x30d6278));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x388);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x03b73d40(iVar5,uVar6,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x04f6a364(iVar2,uVar6,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_030d6498 + 0x30d6350));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_030d649c + 0x30d6388) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_030d64a0 + 0x30d63a4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_030d64a4 + 0x30d63c4));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x388);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_030d64a8 + 0x30d641c));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

