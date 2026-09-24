
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03146204(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_031465e4 + 0x314621c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031465e8 + 0x3146230));
    func_0x01438628(*(undefined4 *)(_UNK_031465ec + 0x314623c));
    func_0x01438628(*(undefined4 *)(_UNK_031465f0 + 0x3146248));
    func_0x01438628(*(undefined4 *)(_UNK_031465f4 + 0x3146254));
    func_0x01438628(*(undefined4 *)(_UNK_031465f8 + 0x3146260));
    func_0x01438628(*(undefined4 *)(_UNK_031465fc + 0x314626c));
    func_0x01438628(*(undefined4 *)(_UNK_03146600 + 0x3146278));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1774,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1774,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_03146604 + 0x31462d4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03146608 + 0x31462f0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
    iVar7 = 0;
    puVar10 = *(undefined4 **)(_UNK_0314660c + 0x314632c);
    puVar9 = *(undefined4 **)(_UNK_03146610 + 0x3146334);
    do {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03146614 + 0x314633c));
      func_0x026f08a4(iVar2,0);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x026f04c8(iVar2,uVar8,0);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x1c);
      if (iVar2 == 0) {
        func_0x014388e4();
        func_0x026f0724(0,uVar8,0);
        func_0x014388e4();
      }
      else {
        func_0x026f0724(iVar2,uVar8,0);
      }
      iVar6 = *(int *)(iVar2 + 0x1c);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x20);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x14);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x18);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x18);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x2c);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x24);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar6 = *(int *)(iVar2 + 0x30);
      iVar3 = func_0x04cfd760(iVar1,iVar7,*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar3 + 0x28);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c38(iVar6,uVar8,*puVar9);
      iVar3 = FUN_031457fc(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x6c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b77610(iVar3,iVar2,**(undefined4 **)(_UNK_03146618 + 0x31465c4));
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar1 + 0xc));
  }
  return;
}

