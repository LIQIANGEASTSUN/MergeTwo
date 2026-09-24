
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd1794(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_02bd1a10 + 0x2bd17b0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd1a14 + 0x2bd17c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd1a18 + 0x2bd17d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd1a1c + 0x2bd17dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd1a20 + 0x2bd17e8));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x744,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x744,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 != 0) {
    FUN_026f6f10(param_2,0,0);
    FUN_026f6fcc(param_2,0,0);
    iVar3 = *(int *)(param_2 + 0x38);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x03b75c84(iVar3,**(undefined4 **)(_UNK_02bd1a24 + 0x2bd1884));
    uStack_20 = 0;
    FUN_026f6d70(param_2,extraout_r1,0,0);
    uStack_20 = 0;
    FUN_026f6e40(param_2,extraout_r1_00,0,0);
    uStack_20 = 0;
    FUN_026f7088(param_2,extraout_r1_01,0,0);
    uStack_20 = 0;
    FUN_026f72d8(param_2,extraout_r1_02,0,0);
    FUN_026f7160(param_2,0,0);
    iVar3 = *(int *)(param_2 + 0x68);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    puVar8 = *(undefined4 **)(_UNK_02bd1a28 + 0x2bd190c);
    func_0x03b70d24(iVar3,*puVar8);
    FUN_026f75f0(param_2,0,0);
    FUN_026f782c(param_2,0,0);
    FUN_026f721c(param_2,0,0);
    FUN_026f7464(param_2,0,0);
    iVar3 = *(int *)(param_2 + 0x84);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x03b70d24(iVar3,*puVar8);
    if (*(int *)(param_2 + 8) != -1) {
      if (*(int *)(**(int **)(_UNK_02bd1a2c + 0x2bd1984) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd1a30 + 0x2bd19a0));
      uVar6 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x029a6fa8(iVar3,uVar6,0);
      if ((iVar3 != 0) && (0 < *(int *)(iVar3 + 0xe4))) {
        iVar5 = func_0x02bd7af0(param_1,iVar3);
        iVar5 = iVar5 - *(int *)(iVar3 + 0xe4);
        pcVar7 = (char *)(_UNK_026f6fb0 + 0x26f6f28);
        if (*pcVar7 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_026f6fb4 + 0x26f6f3c),iVar5,0);
          func_0x01438628(*(undefined4 *)(_UNK_026f6fb8 + 0x26f6f48));
          *pcVar7 = '\x01';
        }
        if (*(int *)(param_2 + 0x28) == iVar5) {
          return;
        }
        piVar1 = *(int **)(_UNK_026f6fbc + 0x26f6f68);
        *(int *)(param_2 + 0x28) = iVar5;
        if (*(int *)(*piVar1 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026f6fc0 + 0x26f6f88));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = *(uint *)(iVar3 + 0x60);
        *(uint *)(iVar3 + 0x60) = uVar2 + 1;
        *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
        return;
      }
    }
  }
  return;
}

