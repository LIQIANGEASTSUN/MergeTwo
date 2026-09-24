
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01da70cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01da7518 + 0x1da70e4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da751c + 0x1da70f8));
    func_0x01438628(*(undefined4 *)(_UNK_01da7520 + 0x1da7104));
    func_0x01438628(*(undefined4 *)(_UNK_01da7524 + 0x1da7110));
    func_0x01438628(*(undefined4 *)(_UNK_01da7528 + 0x1da711c));
    func_0x01438628(*(undefined4 *)(_UNK_01da752c + 0x1da7128));
    func_0x01438628(*(undefined4 *)(_UNK_01da7530 + 0x1da7134));
    func_0x01438628(*(undefined4 *)(_UNK_01da7534 + 0x1da7140));
    func_0x01438628(*(undefined4 *)(_UNK_01da7538 + 0x1da714c));
    func_0x01438628(*(undefined4 *)(_UNK_01da753c + 0x1da7158));
    func_0x01438628(*(undefined4 *)(_UNK_01da7540 + 0x1da7164));
    func_0x01438628(*(undefined4 *)(_UNK_01da7544 + 0x1da7170));
    func_0x01438628(*(undefined4 *)(_UNK_01da7548 + 0x1da717c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1004,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01da754c + 0x1da71e0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01da7550 + 0x1da71fc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01da7554 + 0x1da721c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1ac);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_01da7558 + 0x1da7264));
    if (iVar3 == 0) {
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01da755c + 0x1da7280));
      func_0x026cdc44(iVar3,0);
      iVar4 = func_0x01da7580(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_01da7560 + 0x1da72dc));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      puVar9 = *(undefined4 **)(_UNK_01da7564 + 0x1da72f8);
      puVar10 = *(undefined4 **)(_UNK_01da7568 + 0x1da7300);
      while (iVar4 = func_0x015101bc(&uStack_38,*puVar9), uVar2 = uStack_2c, iVar4 != 0) {
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar3 + 0x18);
        iVar4 = func_0x01da76b8(param_1,uVar2);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(undefined4 *)(iVar4 + 8);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar6,uVar2,*puVar10);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      }
      func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_01da756c + 0x1da737c));
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x18);
        uVar2 = *(undefined4 *)(param_1 + 0x1c);
        if (iVar3 == 0) {
          func_0x014388e4();
          func_0x026cd868(0,extraout_r1_00,uVar7,uVar2,0);
          uVar8 = *(undefined4 *)(param_1 + 0x20);
          uVar7 = *(undefined4 *)(param_1 + 0x24);
          func_0x014388e4();
          uVar2 = extraout_r1_01;
        }
        else {
          func_0x026cd868(iVar3,(int)((ulonglong)uVar11 >> 0x20),uVar7,uVar2,0);
          uVar8 = *(undefined4 *)(param_1 + 0x20);
          uVar7 = *(undefined4 *)(param_1 + 0x24);
          uVar2 = extraout_r1;
        }
        func_0x026cd938(iVar3,uVar2,uVar8,uVar7,0);
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_01da7578 + 0x1da7448));
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_01da757c + 0x1da747c));
  }
  else {
    iVar1 = func_0x029540a4(0x1004,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028988f0(iVar1,param_1,0);
  }
  return;
}

