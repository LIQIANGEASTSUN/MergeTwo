
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc4794(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01cc4b54 + 0x1cc47ac);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc4b58 + 0x1cc47c0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xafc0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xafc0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x015fcde8(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
    iVar1 = FUN_01cc28c8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x01523ccc(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(param_1 + 0x10),0);
    uVar10 = FUN_01cc28c8(param_1);
    uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
    iVar6 = (int)uVar10;
    if (iVar1 == 0) {
      uVar8 = *(undefined4 *)(param_1 + 0x10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x026a7b70(iVar6,uVar8,0);
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026a7c44(iVar1,0,0);
      uVar10 = FUN_01cc28c8(param_1);
      uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 == 0) {
        func_0x014388e4();
        uVar8 = extraout_r1_01;
      }
      uStack_28 = 0;
      func_0x026a7ea0((int)uVar10,uVar8,0,0);
      uVar10 = FUN_01cc28c8(param_1);
      uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 == 0) {
        func_0x014388e4();
        uVar8 = extraout_r1_02;
      }
      uStack_28 = 0;
      func_0x026a7f70((int)uVar10,uVar8,0,0);
      uVar10 = FUN_01cc28c8(param_1);
      uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar9 = *(undefined4 *)(param_1 + 0x18);
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      if ((int)uVar10 == 0) {
        func_0x014388e4();
        uVar8 = extraout_r1_03;
      }
      uStack_28 = 0;
      func_0x026a7d00((int)uVar10,uVar8,uVar9,uVar4);
      uVar10 = FUN_01cc28c8(param_1);
      uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      uVar9 = *(undefined4 *)(param_1 + 0x24);
      if ((int)uVar10 == 0) {
        func_0x014388e4();
        uVar8 = extraout_r1_04;
      }
      uStack_28 = 0;
      func_0x026a7dd0((int)uVar10,uVar8,uVar4,uVar9);
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026a80fc(iVar1,0,0);
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026a81b8(iVar1,0,0);
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026a8040(iVar1,0,0);
      uVar10 = FUN_01cc28c8(param_1);
      uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar10 == 0) {
        func_0x014388e4();
        uVar8 = extraout_r1_05;
      }
      uStack_28 = 0;
      func_0x026a8284((int)uVar10,uVar8,0,0);
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x3c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar7 = *(undefined4 **)(_UNK_01cc4b5c + 0x1cc4ac4);
      func_0x03b75c84(iVar1,*puVar7);
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar1,*puVar7);
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x026a8354(iVar1,0,0);
      iVar1 = FUN_01cc28c8(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      pcVar5 = (char *)(_UNK_026a84b0 + 0x26a8428);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_026a84b4 + 0x26a843c),0,0);
        func_0x01438628(*(undefined4 *)(_UNK_026a84b8 + 0x26a8448));
        *pcVar5 = '\x01';
      }
      if (*(int *)(iVar1 + 0x54) == 0) {
        return;
      }
      piVar2 = *(int **)(_UNK_026a84bc + 0x26a8468);
      *(undefined4 *)(iVar1 + 0x54) = 0;
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_026a84c0 + 0x26a8488));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(uint *)(iVar1 + 0x60);
      *(uint *)(iVar1 + 0x60) = uVar3 + 1;
      *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + (uint)(0xfffffffe < uVar3);
      return;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar6 == 0) {
      func_0x014388e4();
      uVar8 = extraout_r1;
    }
    uStack_28 = 0;
    func_0x026a7d00(iVar6,uVar8,uVar9,uVar4);
    uVar10 = FUN_01cc28c8(param_1);
    uVar8 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    if ((int)uVar10 == 0) {
      func_0x014388e4();
      uVar8 = extraout_r1_00;
    }
    uStack_28 = 0;
    func_0x026a7dd0((int)uVar10,uVar8,uVar9,uVar4);
  }
  return;
}

