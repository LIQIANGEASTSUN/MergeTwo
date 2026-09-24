
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031baf38(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_031bb31c + 0x31baf50);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031bb320 + 0x31baf64));
    func_0x01438628(*(undefined4 *)(_UNK_031bb324 + 0x31baf70));
    func_0x01438628(*(undefined4 *)(_UNK_031bb328 + 0x31baf7c));
    func_0x01438628(*(undefined4 *)(_UNK_031bb32c + 0x31baf88));
    func_0x01438628(*(undefined4 *)(_UNK_031bb330 + 0x31baf94));
    func_0x01438628(*(undefined4 *)(_UNK_031bb334 + 0x31bafa0));
    func_0x01438628(*(undefined4 *)(_UNK_031bb338 + 0x31bafac));
    func_0x01438628(*(undefined4 *)(_UNK_031bb33c + 0x31bafb8));
    func_0x01438628(*(undefined4 *)(_UNK_031bb340 + 0x31bafc4));
    func_0x01438628(*(undefined4 *)(_UNK_031bb344 + 0x31bafd0));
    func_0x01438628(*(undefined4 *)(_UNK_031bb348 + 0x31bafdc));
    func_0x01438628(*(undefined4 *)(_UNK_031bb34c + 0x31bafe8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7d19,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x7d19,0);
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
  if (*(int *)(**(int **)(_UNK_031bb350 + 0x31bb044) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031bb354 + 0x31bb060));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_031bb358 + 0x31bb080));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x308);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_031bb35c + 0x31bb0b4));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031bb360 + 0x31bb0cc));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_031bb364 + 0x31bb0e4));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_031bb368 + 0x31bb110);
    puVar8 = *(undefined4 **)(_UNK_031bb36c + 0x31bb118);
    do {
      if (*(int *)(**(int **)(_UNK_031bb370 + 0x31bb120) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_031bb374 + 0x31bb13c));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_031bb378 + 0x31bb15c));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x308);
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
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_031bb37c + 0x31bb234));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_031bb380 + 0x31bb26c) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_031bb384 + 0x31bb288));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_031bb388 + 0x31bb2a8));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x308);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_031bb38c + 0x31bb300));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

