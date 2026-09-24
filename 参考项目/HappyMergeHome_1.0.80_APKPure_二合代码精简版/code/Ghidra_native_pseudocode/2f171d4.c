
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f271d4(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02f275b8 + 0x2f271ec);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f275bc + 0x2f27200));
    func_0x01438628(*(undefined4 *)(_UNK_02f275c0 + 0x2f2720c));
    func_0x01438628(*(undefined4 *)(_UNK_02f275c4 + 0x2f27218));
    func_0x01438628(*(undefined4 *)(_UNK_02f275c8 + 0x2f27224));
    func_0x01438628(*(undefined4 *)(_UNK_02f275cc + 0x2f27230));
    func_0x01438628(*(undefined4 *)(_UNK_02f275d0 + 0x2f2723c));
    func_0x01438628(*(undefined4 *)(_UNK_02f275d4 + 0x2f27248));
    func_0x01438628(*(undefined4 *)(_UNK_02f275d8 + 0x2f27254));
    func_0x01438628(*(undefined4 *)(_UNK_02f275dc + 0x2f27260));
    func_0x01438628(*(undefined4 *)(_UNK_02f275e0 + 0x2f2726c));
    func_0x01438628(*(undefined4 *)(_UNK_02f275e4 + 0x2f27278));
    func_0x01438628(*(undefined4 *)(_UNK_02f275e8 + 0x2f27284));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6d3d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6d3d,0);
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
  if (*(int *)(**(int **)(_UNK_02f275ec + 0x2f272e0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f275f0 + 0x2f272fc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f275f4 + 0x2f2731c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x1cc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = func_0x047536e4(iVar1,**(undefined4 **)(_UNK_02f275f8 + 0x2f27350));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f275fc + 0x2f27368));
  func_0x04cfd2f0(iVar1,uVar6,**(undefined4 **)(_UNK_02f27600 + 0x2f27380));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar7) {
    puVar9 = *(undefined4 **)(_UNK_02f27604 + 0x2f273ac);
    puVar8 = *(undefined4 **)(_UNK_02f27608 + 0x2f273b4);
    do {
      if (*(int *)(**(int **)(_UNK_02f2760c + 0x2f273bc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f27610 + 0x2f273d8));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_02f27614 + 0x2f273f8));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x1cc);
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
      iVar2 = func_0x014e9678(iVar2,uVar6,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x046c2130(iVar2,**(undefined4 **)(_UNK_02f27618 + 0x2f274d0));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_02f2761c + 0x2f27508) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f27620 + 0x2f27524));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_02f27624 + 0x2f27544));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x1cc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x04cfd760(iVar1,uVar7,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x03b73bf8(iVar5,uVar6,**(undefined4 **)(_UNK_02f27628 + 0x2f2759c));
          }
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 < 0x80000000);
  }
  return;
}

